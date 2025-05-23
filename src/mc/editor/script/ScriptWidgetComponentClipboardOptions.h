#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptRGBA; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentClipboardOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk6e5b33;
    ::ll::UntypedStorage<1, 2>  mUnkc882fe;
    ::ll::UntypedStorage<4, 16> mUnk320886;
    ::ll::UntypedStorage<4, 16> mUnkac6d6a;
    ::ll::UntypedStorage<1, 2>  mUnkd33090;
    ::ll::UntypedStorage<4, 32> mUnk1ac6be;
    ::ll::UntypedStorage<4, 32> mUnk6e0c8f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentClipboardOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentClipboardOptions(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&&);

    MCNAPI ScriptWidgetComponentClipboardOptions(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions const&);

    MCNAPI ::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&
    operator=(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&&);

    MCNAPI ::Scripting::Result<void> validate() const;

    MCNAPI ~ScriptWidgetComponentClipboardOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions>
    bindScript();

    MCNAPI static ::Scripting::Result<void> validateOffsetValues(::Vec3 const& offset);

    MCNAPI static ::Scripting::Result<void> validateOriginValues(::Vec3 const& origin);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Mirror const& DEFAULT_CLIPBOARD_MIRROR();

    MCNAPI static ::Vec3 const& DEFAULT_CLIPBOARD_OFFSET();

    MCNAPI static ::Vec3 const& DEFAULT_CLIPBOARD_ORIGIN();

    MCNAPI static ::Rotation const& DEFAULT_CLIPBOARD_ROTATION();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_OUTER_BOUNDS_FILL_COLOR();

    MCNAPI static bool const& DEFAULT_OUTER_BOUNDS_VISIBLE();

    MCNAPI static ::ScriptModuleMinecraft::ScriptRGBA const& DEFAULT_OUTER_BOUNDS_WIREFRAME_COLOR();

    MCNAPI static ::Vec3 const& MAX_CLIPBOARD_OFFSET();

    MCNAPI static ::Vec3 const& MAX_CLIPBOARD_ORIGIN();

    MCNAPI static ::Vec3 const& MIN_CLIPBOARD_OFFSET();

    MCNAPI static ::Vec3 const& MIN_CLIPBOARD_ORIGIN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions&&);

    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
