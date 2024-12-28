#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptJigsawPlaceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk37f030;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptJigsawPlaceOptions& operator=(ScriptJigsawPlaceOptions const&);
    ScriptJigsawPlaceOptions(ScriptJigsawPlaceOptions const&);
    ScriptJigsawPlaceOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptJigsawPlaceOptions> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
