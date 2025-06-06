#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class LevelComponent;
class StrictEntityContext;
struct AbilitiesDirtyComponent;
struct ActorTickedComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

class AgentAbilitiesSyncSystem : public ::ITickingSystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentAbilitiesSyncSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createAgentAbilitiesSyncSystem();

    MCNAPI static void tick(
        ::ViewT<
            ::StrictEntityContext,
            ::ActorOwnerComponent,
            ::PlayerComponent,
            ::Include<::ActorTickedComponent const, ::AbilitiesDirtyComponent>> view,
        ::ViewT<::StrictEntityContext, ::LevelComponent>                        levelView,
        ::EntityModifier<::AbilitiesDirtyComponent>                             modifier
    );
    // NOLINTEND
};
