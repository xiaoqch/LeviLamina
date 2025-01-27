#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct OpenTradeRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk84f5d3;
    ::ll::UntypedStorage<8, 16> mUnk9c267b;
    ::ll::UntypedStorage<8, 16> mUnk3a1961;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenTradeRequest& operator=(OpenTradeRequest const&);
    OpenTradeRequest(OpenTradeRequest const&);
    OpenTradeRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OpenTradeRequest() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab::ClientModels
