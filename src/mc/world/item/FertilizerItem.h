#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class RenderParams;
class Vec3;
// clang-format on

class FertilizerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk4bcde7;
    // NOLINTEND

public:
    // prevent constructor by default
    FertilizerItem& operator=(FertilizerItem const&);
    FertilizerItem(FertilizerItem const&);
    FertilizerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;

    // vIndex: 18
    virtual bool isFertilizer() const /*override*/;

    // vIndex: 8
    virtual void executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const
        /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0
    virtual ~FertilizerItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FertilizerItem(::std::string const& name, int id, ::FertilizerType type);

    MCAPI ::FertilizerType getFertilizerType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::FertilizerType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCAPI bool $isFertilizer() const;

    MCAPI void $executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
