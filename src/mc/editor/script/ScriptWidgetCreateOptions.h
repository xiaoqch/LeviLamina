#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWidgetCreateOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk682969;
    ::ll::UntypedStorage<1, 2>   mUnk9c524c;
    ::ll::UntypedStorage<4, 8>   mUnk8984bf;
    ::ll::UntypedStorage<4, 16>  mUnke60091;
    ::ll::UntypedStorage<1, 2>   mUnk91901b;
    ::ll::UntypedStorage<1, 2>   mUnkebb8cf;
    ::ll::UntypedStorage<1, 2>   mUnkdf15ce;
    ::ll::UntypedStorage<8, 240> mUnkd41faf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetCreateOptions& operator=(ScriptWidgetCreateOptions const&);
    ScriptWidgetCreateOptions(ScriptWidgetCreateOptions const&);
    ScriptWidgetCreateOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::ScriptModule::ScriptWidgetCreateOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetCreateOptions&&);

    MCNAPI ~ScriptWidgetCreateOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetCreateOptions> bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
