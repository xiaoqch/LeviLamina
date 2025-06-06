#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct BoatFlagComponent;
struct FallDistanceComponent;
struct FallingBlockFlagComponent;
struct PassengerComponent;
struct UpdateWaterStateRequestComponent;
struct VehicleComponent;
struct WasInWaterFlagComponent;
struct WaterSplashEffectRequestComponent;
// clang-format on

struct InWaterSensingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doInWaterSensing(
        ::StrictEntityContext&                        entity,
        ::UpdateWaterStateRequestComponent const&     updateWaterStateRequestComponent,
        ::FallDistanceComponent&                      fallDistanceComponent,
        ::Optional<::FallingBlockFlagComponent const> fallingBlockFlagComponent,
        ::Optional<::PassengerComponent const>        passengerComponent,
        ::Optional<::WasInWaterFlagComponent const>   wasInWaterComponent,
        ::EntityModifier<::WasInWaterFlagComponent, ::WaterSplashEffectRequestComponent>   modifier,
        ::ViewT<::StrictEntityContext, ::Include<::BoatFlagComponent, ::VehicleComponent>> boatVehicle
    );

    MCNAPI static void singleTickInWaterSensing(
        ::StrictEntityContext& entity,
        ::ViewT<
            ::StrictEntityContext,
            ::UpdateWaterStateRequestComponent const,
            ::FallDistanceComponent,
            ::Optional<::FallingBlockFlagComponent const>,
            ::Optional<::PassengerComponent const>,
            ::Optional<::WasInWaterFlagComponent const>>                                   view,
        ::EntityModifier<::WasInWaterFlagComponent, ::WaterSplashEffectRequestComponent>   modifier,
        ::ViewT<::StrictEntityContext, ::Include<::BoatFlagComponent, ::VehicleComponent>> boatVehicle
    );
    // NOLINTEND
};
