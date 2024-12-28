#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
struct PackInfoData;
// clang-format on

struct PacksInfoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                           mResourcePackRequired;
    ::ll::TypedStorage<1, 1, bool>                           mHasAddonPacks;
    ::ll::TypedStorage<1, 1, bool>                           mHasScripts;
    ::ll::TypedStorage<8, 136, ::PackIdVersion>              mWorldTemplateIdAndVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInfoData>> mResourcePacks;
    // NOLINTEND

public:
    // prevent constructor by default
    PacksInfoData& operator=(PacksInfoData const&);
    PacksInfoData(PacksInfoData const&);
    PacksInfoData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 getRequiredResourcePackSize() const;

    MCAPI uint64 getResourcePackSize() const;

    MCAPI ~PacksInfoData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
