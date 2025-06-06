#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class WeepingVinesClusterFeature : public ::Feature {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~WeepingVinesClusterFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _placeRoofNetherWart(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCNAPI void _placeRoofWeepingVines(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
