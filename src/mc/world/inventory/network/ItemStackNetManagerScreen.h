#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStackNetManagerScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7c9902;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackNetManagerScreen& operator=(ItemStackNetManagerScreen const&);
    ItemStackNetManagerScreen(ItemStackNetManagerScreen const&);
    ItemStackNetManagerScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackNetManagerScreen();
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
