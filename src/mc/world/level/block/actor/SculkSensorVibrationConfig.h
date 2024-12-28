#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListenerConfig.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class GameEvent;
struct GameEventContext;
// clang-format on

class SculkSensorVibrationConfig : public ::VibrationListenerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk7187e1;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkSensorVibrationConfig& operator=(SculkSensorVibrationConfig const&);
    SculkSensorVibrationConfig(SculkSensorVibrationConfig const&);
    SculkSensorVibrationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void
    onSignalReceive(::BlockSource& region, ::BlockPos const&, ::GameEvent const& gameEvent, ::Actor* source, float distance, uint listenerRange, ::Actor*) /*override*/
        ;

    // vIndex: 3
    virtual bool shouldListen(
        ::BlockSource&            region,
        ::GameEvent const&        gameEvent,
        ::GameEventContext const& gameEventContext
    ) /*override*/;

    // vIndex: 4
    virtual void onSerializableDataChanged(::BlockSource& region) /*override*/;

    // vIndex: 5
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const /*override*/;

    // vIndex: 0
    virtual ~SculkSensorVibrationConfig() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SculkSensorVibrationConfig(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $onSignalReceive(::BlockSource& region, ::BlockPos const&, ::GameEvent const& gameEvent, ::Actor* source, float distance, uint listenerRange, ::Actor*);

    MCAPI bool
    $shouldListen(::BlockSource& region, ::GameEvent const& gameEvent, ::GameEventContext const& gameEventContext);

    MCAPI void $onSerializableDataChanged(::BlockSource& region);

    MCAPI bool $canReceiveOnlyIfAdjacentChunksAreTicking() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
