#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NatPunchthroughDebugInterface.h"

namespace RakNet {

struct NatPunchthroughDebugInterface_PacketLogger : public ::RakNet::NatPunchthroughDebugInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk34a73b;
    // NOLINTEND

public:
    // prevent constructor by default
    NatPunchthroughDebugInterface_PacketLogger& operator=(NatPunchthroughDebugInterface_PacketLogger const&);
    NatPunchthroughDebugInterface_PacketLogger(NatPunchthroughDebugInterface_PacketLogger const&);
    NatPunchthroughDebugInterface_PacketLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatPunchthroughDebugInterface_PacketLogger() /*override*/;

    // vIndex: 1
    virtual void OnClientMessage(char const*) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnClientMessage(char const*);
    // NOLINTEND
};

} // namespace RakNet