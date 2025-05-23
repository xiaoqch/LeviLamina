#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
namespace ScriptModuleMinecraft { class IScriptItemComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { struct SupportedScriptComponentFactoriesEntry; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemComponents {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::shared_ptr<
        ::std::unordered_map<::std::string, ::std::shared_ptr<::ScriptModuleMinecraft::IScriptItemComponentFactory>>>
    _getSupportedItemComponents(
        ::std::vector<::ScriptModuleMinecraft::SupportedScriptComponentFactoriesEntry> const& version,
        ::BaseGameVersion const&                                                              prerelease,
        ::std::string const& supportedComponentTypeNames
    );

    MCNAPI static void bind(
        ::Scripting::ModuleBindingBuilder&                       moduleBuilder,
        ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
