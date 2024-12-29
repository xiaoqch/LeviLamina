#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct NeedsUpgradeToBodySlotFlagComponent;
struct SkipBodySlotUpgradeFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class UpgradeToBodySlotSystem {
public:
    // prevent constructor by default
    UpgradeToBodySlotSystem& operator=(UpgradeToBodySlotSystem const&);
    UpgradeToBodySlotSystem(UpgradeToBodySlotSystem const&);
    UpgradeToBodySlotSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _tick(
        ::ViewT<::StrictEntityContext, ::Include<::NeedsUpgradeToBodySlotFlagComponent>, ::ActorOwnerComponent> view,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent, ::SkipBodySlotUpgradeFlagComponent>             modifier
    );

    MCAPI static void _upgrade(
        ::StrictEntityContext& strictEntityContext,
        ::ActorOwnerComponent& actorOwnerComponent,
        ::EntityModifier<::NeedsUpgradeToBodySlotFlagComponent, ::SkipBodySlotUpgradeFlagComponent>& modifier
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};