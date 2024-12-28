#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class TransformableFrameInterface {
public:
    // TransformableFrameInterface inner types define
    enum class Direction : int {
        KUnknown  = 0,
        KReceiver = 1,
        KSender   = 2,
    };

public:
    // prevent constructor by default
    TransformableFrameInterface& operator=(TransformableFrameInterface const&);
    TransformableFrameInterface(TransformableFrameInterface const&);
    TransformableFrameInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TransformableFrameInterface();

    // vIndex: 1
    virtual ::rtc::ArrayView<uchar const> GetData() const = 0;

    // vIndex: 2
    virtual void SetData(::rtc::ArrayView<uchar const>) = 0;

    // vIndex: 3
    virtual uchar GetPayloadType() const = 0;

    // vIndex: 4
    virtual uint GetSsrc() const = 0;

    // vIndex: 5
    virtual uint GetTimestamp() const = 0;

    // vIndex: 6
    virtual void SetRTPTimestamp(uint) = 0;

    // vIndex: 7
    virtual ::std::optional<::webrtc::Timestamp> GetCaptureTimeIdentifier() const;

    // vIndex: 8
    virtual ::webrtc::TransformableFrameInterface::Direction GetDirection() const;

    // vIndex: 9
    virtual ::std::string GetMimeType() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::webrtc::Timestamp> $GetCaptureTimeIdentifier() const;

    MCAPI ::webrtc::TransformableFrameInterface::Direction $GetDirection() const;
    // NOLINTEND
};

} // namespace webrtc
