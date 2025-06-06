#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/level/storage/ILevelStorageManagerConnector.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class GameDataSaveTimer;
class IDimensionManagerConnector;
class IMinecraftEventing;
class IPlayerDeathManagerConnector;
class LevelStorage;
class Player;
class UserStorageChecker;
// clang-format on

class LevelStorageManager : public ::ILevelStorageManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkeb6d54;
    ::ll::UntypedStorage<8, 80>  mUnk6f5c89;
    ::ll::UntypedStorage<8, 8>   mUnk24c5f1;
    ::ll::UntypedStorage<8, 8>   mUnkf8c968;
    ::ll::UntypedStorage<8, 128> mUnk6626a0;
    ::ll::UntypedStorage<8, 128> mUnk7a64ad;
    ::ll::UntypedStorage<8, 128> mUnkab7b3a;
    ::ll::UntypedStorage<8, 128> mUnkb83608;
    ::ll::UntypedStorage<8, 128> mUnk612f75;
    ::ll::UntypedStorage<8, 128> mUnkac98df;
    ::ll::UntypedStorage<8, 16>  mUnk4f2d81;
    ::ll::UntypedStorage<8, 16>  mUnkd9bcd3;
    ::ll::UntypedStorage<1, 1>   mUnkdde89a;
    ::ll::UntypedStorage<8, 8>   mUnk1c1e6c;
    ::ll::UntypedStorage<4, 4>   mUnk40512b;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageManager& operator=(LevelStorageManager const&);
    LevelStorageManager(LevelStorageManager const&);
    LevelStorageManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelStorageManager() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveGameDataConnector() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveLevelDataConnector() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::PubSub::Connector<void(bool&)>& getOnCanStartGameSaveTimerCheckConnector() /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnStartLeaveGameConnector() /*override*/;

    // vIndex: 6
    virtual ::Bedrock::PubSub::Connector<void()>& getOnAppSuspendConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelStorageManager(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::std::unique_ptr<::GameDataSaveTimer>        gameDataSaveTimer,
        ::std::unique_ptr<::UserStorageChecker>       userStorageChecker,
        ::IMinecraftEventing&                         eventing
    );

    MCNAPI void _onNewDimensionCreated(::Dimension& dimension);

    MCNAPI void _savePlayer(::Player& player);

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::LevelStorage> getLevelStorage();

    MCNAPI void initializeWithDimensionManager(::IDimensionManagerConnector& dimensionManagerConnector);

    MCNAPI void initializeWithPlayerDeathManager(::IPlayerDeathManagerConnector& playerDeathManagerConnector);

    MCNAPI void onStartLeaveGame();

    MCNAPI void save(::std::chrono::steady_clock::time_point currentTime);

    MCNAPI void saveGameData(::std::chrono::steady_clock::time_point currentTime);

    MCNAPI void saveLevelData();

    MCNAPI void trySaveGameData(::std::chrono::steady_clock::time_point currentTime);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::UniqueOwnerPointer<::LevelStorage> levelStorage,
        ::std::unique_ptr<::GameDataSaveTimer>        gameDataSaveTimer,
        ::std::unique_ptr<::UserStorageChecker>       userStorageChecker,
        ::IMinecraftEventing&                         eventing
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveGameDataConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnSaveLevelDataConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(bool&)>& $getOnCanStartGameSaveTimerCheckConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& $getOnStartLeaveGameConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void()>& $getOnAppSuspendConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
