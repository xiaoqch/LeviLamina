#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeNoiseTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk679108;
    ::ll::UntypedStorage<8, 216> mUnk6fce12;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeNoiseTarget& operator=(BiomeNoiseTarget const&);
    BiomeNoiseTarget(BiomeNoiseTarget const&);
    BiomeNoiseTarget();
};
