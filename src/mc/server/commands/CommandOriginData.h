#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/server/commands/CommandOriginType.h"

struct CommandOriginData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CommandOriginType> mType;
    ::ll::TypedStorage<8, 16, ::mce::UUID>        mUUID;
    ::ll::TypedStorage<8, 32, ::std::string>      mRequestId;
    ::ll::TypedStorage<8, 8, int64>               mPlayerId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandOriginData(::CommandOriginData const& other);

    MCNAPI ::CommandOriginData& operator=(::CommandOriginData const& rhs);

    MCNAPI ~CommandOriginData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommandOriginData const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
