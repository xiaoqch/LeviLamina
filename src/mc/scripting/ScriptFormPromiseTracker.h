#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class LevelEventCoordinator;
class Player;
class ServerPlayerEventCoordinator;
struct PlayerFormCloseEvent;
struct PlayerFormResponseEvent;
namespace Json { class Value; }
namespace ScriptModuleMinecraftServerUI { class ScriptActionFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponseV2; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormResponse; }
// clang-format on

class ScriptFormPromiseTracker : public ::Bedrock::EnableNonOwnerReferences,
                                 public ::EventListenerDispatcher<::PlayerEventListener>,
                                 public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // ScriptFormPromiseTracker inner types declare
    // clang-format off
    struct FromRequest;
    // clang-format on

    // ScriptFormPromiseTracker inner types define
    struct FromRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            88,
            ::std::variant<
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponse>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
                    void>,
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponseV2>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
                    void>,
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponse>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
                    void>,
                ::Scripting::Promise<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormResponse>,
                    ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
                    void>>>
                                                        mPromise;
        ::ll::TypedStorage<8, 160, ::NetworkIdentifier> mClientNetworkIdentifier;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FromRequest();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelEventCoordinator&>        mLevelEventCoordinator;
    ::ll::TypedStorage<8, 8, ::ServerPlayerEventCoordinator&> mPlayerEventCoordinator;
    ::ll::TypedStorage<4, 4, uint>                            mLastRequestId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::ScriptFormPromiseTracker::FromRequest>> mFormRequests;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 61
    virtual ::EventResult onEvent(::PlayerFormResponseEvent const& formResponseEvent) /*override*/;

    // vIndex: 62
    virtual ::EventResult onEvent(::PlayerFormCloseEvent const& formCloseEvent) /*override*/;

    // vIndex: 0
    virtual ~ScriptFormPromiseTracker() /*override*/;

    // vIndex: 3
    virtual ::EventResult onLevelRemovedPlayer(::Player& player) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void handleFormResponse(uint formId, ::Json::Value const& formResponse);

    MCNAPI void handlePlayerQuit(::NetworkIdentifier const& playerId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _sendToClient(::Player const& player, ::Json::Value formJson, uint formId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::PlayerFormResponseEvent const& formResponseEvent);

    MCNAPI ::EventResult $onEvent(::PlayerFormCloseEvent const& formCloseEvent);

    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForEventListenerDispatcherLevelEventListener();

    MCNAPI static void** $vftableForEventListenerDispatcherPlayerEventListener();
    // NOLINTEND
};
