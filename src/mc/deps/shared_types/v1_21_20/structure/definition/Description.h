#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureDefinition {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9140a7;
    // NOLINTEND

public:
    // prevent constructor by default
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureDefinition::Description&
    operator=(::SharedTypes::v1_21_20::JigsawStructureDefinition::Description const&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureDefinition::Description&
    operator=(::SharedTypes::v1_21_20::JigsawStructureDefinition::Description&&);

    MCNAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureDefinition
