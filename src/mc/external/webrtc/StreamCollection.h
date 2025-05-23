#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaStreamInterface; }
// clang-format on

namespace webrtc {

class StreamCollection {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>);

    MCNAPI void RemoveStream(::webrtc::MediaStreamInterface*);
    // NOLINTEND
};

} // namespace webrtc
