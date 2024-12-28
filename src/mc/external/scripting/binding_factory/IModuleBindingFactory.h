#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct UUID; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class IModuleBindingFactory {
public:
    // prevent constructor by default
    IModuleBindingFactory& operator=(IModuleBindingFactory const&);
    IModuleBindingFactory(IModuleBindingFactory const&);
    IModuleBindingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IModuleBindingFactory();

    // vIndex: 1
    virtual ::std::string getName() const = 0;

    // vIndex: 2
    virtual ::Scripting::UUID getUUID() const = 0;

    // vIndex: 3
    virtual bool hasAlias(::std::string const&) const = 0;

    // vIndex: 4
    virtual ::std::vector<::Scripting::Version> getSupportedVersions() const = 0;

    // vIndex: 5
    virtual ::std::vector<::Scripting::ModuleDescriptor> getDependencies(::Scripting::Version) const = 0;

    // vIndex: 6
    virtual ::std::optional<::Scripting::ModuleBinding>
    createModuleBinding(::Scripting::Version, ::std::optional<::Scripting::ContextConfig> const&) = 0;
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

} // namespace Scripting
