#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

namespace ScriptModuleMinecraft {

struct ScriptActorHealthChangedAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk33a526;
    ::ll::UntypedStorage<4, 4>  mUnk87c160;
    ::ll::UntypedStorage<4, 4>  mUnk53d06b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorHealthChangedAfterEvent& operator=(ScriptActorHealthChangedAfterEvent const&);
    ScriptActorHealthChangedAfterEvent(ScriptActorHealthChangedAfterEvent const&);
    ScriptActorHealthChangedAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptActorHealthChangedAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilderReadOnly<::ScriptModuleMinecraft::ScriptActorHealthChangedAfterEvent>
    bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
