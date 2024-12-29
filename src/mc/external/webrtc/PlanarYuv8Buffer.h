#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PlanarYuvBuffer.h"

namespace webrtc {

class PlanarYuv8Buffer : public ::webrtc::PlanarYuvBuffer {
public:
    // prevent constructor by default
    PlanarYuv8Buffer& operator=(PlanarYuv8Buffer const&);
    PlanarYuv8Buffer(PlanarYuv8Buffer const&);
    PlanarYuv8Buffer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 15
    virtual uchar const* DataY() const = 0;

    // vIndex: 16
    virtual uchar const* DataU() const = 0;

    // vIndex: 17
    virtual uchar const* DataV() const = 0;

    // vIndex: 2
    virtual ~PlanarYuv8Buffer() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc