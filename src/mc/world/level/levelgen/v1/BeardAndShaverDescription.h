#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BeardingDescriptionCache;
class BlockPos;
struct BeardKernel;
// clang-format on

class BeardAndShaverDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40> mUnk6ad3e6;
    ::ll::UntypedStorage<8, 8>  mUnk823fce;
    ::ll::UntypedStorage<4, 4>  mUnk64e250;
    ::ll::UntypedStorage<4, 4>  mUnk7f9e75;
    // NOLINTEND

public:
    // prevent constructor by default
    BeardAndShaverDescription& operator=(BeardAndShaverDescription const&);
    BeardAndShaverDescription(BeardAndShaverDescription const&);
    BeardAndShaverDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeardAndShaverDescription(
        ::BeardingDescriptionCache cache,
        ::BeardKernel const&       beardKernel,
        float                      minBeardWidth,
        float                      maxBeardWidth
    );

    MCAPI float calculateContribution(::BlockPos const& pos) const;

    MCAPI ::BeardingDescriptionCache const& getCache() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::BeardingDescriptionCache cache, ::BeardKernel const& beardKernel, float minBeardWidth, float maxBeardWidth);
    // NOLINTEND
};
