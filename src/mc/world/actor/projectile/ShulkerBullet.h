#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class ShulkerBullet : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk475bd8;
    // NOLINTEND

public:
    // prevent constructor by default
    ShulkerBullet& operator=(ShulkerBullet const&);
    ShulkerBullet(ShulkerBullet const&);
    ShulkerBullet();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 48
    virtual bool isOnFire() const /*override*/;

    // vIndex: 84
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual ~ShulkerBullet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShulkerBullet(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $normalTick();

    MCFOLD bool $isOnFire() const;

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCFOLD void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
