#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class PlayerMovementSettingsComponent;
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ClientInputLockComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct ServerPlayerCurrentMovementComponent;
struct SneakingComponent;
struct VanillaClientGameplayComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace ServerMoveInputHandlerSystemUtils {
// functions
// NOLINTBEGIN
MCAPI void _tickServerMoveInputHandler(
    ::StrictEntityContext&,
    ::MovementAbilitiesComponent const&                        abilitiesComponent,
    ::ServerPlayerCurrentMovementComponent const&              serverPlayerCurrentMovementComponent,
    ::ClientInputLockComponent&                                lockComponent,
    ::MoveInputComponent&                                      input,
    ::ActorDataFlagComponent&                                  actorDataFlag,
    ::ActorDataDirtyFlagsComponent&                            actorDataDirtyFlags,
    ::VanillaClientGameplayComponent&                          vanillaClientGameplayComponent,
    ::Optional<::SneakingComponent const>                      sneakingComponent,
    ::Optional<::WasInWaterFlagComponent const>                isInWater,
    ::OptionalGlobal<::PlayerMovementSettingsComponent const>& playerMovementSettingsComponent
);
// NOLINTEND

} // namespace ServerMoveInputHandlerSystemUtils
