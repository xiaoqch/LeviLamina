#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NatPunchthroughServerDebugInterface.h"

namespace RakNet {

struct NatPunchthroughServerDebugInterface_Printf : public ::RakNet::NatPunchthroughServerDebugInterface {
public:
    // prevent constructor by default
    NatPunchthroughServerDebugInterface_Printf& operator=(NatPunchthroughServerDebugInterface_Printf const&);
    NatPunchthroughServerDebugInterface_Printf(NatPunchthroughServerDebugInterface_Printf const&);
    NatPunchthroughServerDebugInterface_Printf();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void OnServerMessage(char const*) /*override*/;

    // vIndex: 0
    virtual ~NatPunchthroughServerDebugInterface_Printf() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnServerMessage(char const*);
    // NOLINTEND
};

} // namespace RakNet