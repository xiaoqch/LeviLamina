#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoLayersAllocation {
public:
    // VideoLayersAllocation inner types declare
    // clang-format off
    struct SpatialLayer;
    // clang-format on

    // VideoLayersAllocation inner types define
    struct SpatialLayer {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SpatialLayer(::webrtc::VideoLayersAllocation::SpatialLayer const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::VideoLayersAllocation::SpatialLayer const&);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VideoLayersAllocation(::webrtc::VideoLayersAllocation&&);

    MCAPI VideoLayersAllocation(::webrtc::VideoLayersAllocation const&);

    MCAPI ~VideoLayersAllocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::VideoLayersAllocation&&);

    MCAPI void* $ctor(::webrtc::VideoLayersAllocation const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
