#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class BlockPos;
class BlockSource;
// clang-format on

class ConduitBlock : public ::ActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConduitBlock() /*override*/ = default;

    // vIndex: 80
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
