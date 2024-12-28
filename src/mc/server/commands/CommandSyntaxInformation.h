#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandSyntaxInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk5ba143;
    ::ll::UntypedStorage<8, 32> mUnk3ba763;
    ::ll::UntypedStorage<8, 24> mUnkf9e570;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandSyntaxInformation& operator=(CommandSyntaxInformation const&);
    CommandSyntaxInformation(CommandSyntaxInformation const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandSyntaxInformation();

    MCAPI ~CommandSyntaxInformation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
