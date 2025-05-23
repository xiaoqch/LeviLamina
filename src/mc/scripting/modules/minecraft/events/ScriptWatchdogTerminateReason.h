#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/events/WatchdogTerminateReason.h"

namespace ScriptModuleMinecraft {

struct ScriptWatchdogTerminateReason {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBindingBuilder<::std::string, ::WatchdogTerminateReason> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
