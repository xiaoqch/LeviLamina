#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/DispenserBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

class DropperBlock : public ::DispenserBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 152
    virtual void dispenseFrom(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 0
    virtual ~DropperBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DropperBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static int getAttachedFace(int facing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $dispenseFrom(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
