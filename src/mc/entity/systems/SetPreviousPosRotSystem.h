#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRotationComponent;
struct PrevPosRotSetThisTickFlagComponent;
struct StateVectorComponent;
// clang-format on

struct SetPreviousPosRotSystem {
public:
    // prevent constructor by default
    SetPreviousPosRotSystem& operator=(SetPreviousPosRotSystem const&);
    SetPreviousPosRotSystem(SetPreviousPosRotSystem const&);
    SetPreviousPosRotSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setPreviousPosRot(
        ::StrictEntityContext&                                 entity,
        ::StateVectorComponent&                                stateVectorComponent,
        ::ActorRotationComponent&                              actorRotationComponent,
        ::EntityModifier<::PrevPosRotSetThisTickFlagComponent> modifier
    );
    // NOLINTEND
};
