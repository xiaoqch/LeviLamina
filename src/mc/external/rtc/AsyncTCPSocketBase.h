#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AsyncPacketSocket.h"
#include "mc/external/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
// clang-format on

namespace rtc {

class AsyncTCPSocketBase : public ::rtc::AsyncPacketSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk744ef4;
    ::ll::UntypedStorage<8, 24> mUnke9e798;
    ::ll::UntypedStorage<8, 24> mUnkb68108;
    ::ll::UntypedStorage<8, 8>  mUnk169cb8;
    ::ll::UntypedStorage<8, 8>  mUnk921ceb;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncTCPSocketBase& operator=(AsyncTCPSocketBase const&);
    AsyncTCPSocketBase(AsyncTCPSocketBase const&);
    AsyncTCPSocketBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncTCPSocketBase() /*override*/ = default;

    // vIndex: 3
    virtual int Send(void const*, uint64, ::rtc::PacketOptions const&) = 0;

    // vIndex: 11
    virtual uint64 ProcessInput(::rtc::ArrayView<uchar const>) = 0;

    // vIndex: 1
    virtual ::rtc::SocketAddress GetLocalAddress() const /*override*/;

    // vIndex: 2
    virtual ::rtc::SocketAddress GetRemoteAddress() const /*override*/;

    // vIndex: 4
    virtual int SendTo(void const*, uint64, ::rtc::SocketAddress const&, ::rtc::PacketOptions const&) /*override*/;

    // vIndex: 5
    virtual int Close() /*override*/;

    // vIndex: 6
    virtual ::rtc::AsyncPacketSocket::State GetState() const /*override*/;

    // vIndex: 7
    virtual int GetOption(::rtc::Socket::Option, int*) /*override*/;

    // vIndex: 8
    virtual int SetOption(::rtc::Socket::Option, int) /*override*/;

    // vIndex: 9
    virtual int GetError() const /*override*/;

    // vIndex: 10
    virtual void SetError(int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AppendToOutBuffer(void const*, uint64);

    MCAPI AsyncTCPSocketBase(::rtc::Socket*, uint64);

    MCAPI int FlushOutBuffer();

    MCAPI void OnCloseEvent(::rtc::Socket*, int);

    MCAPI void OnConnectEvent(::rtc::Socket*);

    MCAPI void OnReadEvent(::rtc::Socket*);

    MCAPI void OnWriteEvent(::rtc::Socket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::Socket*, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
