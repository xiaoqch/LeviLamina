#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DataMessageType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class DataChannelSink {
public:
    // prevent constructor by default
    DataChannelSink& operator=(DataChannelSink const&);
    DataChannelSink(DataChannelSink const&);
    DataChannelSink();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataChannelSink();

    // vIndex: 1
    virtual void OnDataReceived(int, ::webrtc::DataMessageType, ::rtc::CopyOnWriteBuffer const&) = 0;

    // vIndex: 2
    virtual void OnChannelClosing(int) = 0;

    // vIndex: 3
    virtual void OnChannelClosed(int) = 0;

    // vIndex: 4
    virtual void OnReadyToSend() = 0;

    // vIndex: 5
    virtual void OnTransportClosed(::webrtc::RTCError);

    // vIndex: 6
    virtual void OnBufferedAmountLow(int) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnTransportClosed(::webrtc::RTCError);
    // NOLINTEND
};

} // namespace webrtc