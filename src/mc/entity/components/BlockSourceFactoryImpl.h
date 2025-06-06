#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class MockableOwnedBlockSource;
// clang-format on

class BlockSourceFactoryImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkef957b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSourceFactoryImpl& operator=(BlockSourceFactoryImpl const&);
    BlockSourceFactoryImpl(BlockSourceFactoryImpl const&);
    BlockSourceFactoryImpl();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _createOrUpdate(::MockableOwnedBlockSource& region, ::DimensionType type) const;
    // NOLINTEND
};
