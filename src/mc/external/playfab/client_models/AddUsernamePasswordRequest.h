#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct AddUsernamePasswordRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb6b9d2;
    ::ll::UntypedStorage<8, 32> mUnk4c47e3;
    ::ll::UntypedStorage<8, 32> mUnk74797f;
    // NOLINTEND

public:
    // prevent constructor by default
    AddUsernamePasswordRequest& operator=(AddUsernamePasswordRequest const&);
    AddUsernamePasswordRequest(AddUsernamePasswordRequest const&);
    AddUsernamePasswordRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddUsernamePasswordRequest() /*override*/ = default;

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
