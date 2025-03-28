#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/LiquidBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Experiments;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class LiquidBlockDynamic : public ::LiquidBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 149
    virtual void entityInside(::BlockSource&, ::BlockPos const&, ::Actor& entity) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~LiquidBlockDynamic() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _getSlopeDistance(::BlockSource& region, ::BlockPos const& pos, int pass, int from) const;

    MCAPI bool _isLiquidBlocking(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::BlockPos const& flowFromPos,
        uchar             flowFromDirection
    ) const;

    MCAPI void _setStatic(::BlockSource& region, ::BlockPos const& pos, bool usingExtraData) const;

    MCAPI void _spread(::BlockSource& region, ::BlockPos const& pos, int depth, bool preserveExisting) const;

    MCAPI bool _tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random, bool onlyDetectStatic) const;

    MCAPI void _trySpreadTo(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        int               neighbor,
        ::BlockPos const& flowFromPos,
        uchar             flowFromDirection
    ) const;

    MCAPI ::std::array<bool, 4> getSpread(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCFOLD void $entityInside(::BlockSource&, ::BlockPos const&, ::Actor& entity) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
