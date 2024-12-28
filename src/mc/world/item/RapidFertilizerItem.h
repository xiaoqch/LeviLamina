#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerItem.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class RapidFertilizerItem : public ::FertilizerItem {
public:
    // prevent constructor by default
    RapidFertilizerItem& operator=(RapidFertilizerItem const&);
    RapidFertilizerItem(RapidFertilizerItem const&);
    RapidFertilizerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 97
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    // vIndex: 0
    virtual ~RapidFertilizerItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fixupCommon(::ItemStackBase& stack) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
