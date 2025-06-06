#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_50 {

struct EntityPlacerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaa1be6;
    ::ll::UntypedStorage<8, 24> mUnkadc727;
    ::ll::UntypedStorage<8, 24> mUnkdba18d;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityPlacerItemComponent(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_50::EntityPlacerItemComponent&
    operator=(::SharedTypes::v1_20_50::EntityPlacerItemComponent&&);

    MCNAPI ::SharedTypes::v1_20_50::EntityPlacerItemComponent&
    operator=(::SharedTypes::v1_20_50::EntityPlacerItemComponent const&);

    MCNAPI ~EntityPlacerItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
