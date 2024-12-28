#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

class PlaceBlockDefinition : public ::BehaviorDefinition {
public:
    // prevent constructor by default
    PlaceBlockDefinition& operator=(PlaceBlockDefinition const&);
    PlaceBlockDefinition(PlaceBlockDefinition const&);
    PlaceBlockDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlaceBlockDefinition() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
