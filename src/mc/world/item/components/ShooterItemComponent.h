#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemStack;
class Player;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct ShooterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ShooterItemComponent : public ::NetworkedItemComponent<::ShooterItemComponent> {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    class DrawDuration;
    struct ShooterAmmunitionEntry;
    // clang-format on

    // ShooterItemComponent inner types define
    struct ShooterAmmunitionEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk247bf5;
        ::ll::UntypedStorage<1, 1>  mUnk4a1ba9;
        ::ll::UntypedStorage<1, 1>  mUnk3c5257;
        ::ll::UntypedStorage<1, 1>  mUnk851fe8;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShooterAmmunitionEntry& operator=(ShooterAmmunitionEntry const&);
        ShooterAmmunitionEntry(ShooterAmmunitionEntry const&);
        ShooterAmmunitionEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ShooterAmmunitionEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class DrawDuration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkab3a3e;
        // NOLINTEND

    public:
        // prevent constructor by default
        DrawDuration& operator=(DrawDuration const&);
        DrawDuration(DrawDuration const&);
        DrawDuration();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void setValue(float duration);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4af28f;
    ::ll::UntypedStorage<4, 4>  mUnk897ef8;
    ::ll::UntypedStorage<1, 1>  mUnkc35ddc;
    ::ll::UntypedStorage<1, 1>  mUnk6a0e62;
    ::ll::UntypedStorage<8, 16> mUnk56d780;
    ::ll::UntypedStorage<8, 16> mUnk7edfbd;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterItemComponent& operator=(ShooterItemComponent const&);
    ShooterItemComponent(ShooterItemComponent const&);
    ShooterItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShooterItemComponent() /*override*/;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 1
    virtual bool checkComponentDataForContentErrors() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ShooterItemComponent(::SharedTypes::v1_20_50::ShooterItemComponent const& component);

    MCAPI void _consumeAmmunition(
        ::Player*          player,
        ::ItemStack const& ammunition,
        int                slotIndex,
        bool               infiniteAmmo,
        bool               fromOffhand
    ) const;

    MCAPI int _getAmmunition(::Player const* player, bool, ::ItemStack& ammo, bool& fromOffhand) const;

    MCAPI void _shootProjectiles(::ItemStack& shooterStack, ::Player* player, int durationLeft) const;

    MCAPI bool releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCAPI void use(bool& result, ::ItemStack& instance, ::Player& player) const;
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
    MCAPI void* $ctor(::SharedTypes::v1_20_50::ShooterItemComponent const& component);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent();

    MCAPI bool $checkComponentDataForContentErrors() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
