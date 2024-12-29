#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentSplineOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk75885b;
    ::ll::UntypedStorage<4, 8>  mUnk9e33a0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentSplineOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptWidgetComponentSplineOptions(::Editor::ScriptModule::ScriptWidgetComponentSplineOptions const&);

    MCAPI ::Editor::ScriptModule::ScriptWidgetComponentSplineOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentSplineOptions const&);

    MCAPI ~ScriptWidgetComponentSplineOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentSplineOptions>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentSplineOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule