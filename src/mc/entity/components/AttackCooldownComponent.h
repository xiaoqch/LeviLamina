#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Tick;
// clang-format on

struct AttackCooldownComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick> mCompleteTick;
    ::ll::TypedStorage<1, 1, bool>   mHasExecuted;
    // NOLINTEND
};
