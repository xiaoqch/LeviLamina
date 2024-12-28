#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/ScriptManagerEventType.h"
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class ServerScriptTeardownRebuildPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ServerScriptTeardownRebuildPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc13653;
    ::ll::UntypedStorage<1, 1> mUnk8b4a55;
    ::ll::UntypedStorage<1, 1> mUnk48dfa0;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScriptTeardownRebuildPayload& operator=(ServerScriptTeardownRebuildPayload const&);
    ServerScriptTeardownRebuildPayload(ServerScriptTeardownRebuildPayload const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerScriptTeardownRebuildPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerScriptTeardownRebuildPayload();

    MCAPI ServerScriptTeardownRebuildPayload(
        ::Editor::ScriptManagerEventType eventType,
        ::Scripting::ContextId           contextId,
        bool                             finalEvent
    );

    MCAPI ::Scripting::ContextId getContextId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Editor::ScriptManagerEventType eventType, ::Scripting::ContextId contextId, bool finalEvent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
