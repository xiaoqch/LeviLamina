#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdventureSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> noPvM;
    ::ll::TypedStorage<1, 1, bool> noMvP;
    ::ll::TypedStorage<1, 1, bool> immutableWorld;
    ::ll::TypedStorage<1, 1, bool> showNameTags;
    ::ll::TypedStorage<1, 1, bool> autoJump;
    // NOLINTEND

public:
    // prevent constructor by default
    AdventureSettings& operator=(AdventureSettings const&);
    AdventureSettings(AdventureSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AdventureSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
