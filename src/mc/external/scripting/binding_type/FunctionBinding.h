#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/TaggedBinding.h"

namespace Scripting {

struct FunctionBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf6fe7c;
    ::ll::UntypedStorage<8, 24> mUnkceeb8a;
    ::ll::UntypedStorage<8, 16> mUnk5d6400;
    ::ll::UntypedStorage<8, 24> mUnk76729b;
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionBinding& operator=(FunctionBinding const&);
    FunctionBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FunctionBinding(::Scripting::FunctionBinding const&);

    MCAPI ~FunctionBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::FunctionBinding const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
