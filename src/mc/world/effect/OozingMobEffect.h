#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffect.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class OozingMobEffect : public ::MobEffect {
public:
    // prevent constructor by default
    OozingMobEffect& operator=(OozingMobEffect const&);
    OozingMobEffect(OozingMobEffect const&);
    OozingMobEffect();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void onActorDied(::Actor& target, int amplifier) const /*override*/;

    // vIndex: 0
    virtual ~OozingMobEffect() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onActorDied(::Actor& target, int amplifier) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
