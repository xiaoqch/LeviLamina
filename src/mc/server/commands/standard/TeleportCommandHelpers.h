#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/TeleportAnalysis.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Vec3;
// clang-format on

namespace TeleportCommandHelpers {
// functions
// NOLINTBEGIN
MCAPI ::TeleportAnalysis
actorToLocationTeleportAnalysis(::BlockSource const& region, ::Actor const& actor, ::Vec3 destination);
// NOLINTEND

} // namespace TeleportCommandHelpers
