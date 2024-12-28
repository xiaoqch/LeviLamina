#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class ISharedSpawnGetter {
public:
    // prevent constructor by default
    ISharedSpawnGetter& operator=(ISharedSpawnGetter const&);
    ISharedSpawnGetter(ISharedSpawnGetter const&);
    ISharedSpawnGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISharedSpawnGetter();

    // vIndex: 1
    virtual ::BlockPos const& getSharedSpawnPosition() const = 0;
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
