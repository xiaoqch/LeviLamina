#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct MinorVersionPromotion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnka26ca1;
    ::ll::UntypedStorage<8, 104> mUnk3c4dad;
    ::ll::UntypedStorage<8, 40>  mUnk762736;
    ::ll::UntypedStorage<8, 40>  mUnk21cc95;
    // NOLINTEND

public:
    // prevent constructor by default
    MinorVersionPromotion& operator=(MinorVersionPromotion const&);
    MinorVersionPromotion(MinorVersionPromotion const&);
    MinorVersionPromotion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinorVersionPromotion(::Scripting::MinorVersionPromotion&&);

    MCAPI ~MinorVersionPromotion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::MinorVersionPromotion&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
