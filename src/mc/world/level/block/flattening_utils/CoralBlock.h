#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/CoralColor.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::CoralBlock {
// functions
// NOLINTBEGIN
MCAPI ::FlatteningUtils::Instance get();

MCAPI ::std::function<::Block const*(int)> getBlockComplexAliasCallback();

MCAPI ::std::vector<::BlockLegacy::RemovedStateCollection::SplitBlock> getColorSplitStates(bool dead);

MCAPI ::std::vector<::BlockLegacy::RemovedStateCollection::SplitBlock> getDeadSplitStates(::CoralColor color);
// NOLINTEND

} // namespace FlatteningUtils::CoralBlock
