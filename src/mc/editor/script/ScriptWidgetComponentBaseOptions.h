#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16>  mUnk46e19c;
    ::ll::UntypedStorage<1, 2>   mUnkf44423;
    ::ll::UntypedStorage<1, 2>   mUnk2a2509;
    ::ll::UntypedStorage<8, 240> mUnk2c8bbd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBaseOptions& operator=(ScriptWidgetComponentBaseOptions const&);
    ScriptWidgetComponentBaseOptions(ScriptWidgetComponentBaseOptions const&);
    ScriptWidgetComponentBaseOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentBaseOptions&&);

    MCNAPI ~ScriptWidgetComponentBaseOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentBaseOptions>
    bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
