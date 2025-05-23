#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct StrictActorIDEntityContextPair;
// clang-format on

struct VehicleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::StrictActorIDEntityContextPair>> mPassengers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VehicleComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
