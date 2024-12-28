#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockDescriptor;
class BlockPos;
class BlockSource;
class Container;
class HashedString;
class ItemStack;
class SemVersion;
class Vec3;
namespace SharedTypes::v1_20_50 { struct EntityPlacerItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityPlacerItemComponent : public ::NetworkedItemComponent<::EntityPlacerItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnkd6c2a6;
    ::ll::UntypedStorage<8, 24>  mUnkaf08de;
    ::ll::UntypedStorage<8, 24>  mUnk382de7;
    ::ll::UntypedStorage<1, 1>   mUnka64b69;
    ::ll::UntypedStorage<1, 1>   mUnk149d97;
    ::ll::UntypedStorage<8, 16>  mUnk9f0794;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityPlacerItemComponent& operator=(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~EntityPlacerItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EntityPlacerItemComponent(::SharedTypes::v1_20_50::EntityPlacerItemComponent component);

    MCAPI void _setActorCustomName(::Actor& actor, ::ItemStack const& item) const;

    MCAPI void _useOn(
        bool&              result,
        ::ItemStack const& initialItemStack,
        ::ItemStack&       currentItemStack,
        ::Actor&           usingActor,
        ::BlockPos const&  pos,
        uchar              face,
        ::Vec3 const&      clickPos
    );

    MCAPI void
    _validateBlocks(::std::vector<::BlockDescriptor> const& blocks, ::std::string const& blocksParameterName) const;

    MCAPI bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::EntityPlacerItemComponent component);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
