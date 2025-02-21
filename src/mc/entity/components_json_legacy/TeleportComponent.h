#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class TeleportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>    mRandomTeleports;
    ::ll::TypedStorage<4, 4, int>     mMinTeleportTime;
    ::ll::TypedStorage<4, 4, int>     mMaxTeleportTime;
    ::ll::TypedStorage<4, 12, ::Vec3> mRandomTeleportCube;
    ::ll::TypedStorage<4, 4, float>   mTargetDistance;
    ::ll::TypedStorage<4, 4, float>   mTargetTeleportChance;
    ::ll::TypedStorage<4, 4, float>   mLightTeleportChance;
    ::ll::TypedStorage<4, 4, float>   mDarkTeleportChance;
    ::ll::TypedStorage<4, 4, int>     mTeleportTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool randomTeleport(::Actor& owner);

    MCAPI bool teleport(::Actor& owner, ::Vec3 const& pos);

    MCAPI bool teleportTowards(::Actor& owner, ::Actor const& target);
    // NOLINTEND
};
