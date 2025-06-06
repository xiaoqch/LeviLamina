#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/actor/ActorInitializationMethod.h"

namespace ScriptModuleMinecraft {

struct ScriptActorInitializationCause {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBindingBuilder<::std::string, ::ActorInitializationMethod> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
