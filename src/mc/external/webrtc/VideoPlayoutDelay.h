#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class VideoPlayoutDelay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7d310f;
    ::ll::UntypedStorage<8, 8> mUnk7ff959;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoPlayoutDelay& operator=(VideoPlayoutDelay const&);
    VideoPlayoutDelay(VideoPlayoutDelay const&);
    VideoPlayoutDelay();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VideoPlayoutDelay(::webrtc::TimeDelta, ::webrtc::TimeDelta);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::TimeDelta, ::webrtc::TimeDelta);
    // NOLINTEND
};

} // namespace webrtc
