#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FallingBlock;
class FallingBlockActor;
class IBlockSource;
// clang-format on

class ITickDelegate {
public:
    // prevent constructor by default
    ITickDelegate& operator=(ITickDelegate const&);
    ITickDelegate(ITickDelegate const&);
    ITickDelegate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITickDelegate();

    // vIndex: 1
    virtual void onLand(::FallingBlock const&, ::IBlockSource&, ::BlockPos const&) = 0;

    // vIndex: 2
    virtual void breakBlock(::FallingBlockActor&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
