#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9ee736;
    ::ll::UntypedStorage<8, 16> mUnkab773f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptListener& operator=(ScriptListener const&);
    ScriptListener(ScriptListener const&);
    ScriptListener();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
