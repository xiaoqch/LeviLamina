#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/ParticleType.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Fireball : public ::PredictableProjectile {
public:
    // prevent constructor by default
    Fireball& operator=(Fireball const&);
    Fireball(Fireball const&);
    Fireball();

public:
    // NOLINTBEGIN
    // vIndex: 10
    virtual ~Fireball();

    // vIndex: 26
    virtual void normalTick();

    // vIndex: 41
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 90
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 94
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151
    virtual float getInertia();

    // vIndex: 152
    virtual ::ParticleType getTrailParticle();

    // vIndex: 153
    virtual bool shouldBurn();

    MCAPI Fireball(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setPower(class Vec3 const& power);

    // NOLINTEND
};
