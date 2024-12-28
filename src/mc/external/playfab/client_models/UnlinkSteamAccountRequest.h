#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UnlinkSteamAccountRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // prevent constructor by default
    UnlinkSteamAccountRequest& operator=(UnlinkSteamAccountRequest const&);
    UnlinkSteamAccountRequest(UnlinkSteamAccountRequest const&);
    UnlinkSteamAccountRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnlinkSteamAccountRequest() /*override*/;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $FromJson(::Json::Value&);

    MCAPI ::Json::Value $ToJson() const;
    // NOLINTEND
};

} // namespace PlayFab::ClientModels
