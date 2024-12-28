#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ItemSlotInfo;
// clang-format on

class Interaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkd2c947;
    ::ll::UntypedStorage<4, 4>   mUnkd9acda;
    ::ll::UntypedStorage<1, 1>   mUnkb15b5f;
    ::ll::UntypedStorage<1, 1>   mUnk7e270d;
    ::ll::UntypedStorage<1, 1>   mUnk9f5093;
    ::ll::UntypedStorage<1, 1>   mUnk72cb1c;
    ::ll::UntypedStorage<1, 1>   mUnkb2d40d;
    ::ll::UntypedStorage<1, 1>   mUnkaa7c58;
    ::ll::UntypedStorage<4, 4>   mUnkd5328a;
    ::ll::UntypedStorage<4, 4>   mUnk79e800;
    ::ll::UntypedStorage<4, 12>  mUnk41fb56;
    ::ll::UntypedStorage<4, 12>  mUnk2d2b5f;
    ::ll::UntypedStorage<4, 12>  mUnk73b4f3;
    ::ll::UntypedStorage<4, 4>   mUnkac64af;
    ::ll::UntypedStorage<4, 8>   mUnkbbe183;
    ::ll::UntypedStorage<8, 32>  mUnk3a3d80;
    ::ll::UntypedStorage<8, 32>  mUnka7364a;
    ::ll::UntypedStorage<8, 32>  mUnke8c60e;
    ::ll::UntypedStorage<4, 4>   mUnke0db27;
    ::ll::UntypedStorage<1, 1>   mUnk6d76db;
    ::ll::UntypedStorage<4, 4>   mUnk1808c6;
    ::ll::UntypedStorage<8, 24>  mUnk968bff;
    ::ll::UntypedStorage<8, 24>  mUnke9ec1d;
    ::ll::UntypedStorage<8, 104> mUnk1b388c;
    ::ll::UntypedStorage<8, 8>   mUnk9fe4c9;
    // NOLINTEND

public:
    // prevent constructor by default
    Interaction& operator=(Interaction const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Interaction();

    MCAPI Interaction(::Interaction const&);

    MCAPI Interaction(::Interaction&&);

    MCAPI void addActorDefinitionIdentifierByName(::std::string const& name);

    MCAPI void addLevelSoundEventByName(::std::string const& name);

    MCAPI void setCooldown(float const& seconds);

    MCAPI void setCooldownAfterBeingAttacked(float const& seconds);

    MCAPI void setDropItemSlot(::std::string const& slot);

    MCAPI void setEquipItemSlot(::std::string const& slot);

    MCAPI void setParticleType(::std::string const& name);

    MCAPI void setRepairItemAmount(int const& amount);

    MCAPI void setRepairItemSlot(::std::string const& slot);

    MCAPI void setTransformItem(::std::string const& name);

    MCAPI void setVibrationByName(::std::string const& name);

    MCAPI ~Interaction();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::ItemSlotInfo> _tryConvertStringToItemSlotInfo(::std::string const& string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Interaction const&);

    MCAPI void* $ctor(::Interaction&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
