#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class BaseRtpStringExtension {
public:
    // prevent constructor by default
    BaseRtpStringExtension& operator=(BaseRtpStringExtension const&);
    BaseRtpStringExtension(BaseRtpStringExtension const&);
    BaseRtpStringExtension();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool Parse(::rtc::ArrayView<uchar const>, ::std::string*);

    MCAPI static bool Write(::rtc::ArrayView<uchar>, ::std::string_view);
    // NOLINTEND
};

} // namespace webrtc
