#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
class StrictEntityContext;
// clang-format on

namespace AuthorityDependentSystem {

struct AuthorityDependentSystemImpl : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbb1bc5;
    ::ll::UntypedStorage<4, 4> mUnk486d74;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthorityDependentSystemImpl& operator=(AuthorityDependentSystemImpl const&);
    AuthorityDependentSystemImpl(AuthorityDependentSystemImpl const&);
    AuthorityDependentSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tick(::EntityRegistry& registry) /*override*/;

    // vIndex: 4
    virtual void singleTick(::EntityRegistry& registry, ::EntityContext& entity) /*override*/;

    // vIndex: 3
    virtual void singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext) /*override*/;

    // vIndex: 0
    virtual ~AuthorityDependentSystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::EntityRegistry& registry);

    MCNAPI void $singleTick(::EntityRegistry& registry, ::EntityContext& entity);

    MCNAPI void $singleTick(::EntityRegistry& registry, ::StrictEntityContext& entityContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AuthorityDependentSystem
