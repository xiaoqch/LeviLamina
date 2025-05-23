#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilderReadOnly.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionModifier;
namespace ScriptModuleMinecraft { struct ScriptDataDrivenActorTriggerAfterEventIntermediateData; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerAfterEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk170378;
    ::ll::UntypedStorage<8, 32> mUnkeb0b82;
    ::ll::UntypedStorage<8, 24> mUnkbc44a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerAfterEvent& operator=(ScriptDataDrivenActorTriggerAfterEvent const&);
    ScriptDataDrivenActorTriggerAfterEvent(ScriptDataDrivenActorTriggerAfterEvent const&);
    ScriptDataDrivenActorTriggerAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::ActorDefinitionModifier> getModifiers() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&&);

    MCNAPI ~ScriptDataDrivenActorTriggerAfterEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilderReadOnly<
        ::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bind();

    MCNAPI static ::Scripting::ClassBindingBuilderReadOnly<
        ::ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bindV010();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
