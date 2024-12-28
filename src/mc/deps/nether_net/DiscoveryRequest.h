#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::LanEvents {

struct DiscoveryRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcadee7;
    ::ll::UntypedStorage<8, 8> mUnk809892;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryRequest& operator=(DiscoveryRequest const&);
    DiscoveryRequest(DiscoveryRequest const&);
    DiscoveryRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DiscoveryRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::LanEvents
