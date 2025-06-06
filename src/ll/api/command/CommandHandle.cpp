#include "ll/api/command/CommandHandle.h"

#include <string_view>
#include <utility>

#include "ll/api/base/Containers.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/OverloadData.h"
#include "ll/api/command/runtime/RuntimeOverload.h"

#include "mc/server/commands/CommandVersion.h"

namespace ll::command {

struct CommandHandle::Impl {
    bool                        owned;
    CommandRegistrar&           registrar;
    CommandRegistry::Signature& signature;
    std::recursive_mutex        mutex;

    DenseNodeSet<std::string> storedStr; // keep pointer stable

    std::vector<OverloadData> overloads;

    std::vector<CommandRegistry::Overload> disabledOverloads;
};
CommandHandle::CommandHandle(CommandRegistrar& registrar, CommandRegistry::Signature& signature, bool owned)
: impl(std::make_unique<Impl>(owned, registrar, signature)) {}

CommandHandle::~CommandHandle() = default;

CommandRegistrar& CommandHandle::getRegistrar() { return impl->registrar; }

size_t CommandHandle::disableModOverloads(std::string_view modName) {
    std::lock_guard lock{impl->mutex};
    if (modName.empty()) {
        return 0;
    }
    return erase_if(impl->overloads, [&](auto& overload) -> bool {
        if (!overload.getMod().expired() && (overload.getMod().lock()->getName() != modName)) {
            return false;
        }
        erase_if(impl->signature.overloads, [&](auto& o) {
            if (o.params == overload.getParams()) {
                impl->disabledOverloads.emplace_back(std::move(o));
                return true;
            }
            return false;
        });
        return true;
    });
}
void CommandHandle::registerOverload(OverloadData& d) {
    std::lock_guard lock{impl->mutex};
    auto&           data = impl->overloads.emplace_back(std::move(d));
    if (erase_if(impl->disabledOverloads, [&](auto& o) {
            if (o.params == data.getParams()) {
                impl->signature.overloads.emplace_back(std::move(o)).alloc = data.getFactory();
                return true;
            }
            return false;
        })) {
        return;
    }
    for (auto& o : impl->signature.overloads) {
        if (o.params == data.getParams()) {
            o.alloc = data.getFactory();
            return;
        }
    }
    auto& overload  = impl->signature.overloads.emplace_back(CommandVersion{}, data.getFactory());
    overload.params = data.getParams();
    impl->registrar.getRegistry().registerOverloadInternal(impl->signature, overload);
}
char const* CommandHandle::addText(std::string_view text) { return impl->registrar.addText(*this, text); }

char const* CommandHandle::storeStr(std::string_view str) {
    std::lock_guard lock{impl->mutex};
    return impl->storedStr.lazy_emplace(str, [&](auto const& ctor) { ctor(std::string{str}); })->c_str();
}
RuntimeOverload CommandHandle::runtimeOverload(std::weak_ptr<mod::Mod> mod) {
    return RuntimeOverload{*this, std::move(mod)};
}
CommandHandle& CommandHandle::alias(std::string_view alias) {
    std::lock_guard lock{impl->mutex};
    std::string     str{alias};
    if (!impl->registrar.getRegistry().findCommand(str)) {
        impl->registrar.getRegistry().registerAlias(impl->signature.name, std::move(str));
    }
    return *this;
}
std::vector<std::string> CommandHandle::alias() const {
    std::lock_guard lock{impl->mutex};
    return impl->registrar.getRegistry().getAliases(impl->signature.name);
}
} // namespace ll::command
