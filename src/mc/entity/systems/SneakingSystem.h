#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

class SneakingSystem {
public:
    // prevent constructor by default
    SneakingSystem& operator=(SneakingSystem const&);
    SneakingSystem(SneakingSystem const&);
    SneakingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SneakingSystem() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<class FlagComponent<struct ActorTickedFlag>>,
                      struct Read<class FlagComponent<struct PlayerComponentFlag>>,
                      struct Write<struct SneakingComponent, class ActorOwnerComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& context);

    MCAPI static void _tickSneakingSystem(
        class StrictEntityContext&,
        class FlagComponent<struct PlayerComponentFlag> const& playerTag,
        struct SneakingComponent&                              sneaking,
        class ActorOwnerComponent&                             actorOwner
    );

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
