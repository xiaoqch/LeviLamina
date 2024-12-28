#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/SignBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class HangingSignBlockActor : public ::SignBlockActor {
public:
    // prevent constructor by default
    HangingSignBlockActor& operator=(HangingSignBlockActor const&);
    HangingSignBlockActor(HangingSignBlockActor const&);
    HangingSignBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 19
    virtual float getShadowRadius(::BlockSource&) const /*override*/;

    // vIndex: 0
    virtual ~HangingSignBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HangingSignBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getShadowRadius(::BlockSource&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
