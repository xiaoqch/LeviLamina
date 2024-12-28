#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynamicAmbientSound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkd64ba9;
    ::ll::UntypedStorage<8, 32>  mUnk9f6426;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicAmbientSound& operator=(DynamicAmbientSound const&);
    DynamicAmbientSound(DynamicAmbientSound const&);
    DynamicAmbientSound();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DynamicAmbientSound();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
