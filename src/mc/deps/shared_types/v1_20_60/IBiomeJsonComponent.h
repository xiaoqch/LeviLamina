#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_60 {

struct IBiomeJsonComponent {
public:
    // prevent constructor by default
    IBiomeJsonComponent& operator=(IBiomeJsonComponent const&);
    IBiomeJsonComponent(IBiomeJsonComponent const&);
    IBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IBiomeJsonComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60