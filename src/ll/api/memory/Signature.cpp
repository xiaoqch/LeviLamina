#include "ll/api/memory/Signature.h"

#include <execution>

#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::memory {

void* SignatureView::resolve(bool disableErrorOutput) const {
    auto res = resolve(sys_utils::getImageRange(), true);
    if (!res && !disableErrorOutput) {
        getLogger().fatal("Couldn't find: {}", toString());
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}
std::string SignatureView::toString(bool alignWildcard, bool upperCase) const {
    std::string result;
    bool        first = true;
    for (auto& element : elements) {
        if (first) {
            first = false;
        } else {
            result += " ";
        }
        if (element.isWildcard()) {
            result += alignWildcard ? "??" : "?";
        } else {
            auto x  = static_cast<uchar>(*element);
            result += string_utils::charFromInt(upperCase, x / 16);
            result += string_utils::charFromInt(upperCase, x % 16);
        }
    }
    return result;
}

} // namespace ll::memory
