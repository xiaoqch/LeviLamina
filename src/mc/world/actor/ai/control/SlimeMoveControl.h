#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/MoveControl.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
// clang-format on

class SlimeMoveControl : public ::MoveControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2de422;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeMoveControl& operator=(SlimeMoveControl const&);
    SlimeMoveControl(SlimeMoveControl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob) /*override*/;

    // vIndex: 0
    virtual ~SlimeMoveControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SlimeMoveControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
