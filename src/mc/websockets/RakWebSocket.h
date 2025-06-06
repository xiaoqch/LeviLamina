#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CloseStatusCode.h"
#include "mc/websockets/OpCode.h"
#include "mc/websockets/WSConnectionResult.h"

// auto generated forward declare list
// clang-format off
class RakWebSocketDataFrame;
class TcpProxy;
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocket {
public:
    // RakWebSocket inner types define
    enum class PacketDirection : int {
        Inward   = 1,
        Outward  = 2,
        Bothways = 3,
    };

    enum class ConnectionState : int {
        None               = 0,
        CloseHandshake     = 1,
        Starting           = 2,
        Connecting         = 3,
        OpenHandshakeInit  = 4,
        OpenHandshakeAwait = 5,
        OpenAndProcessing  = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk8dc180;
    ::ll::UntypedStorage<8, 136> mUnk33094b;
    ::ll::UntypedStorage<8, 288> mUnkf81a14;
    ::ll::UntypedStorage<8, 32>  mUnk9fda3d;
    ::ll::UntypedStorage<2, 2>   mUnkd89728;
    ::ll::UntypedStorage<1, 1>   mUnk21496a;
    ::ll::UntypedStorage<4, 4>   mUnk353334;
    ::ll::UntypedStorage<8, 104> mUnk36f6f3;
    ::ll::UntypedStorage<8, 32>  mUnk3e1e17;
    ::ll::UntypedStorage<1, 1>   mUnkecfccb;
    ::ll::UntypedStorage<8, 64>  mUnkbc67d8;
    ::ll::UntypedStorage<8, 64>  mUnkb91861;
    ::ll::UntypedStorage<8, 64>  mUnk1ffa0d;
    ::ll::UntypedStorage<8, 32>  mUnkd9cf46;
    ::ll::UntypedStorage<8, 32>  mUnk9c97f4;
    ::ll::UntypedStorage<8, 32>  mUnke28242;
    ::ll::UntypedStorage<8, 32>  mUnkeb54d8;
    ::ll::UntypedStorage<8, 32>  mUnk4a88f7;
    ::ll::UntypedStorage<2, 2>   mUnkc7a25d;
    ::ll::UntypedStorage<1, 1>   mUnk67328e;
    ::ll::UntypedStorage<8, 32>  mUnk60a8e6;
    ::ll::UntypedStorage<8, 32>  mUnka50af4;
    ::ll::UntypedStorage<8, 32>  mUnkb0ccf9;
    ::ll::UntypedStorage<8, 128> mUnk6c717f;
    ::ll::UntypedStorage<8, 8>   mUnk5f029b;
    ::ll::UntypedStorage<8, 24>  mUnk9ddaab;
    ::ll::UntypedStorage<4, 4>   mUnk8a7ba4;
    // NOLINTEND

public:
    // prevent constructor by default
    RakWebSocket& operator=(RakWebSocket const&);
    RakWebSocket(RakWebSocket const&);
    RakWebSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakWebSocket();

    // vIndex: 2
    virtual ::WSConnectionResult connect(::std::string const& uri, ::std::vector<::std::string> const& subProtocols);

    // vIndex: 1
    virtual ::WSConnectionResult connect(::std::string const& uri);

    // vIndex: 3
    virtual bool isReady() const;

    // vIndex: 4
    virtual void setOnMessageReceivedHandler(::std::function<void(::RakWebSocketDataFrame const&)> const& handler);

    // vIndex: 5
    virtual void setOnCloseHandler(::std::function<void(::CloseStatusCode, ::std::string const&)> const& handler);

    // vIndex: 6
    virtual void setOnConnectedHandler(::std::function<void(::std::string const&)> const& handler);

    // vIndex: 7
    virtual void tick();

    // vIndex: 8
    virtual void _updateState() = 0;

    // vIndex: 9
    virtual uint _genMaskingKey() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RakWebSocket(::std::unique_ptr<::TcpProxy> proxy, bool isServer);

    MCNAPI void _close(::CloseStatusCode code);

    MCNAPI void _createWebSocketKey();

    MCNAPI void _fail(::std::string const& error, ::CloseStatusCode code);

    MCNAPI ::std::string _generateBase64SHA1Key(::std::string const& key);

    MCNAPI void _processClosingHandshake(bool notifyHandler);

    MCNAPI void _processDataFrames(::RakNet::BitStream& newIncoming);

    MCNAPI bool
    _processPacket(::std::function<void(::RakNet::BitStream&)> const& processStep, bool acceptNewConnection);

    MCNAPI void _reset();

    MCNAPI bool _sendControlFrame(uchar const* payload, uint64 size, ::OpCode opCode);

    MCNAPI bool _sendDataFrame(uchar const* payload, uint size, ::OpCode opCode, bool isFinalFragment);

    MCNAPI bool _sendNonControlFrame(uchar const* payload, uint64 size, ::OpCode opCode);

    MCNAPI void
    _splitWebSocketURI(::std::string const& uri, ::std::string& scheme, ::std::string& host, ::std::string& path);

    MCNAPI void _subProcessHttpResponse(::RakNet::BitStream& newIncoming);

    MCNAPI void _validateFields();

    MCNAPI bool _validateWebSocketURI();

    MCNAPI bool send(::std::string const& message);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::TcpProxy> proxy, bool isServer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::WSConnectionResult $connect(::std::string const& uri, ::std::vector<::std::string> const& subProtocols);

    MCNAPI ::WSConnectionResult $connect(::std::string const& uri);

    MCNAPI bool $isReady() const;

    MCNAPI void $setOnMessageReceivedHandler(::std::function<void(::RakWebSocketDataFrame const&)> const& handler);

    MCNAPI void $setOnCloseHandler(::std::function<void(::CloseStatusCode, ::std::string const&)> const& handler);

    MCNAPI void $setOnConnectedHandler(::std::function<void(::std::string const&)> const& handler);

    MCNAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
