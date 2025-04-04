#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ComponentItemDescriptionData_v1_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk26a29c;
    ::ll::UntypedStorage<4, 8>  mUnk18f1a6;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_20(ComponentItemDescriptionData_v1_20 const&);
    ComponentItemDescriptionData_v1_20();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ComponentItemDescriptionData_v1_20& operator=(::ComponentItemDescriptionData_v1_20 const&);

    MCAPI ::ComponentItemDescriptionData_v1_20& operator=(::ComponentItemDescriptionData_v1_20&&);

    MCAPI ~ComponentItemDescriptionData_v1_20();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
