#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketSocketTcpOptions; }
namespace rtc { struct ProxyInfo; }
namespace webrtc { class AsyncDnsResolverInterface; }
// clang-format on

namespace rtc {

class PacketSocketFactory {
public:
    // PacketSocketFactory inner types define
    enum class Options : int {
        // bitfield representation
        TlsFake     = 1 << 0,
        Ssltcp      = 1 << 0,
        Tls         = 1 << 1,
        Stun        = 1 << 2,
        TlsInsecure = 1 << 3,
    };

public:
    // prevent constructor by default
    PacketSocketFactory& operator=(PacketSocketFactory const&);
    PacketSocketFactory(PacketSocketFactory const&);
    PacketSocketFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketSocketFactory();

    // vIndex: 1
    virtual ::rtc::AsyncPacketSocket* CreateUdpSocket(::rtc::SocketAddress const&, ushort, ushort) = 0;

    // vIndex: 2
    virtual ::rtc::AsyncListenSocket* CreateServerTcpSocket(::rtc::SocketAddress const&, ushort, ushort, int) = 0;

    // vIndex: 3
    virtual ::rtc::AsyncPacketSocket*
    CreateClientTcpSocket(::rtc::SocketAddress const&, ::rtc::SocketAddress const&, ::rtc::ProxyInfo const&, ::std::string const&, ::rtc::PacketSocketTcpOptions const&) = 0;

    // vIndex: 4
    virtual ::std::unique_ptr<::webrtc::AsyncDnsResolverInterface> CreateAsyncDnsResolver() = 0;
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

} // namespace rtc