#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFilterGroup;
class Mob;
struct Tick;
// clang-format on

class AngryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mDuration;
    ::ll::TypedStorage<1, 1, bool>                mHasTicked;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastAnger;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastOnAttack;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastOnBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastAngerWhenDying;
    ::ll::TypedStorage<4, 4, int>                 mBroadcastRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mBroadcastFilter;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mSubjectFilter;
    ::ll::TypedStorage<8, 8, ::Tick>              mNextSoundEventTick;
    // NOLINTEND

public:
    // prevent constructor by default
    AngryComponent& operator=(AngryComponent const&);
    AngryComponent(AngryComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool canGetAngry(::Mob& owner, ::Mob* testMob, ::Actor* target, bool allowInvulnerable, bool mustSee) const;

    MCNAPI ::AngryComponent& operator=(::AngryComponent&&);

    MCNAPI void restartTimer(::Mob& owner);

    MCNAPI ~AngryComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
