#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorUniqueIDComponent;
struct BounceComponent;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class BounceEventingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doBounceEventingSystem(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&                                   stateVectorComponent,
        ::ActorUniqueIDComponent const&                                 actorUniqueIDComponent,
        ::EventingDispatcherComponent const&                            eventingDispatcherComponent,
        ::BounceComponent&                                              bounceComponent,
        ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent> requestQueueView
    );

    MCNAPI static void _tickBounceEventingSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::PlayerComponent>,
            ::StateVectorComponent const,
            ::ActorUniqueIDComponent const,
            ::EventingDispatcherComponent const,
            ::BounceComponent>                                          view,
        ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent> requestQueueView
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
