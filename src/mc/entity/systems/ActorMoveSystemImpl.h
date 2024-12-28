#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HitboxComponent;
class StrictEntityContext;
struct StateVectorComponent;
// clang-format on

namespace ActorMoveSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void
updateHitboxSystem(::StrictEntityContext const&, ::StateVectorComponent const& svc, ::HitboxComponent& hitbox);
// NOLINTEND

} // namespace ActorMoveSystemImpl
