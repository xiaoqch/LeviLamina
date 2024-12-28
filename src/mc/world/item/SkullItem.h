#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/BlockItem.h"
#include "mc/world/item/Rarity.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class HashedString;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Vec3;
struct ResolvedItemIconInfo;
// clang-format on

class SkullItem : public ::BlockItem {
public:
    // prevent constructor by default
    SkullItem& operator=(SkullItem const&);
    SkullItem(SkullItem const&);
    SkullItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 108
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

    // vIndex: 43
    virtual ::Rarity getRarity(::ItemStackBase const& stack) const /*override*/;

    // vIndex: 33
    virtual int getLevelDataForAuxValue(int auxValue) const /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 30
    virtual ::BlockShape getBlockShape() const /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 101
    virtual ::ActorLocation getEquipLocation() const /*override*/;

    // vIndex: 102
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 118
    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const /*override*/;

    // vIndex: 0
    virtual ~SkullItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkullItem(::std::string const& name, int id, ::HashedString const& blockName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::HashedString const& blockName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCAPI ::Rarity $getRarity(::ItemStackBase const& stack) const;

    MCAPI int $getLevelDataForAuxValue(int auxValue) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI ::BlockShape $getBlockShape() const;

    MCAPI int $getEnchantSlot() const;

    MCAPI ::ActorLocation $getEquipLocation() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;

    MCAPI bool $_calculatePlacePos(::ItemStackBase&, ::Actor& entity, uchar& face, ::BlockPos& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
