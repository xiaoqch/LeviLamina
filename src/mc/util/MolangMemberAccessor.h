#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangHashStringVariable.h"

struct MolangMemberAccessor : public ::MolangHashStringVariable<::MolangMemberAccessor> {
public:
    // prevent constructor by default
    MolangMemberAccessor& operator=(MolangMemberAccessor const&);
    MolangMemberAccessor(MolangMemberAccessor const&);
    MolangMemberAccessor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MolangMemberAccessor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
