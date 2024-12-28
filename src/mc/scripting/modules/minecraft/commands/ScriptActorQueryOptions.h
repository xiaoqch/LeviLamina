#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

namespace ScriptModuleMinecraft {

struct ScriptActorQueryOptions : public ::ScriptModuleMinecraft::ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk20dab8;
    ::ll::UntypedStorage<4, 8>  mUnk772d97;
    ::ll::UntypedStorage<4, 8>  mUnkc74b8d;
    ::ll::UntypedStorage<4, 8>  mUnkc554cd;
    ::ll::UntypedStorage<4, 8>  mUnke0846d;
    ::ll::UntypedStorage<4, 16> mUnk6de076;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorQueryOptions& operator=(ScriptActorQueryOptions const&);
    ScriptActorQueryOptions(ScriptActorQueryOptions const&);
    ScriptActorQueryOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptActorQueryOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActorQueryOptions> bindV010();

    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptActorQueryOptions> bindV1();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
