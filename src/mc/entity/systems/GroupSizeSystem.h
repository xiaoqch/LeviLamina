#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntityRegistry;
struct GroupSizeComponent;
// clang-format on

class GroupSizeSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GroupSizeSystem& operator=(GroupSizeSystem const&);
    GroupSizeSystem(GroupSizeSystem const&);
    GroupSizeSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 0
    virtual ~GroupSizeSystem() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _tickComponent(::ActorOwnerComponent& actorOwnerComponent, ::GroupSizeComponent& groupSizeComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::EntityRegistry& registry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
