#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/editor/serviceproviders/PayloadServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class EditorNetworkPacket;
class PacketSender;
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class INetworkPayload; }
// clang-format on

namespace Editor::Network {

class PayloadService : public ::Editor::Services::IEditorService, public ::Editor::Network::PayloadServiceProvider {
public:
    // PayloadService inner types declare
    // clang-format off
    struct CachedPacket;
    struct ConstructionInfo;
    // clang-format on

    // PayloadService inner types define
    enum class SendTarget : int {
        ServerPlayer              = 0,
        ClientPlayer              = 1,
        ServerManager             = 2,
        ClientManager             = 3,
        BroadcastToClientPlayers  = 4,
        BroadcastToClientManagers = 5,
    };

    struct ConstructionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkaf66f0;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstructionInfo& operator=(ConstructionInfo const&);
        ConstructionInfo(ConstructionInfo const&);
        ConstructionInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ConstructionInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct CachedPacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkea7626;
        ::ll::UntypedStorage<8, 80> mUnk8c3e7c;
        ::ll::UntypedStorage<4, 4>  mUnk88f348;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedPacket& operator=(CachedPacket const&);
        CachedPacket(CachedPacket const&);
        CachedPacket();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~CachedPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke68287;
    ::ll::UntypedStorage<8, 64> mUnk633e21;
    ::ll::UntypedStorage<1, 1>  mUnk880d81;
    ::ll::UntypedStorage<8, 24> mUnk5cce2e;
    ::ll::UntypedStorage<8, 24> mUnk17b6ea;
    ::ll::UntypedStorage<8, 24> mUnk64c932;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadService& operator=(PayloadService const&);
    PayloadService(PayloadService const&);
    PayloadService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PayloadService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> dispatchToSelf(::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 2
    virtual void onReceivePayload(::EditorNetworkPacket const& packet) /*override*/;

    // vIndex: 3
    virtual void _registerPayload(
        char const*                                                              payloadName,
        ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc
    ) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result<void> _send(::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result<void> _sendToManager(::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result<void> _broadcastToClients(::Editor::Network::INetworkPayload& payload) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> _broadcastToClientManagers(::Editor::Network::INetworkPayload& payload
    ) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> _listenFor(
        char const*                                                      payloadName,
        ::std::function<void(::Editor::Network::INetworkPayload const&)> func
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PayloadService(
        ::Editor::ServiceProviderCollection& providers,
        ::WeakEntityRef                      optionalPlayerRef,
        ::PacketSender&                      packetSender,
        bool                                 isClientSide
    );

    MCAPI ::Bedrock::PubSub::
        Publisher<void(::Editor::Network::INetworkPayload const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded>*
        _findOrCreatePublisher(uint hashVal);

    MCAPI ::std::shared_ptr<::Editor::Network::INetworkPayload> _load(::CompoundTag const* data);

    MCAPI ::Scripting::Result_deprecated<::EditorNetworkPacket>
    _populatePacket(::Editor::Network::INetworkPayload* payload, ::Editor::Network::PayloadService::SendTarget target);

    MCAPI void _registerPacketFactory(
        char const*                                                              payloadName,
        ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc
    );

    MCAPI ::Scripting::Result<void>
    _sendToClient(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadService::SendTarget target);

    MCAPI ::Scripting::Result<void>
    _sendToServer(::Editor::Network::INetworkPayload& payload, ::Editor::Network::PayloadService::SendTarget target);

    MCAPI ::Scripting::Result<void> _sendToTarget(
        ::Actor*                                      actor,
        ::EditorNetworkPacket&                        outPacket,
        ::Editor::Network::PayloadService::SendTarget toWhom
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& msPayloadNameKey();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Editor::ServiceProviderCollection& providers,
        ::WeakEntityRef                      optionalPlayerRef,
        ::PacketSender&                      packetSender,
        bool                                 isClientSide
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Scripting::Result<void> $dispatchToSelf(::Editor::Network::INetworkPayload& payload);

    MCAPI void $onReceivePayload(::EditorNetworkPacket const& packet);

    MCAPI void $_registerPayload(
        char const*                                                              payloadName,
        ::std::function<::std::shared_ptr<::Editor::Network::INetworkPayload>()> constructorFunc
    );

    MCAPI ::Scripting::Result<void> $_send(::Editor::Network::INetworkPayload& payload);

    MCAPI ::Scripting::Result<void> $_sendToManager(::Editor::Network::INetworkPayload& payload);

    MCAPI ::Scripting::Result<void> $_broadcastToClients(::Editor::Network::INetworkPayload& payload);

    MCAPI ::Scripting::Result<void> $_broadcastToClientManagers(::Editor::Network::INetworkPayload& payload);

    MCAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $_listenFor(char const* payloadName, ::std::function<void(::Editor::Network::INetworkPayload const&)> func);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForPayloadServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Network