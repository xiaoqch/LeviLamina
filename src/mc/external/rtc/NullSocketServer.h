#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SocketServer.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class NullSocketServer : public ::rtc::SocketServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka44e7a;
    // NOLINTEND

public:
    // prevent constructor by default
    NullSocketServer& operator=(NullSocketServer const&);
    NullSocketServer(NullSocketServer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullSocketServer() /*override*/ = default;

    // vIndex: 3
    virtual bool Wait(::webrtc::TimeDelta, bool) /*override*/;

    // vIndex: 4
    virtual void WakeUp() /*override*/;

    // vIndex: 1
    virtual ::rtc::Socket* CreateSocket(int, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NullSocketServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
