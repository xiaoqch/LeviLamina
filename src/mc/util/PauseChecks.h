#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ILevel;
// clang-format on

struct PauseChecks {
public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static bool isActorTickPaused(::Actor const& actor);

    MCFOLD static bool isAnimationPaused(::Actor const& actor);

    MCAPI static bool isMobSpawningPaused(::ILevel const& level);
    // NOLINTEND
};
