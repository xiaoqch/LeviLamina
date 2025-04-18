#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplateManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk93e72b;
    ::ll::UntypedStorage<8, 64> mUnk18d502;
    ::ll::UntypedStorage<8, 64> mUnkc87724;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerProxyCallbacks& operator=(WorldTemplateManagerProxyCallbacks const&);
    WorldTemplateManagerProxyCallbacks(WorldTemplateManagerProxyCallbacks const&);
    WorldTemplateManagerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldTemplateManagerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
