#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptObjectiveSortOrderType.h"

namespace ScriptModuleMinecraft {

struct ScriptObjectiveSortOrder {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBindingBuilder<
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
