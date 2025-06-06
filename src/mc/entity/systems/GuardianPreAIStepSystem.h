#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct GuardianFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class GuardianPreAIStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _doGuardianPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCNAPI static void
    _tickGuardianPreAIStepSystem(::ViewT<
                                 ::StrictEntityContext,
                                 ::Include<::ActorMovementTickNeededComponent, ::GuardianFlagComponent>,
                                 ::ActorOwnerComponent> view);

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
