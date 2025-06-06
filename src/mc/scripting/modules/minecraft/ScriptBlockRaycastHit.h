#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptBlockRaycastHit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5eb143;
    ::ll::UntypedStorage<4, 4>  mUnk9494f0;
    ::ll::UntypedStorage<4, 12> mUnk28059b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockRaycastHit& operator=(ScriptBlockRaycastHit const&);
    ScriptBlockRaycastHit(ScriptBlockRaycastHit const&);
    ScriptBlockRaycastHit();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockRaycastHit();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptBlockRaycastHit> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
