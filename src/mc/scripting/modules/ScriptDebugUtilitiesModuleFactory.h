#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_factory/GenericModuleBindingFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ModuleBinding; }
namespace mce { class UUID; }
// clang-format on

class ScriptDebugUtilitiesModuleFactory : public ::Scripting::GenericModuleBindingFactory {
public:
    // prevent constructor by default
    ScriptDebugUtilitiesModuleFactory& operator=(ScriptDebugUtilitiesModuleFactory const&);
    ScriptDebugUtilitiesModuleFactory(ScriptDebugUtilitiesModuleFactory const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDebugUtilitiesModuleFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDebugUtilitiesModuleFactory();

    MCAPI ::Scripting::ModuleBinding _generateBindings(
        ::Scripting::ModuleBindingBuilder&  moduleBuilder,
        bool                                allowUntagged,
        ::std::vector<::std::string> const& allowedTags
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getModuleUUIDAsString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ModuleName();

    MCAPI static ::mce::UUID const& ModuleUUID();
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
