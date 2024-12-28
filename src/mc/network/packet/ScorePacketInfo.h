#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/IdentityDefinition.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct PlayerScoreboardId;
struct ScoreboardId;
// clang-format on

struct ScorePacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId>            mScoreboardId;
    ::ll::TypedStorage<8, 32, ::std::string>             mObjectiveName;
    ::ll::TypedStorage<4, 4, int>                        mScoreValue;
    ::ll::TypedStorage<1, 1, ::IdentityDefinition::Type> mIdentityType;
    ::ll::TypedStorage<8, 8, ::PlayerScoreboardId>       mPlayerId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>            mEntityId;
    ::ll::TypedStorage<8, 32, ::std::string>             mFakePlayerName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScorePacketInfo& operator=(ScorePacketInfo const&);
    ScorePacketInfo(ScorePacketInfo const&);
    ScorePacketInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScorePacketInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
