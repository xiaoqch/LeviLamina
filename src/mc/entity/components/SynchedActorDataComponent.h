#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SynchedActorDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkc8f498;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorDataComponent& operator=(SynchedActorDataComponent const&);
    SynchedActorDataComponent(SynchedActorDataComponent const&);
    SynchedActorDataComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SynchedActorDataComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
