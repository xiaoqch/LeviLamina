#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IDeregisterTagsFromActorProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class DeregisterTagsFromActorProxy : public ::IDeregisterTagsFromActorProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DeregisterTagsFromActorProxy() /*override*/ = default;

    // vIndex: 1
    virtual void deregisterTagsFromActor(::Actor& actor) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deregisterTagsFromActor(::Actor& actor);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
