#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SocketServer.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Dispatcher; }
namespace rtc { class Socket; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class PhysicalSocketServer : public ::rtc::SocketServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkaba5fc;
    ::ll::UntypedStorage<8, 64> mUnk4edac2;
    ::ll::UntypedStorage<8, 64> mUnk923fc9;
    ::ll::UntypedStorage<8, 24> mUnkdf26f0;
    ::ll::UntypedStorage<8, 8>  mUnk3f82bf;
    ::ll::UntypedStorage<8, 40> mUnk373268;
    ::ll::UntypedStorage<8, 8>  mUnk61f92d;
    ::ll::UntypedStorage<1, 1>  mUnk5769cd;
    ::ll::UntypedStorage<1, 1>  mUnke4c28e;
    // NOLINTEND

public:
    // prevent constructor by default
    PhysicalSocketServer& operator=(PhysicalSocketServer const&);
    PhysicalSocketServer(PhysicalSocketServer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PhysicalSocketServer() /*override*/;

    // vIndex: 1
    virtual ::rtc::Socket* CreateSocket(int, int) /*override*/;

    // vIndex: 5
    virtual ::rtc::Socket* WrapSocket(uint64);

    // vIndex: 3
    virtual bool Wait(::webrtc::TimeDelta, bool) /*override*/;

    // vIndex: 4
    virtual void WakeUp() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Add(::rtc::Dispatcher*);

    MCAPI PhysicalSocketServer();

    MCAPI void Remove(::rtc::Dispatcher*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int ToCmsWait(::webrtc::TimeDelta);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::rtc::Socket* $CreateSocket(int, int);

    MCAPI ::rtc::Socket* $WrapSocket(uint64);

    MCAPI bool $Wait(::webrtc::TimeDelta, bool);

    MCAPI void $WakeUp();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc