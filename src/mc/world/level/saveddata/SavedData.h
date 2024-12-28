#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class SavedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           mDirty;
    ::ll::TypedStorage<8, 32, ::std::string> mId;
    // NOLINTEND

public:
    // prevent constructor by default
    SavedData& operator=(SavedData const&);
    SavedData(SavedData const&);
    SavedData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SavedData();

    // vIndex: 1
    virtual void deserialize(::CompoundTag const&) = 0;

    // vIndex: 2
    virtual void serialize(::CompoundTag&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
