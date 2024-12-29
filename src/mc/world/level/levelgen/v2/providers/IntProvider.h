#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/providers/IntProviderType.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

struct IntProvider : public ::IntProviderType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnke97976;
    // NOLINTEND

public:
    // prevent constructor by default
    IntProvider& operator=(IntProvider const&);
    IntProvider(IntProvider const&);
    IntProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual int sample(::IRandom& random) const /*override*/;

    // vIndex: 2
    virtual int maxValue() const /*override*/;

    // vIndex: 3
    virtual int minValue() const /*override*/;

    // vIndex: 0
    virtual ~IntProvider() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $sample(::IRandom& random) const;

    MCAPI int $maxValue() const;

    MCAPI int $minValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};