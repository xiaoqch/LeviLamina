#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/control/Control.h"

// auto generated forward declare list
// clang-format off
class Mob;
class MoveControlComponent;
class Vec3;
struct MoveControlDescription;
// clang-format on

class MoveControl : public ::Control {
public:
    // prevent constructor by default
    MoveControl& operator=(MoveControl const&);
    MoveControl(MoveControl const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveControl() /*override*/;

    // vIndex: 1
    virtual void initializeInternal(::Mob& mob, ::MoveControlDescription* description);

    // vIndex: 2
    virtual void tick(::MoveControlComponent& parent, ::Mob& mob);

    // vIndex: 3
    virtual void setWantedPosition(::MoveControlComponent& parent, ::Mob&, ::Vec3 const& position, float speed);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MoveControl();

    MCAPI float
    calculateMoveSpeed(::MoveControlComponent const& parent, ::Mob& mob, ::Vec3 const& endPosition, float maxMoveSpeed);

    MCAPI float calculateYRotation(
        ::MoveControlComponent const& parent,
        ::Mob const&                  mob,
        ::Vec3 const&                 positionDifference,
        float                         maxMoveSpeed
    );

    MCAPI bool shouldSlowSpeed(::MoveControlComponent const& parent, ::Mob const& mob, float endDistanceSqr);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MIN_DELTA_TO_JUMP();

    MCAPI static float const& MIN_DELTA_TO_JUMP_UNDERWATER();

    MCAPI static float const& MIN_DELTA_TO_MOVE();

    MCAPI static float const& MIN_SPEED();

    MCAPI static float const& MIN_SPEED_SQR();
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
    MCAPI void $initializeInternal(::Mob& mob, ::MoveControlDescription* description);

    MCAPI void $tick(::MoveControlComponent& parent, ::Mob& mob);

    MCAPI void $setWantedPosition(::MoveControlComponent& parent, ::Mob&, ::Vec3 const& position, float speed);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
