#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace Scripting {

struct ModuleDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk46af04;
    ::ll::UntypedStorage<8, 32> mUnk98ca3d;
    ::ll::UntypedStorage<8, 24> mUnkee925c;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleDependency& operator=(ModuleDependency const&);
    ModuleDependency(ModuleDependency const&);
    ModuleDependency();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ModuleDependency(::Scripting::ModuleDescriptor descriptor);

    MCNAPI ::std::optional<::Scripting::ModuleDescriptor> getDescriptor() const;

    MCNAPI ::std::string toString() const;

    MCNAPI ~ModuleDependency();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ModuleDescriptor descriptor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
