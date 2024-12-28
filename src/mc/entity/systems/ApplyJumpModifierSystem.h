#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRotationComponent;
struct JumpPendingScaleComponent;
struct MobEffectsComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct PowerJumpFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct TriggerJumpRequestComponent;
// clang-format on

struct ApplyJumpModifierSystem {
public:
    // prevent constructor by default
    ApplyJumpModifierSystem& operator=(ApplyJumpModifierSystem const&);
    ApplyJumpModifierSystem(ApplyJumpModifierSystem const&);
    ApplyJumpModifierSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createApplyJumpModifierSystem();

    MCAPI static void tickApplyJumpModifierSystem(
        ::StrictEntityContext const&,
        ::TriggerJumpRequestComponent const& triggerJumpRequestComponent,
        ::ActorRotationComponent const&      actorRotationComponent,
        ::MovementAttributesComponent const& attributesComponent,
        ::MobEffectsComponent const&         mobEffectsComponent,
        ::MobTravelComponent const&          mobTravelComponent,
        ::JumpPendingScaleComponent&         jumpPendingScaleComponent,
        ::StateVectorComponent&              stateVectorComponent
    );
    // NOLINTEND
};
