#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct DefaultScreenCapabilities : public ::TypedScreenCapabilities<::DefaultScreenCapabilities> {
public:
    // prevent constructor by default
    DefaultScreenCapabilities& operator=(DefaultScreenCapabilities const&);
    DefaultScreenCapabilities(DefaultScreenCapabilities const&);
    DefaultScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefaultScreenCapabilities() /*override*/;
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
