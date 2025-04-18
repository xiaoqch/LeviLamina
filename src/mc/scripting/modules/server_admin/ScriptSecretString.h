#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

namespace ScriptModuleServerAdmin {

class ScriptSecretString : public ::Scripting::WeakHandleFromThis<::ScriptModuleServerAdmin::ScriptSecretString> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf8a2ed;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSecretString(ScriptSecretString const&);
    ScriptSecretString();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleServerAdmin::ScriptSecretString& operator=(::ScriptModuleServerAdmin::ScriptSecretString&&);

    MCAPI ::ScriptModuleServerAdmin::ScriptSecretString&
    operator=(::ScriptModuleServerAdmin::ScriptSecretString const&);

    MCAPI ~ScriptSecretString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleServerAdmin::ScriptSecretString> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
