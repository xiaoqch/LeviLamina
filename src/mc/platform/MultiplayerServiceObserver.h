#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
namespace mce { class UUID; }
// clang-format on

namespace Social {

class MultiplayerServiceObserver
: public ::Core::Observer<::Social::MultiplayerServiceObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const&, ::std::string const&);

    // vIndex: 3
    virtual void onUserDisconnectedBecauseConcurrentLogin(::std::string const& id);

    // vIndex: 0
    virtual ~MultiplayerServiceObserver() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onUserDisconnectedBecauseConcurrentLogin(::std::string const& id);
    // NOLINTEND
};

} // namespace Social
