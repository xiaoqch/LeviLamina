#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Log2 {
// functions
// NOLINTBEGIN
MCNAPI ::FlatteningUtils::Instance get();

MCNAPI ::std::function<::Block const*(int)> getBlockComplexAliasCallback();
// NOLINTEND

} // namespace FlatteningUtils::Log2
