#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
// clang-format on

class InfestedMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    InfestedMobEffect& operator=(InfestedMobEffect const&);
    InfestedMobEffect(InfestedMobEffect const&);
    InfestedMobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void onActorHurt(::Actor& target, int amplifier, ::ActorDamageSource const& source, float damage) const
        /*override*/;

    // vIndex: 0
    virtual ~InfestedMobEffect() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onActorHurt(::Actor& target, int amplifier, ::ActorDamageSource const& source, float damage) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
