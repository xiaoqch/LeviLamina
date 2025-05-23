#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceInformation {
public:
    // ResourceInformation inner types define
    enum class ResourceType : int {
        Invalid           = 0,
        Resources         = 1,
        DataAddOn         = 2,
        ScriptAddOn       = 3,
        ClientScriptAddOn = 4,
        Mandatory         = 5,
        WorldTemplate     = 6,
        Count             = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3f1ece;
    ::ll::UntypedStorage<8, 24> mUnk6dfdf0;
    ::ll::UntypedStorage<8, 16> mUnka8abd4;
    ::ll::UntypedStorage<4, 4>  mUnk4b07d4;
    ::ll::UntypedStorage<8, 32> mUnk5a12d9;
    ::ll::UntypedStorage<8, 32> mUnkd60fb9;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceInformation& operator=(ResourceInformation const&);
    ResourceInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceInformation(::ResourceInformation const&);

    MCNAPI ~ResourceInformation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ResourceInformation::ResourceType ResourceTypeFromString(::std::string const& value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceInformation const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
