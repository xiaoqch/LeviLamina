#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class CommandVersion {
public:
    // member variables
    // NOLINTBEGIN
    int mFrom;
    int mTo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandVersion(int from = 0, int to = CurrentVersion());
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SemVersion getLatestCompatibleSemVersion(int version);

    MCAPI static ::CurrentCmdVersion const getVersionMapping(::SemVersion const& engineVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& CurrentVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(int from, int to);
    // NOLINTEND
};
