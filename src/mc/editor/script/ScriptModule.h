#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MouseActionCategory.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/editor/Axis.h"
#include "mc/editor/Plane.h"
#include "mc/editor/input/KeyInputType.h"
#include "mc/editor/input/Modifier.h"
#include "mc/editor/script/ScriptBlockPaletteItemType.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct EditorBlockPalette; }
namespace Editor::Input { struct BindingInfo; }
namespace Editor::ScriptModule { class ScriptBlockPalette; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::EnumBindingBuilder<::Editor::Axis, ::Editor::Axis> bindAxisEnums();

MCNAPI ::Scripting::EnumBindingBuilder<::Editor::Plane, ::Editor::Plane> bindPlaneEnums();

MCNAPI ::Scripting::EnumBindingBuilder<
    ::Editor::ScriptModule::ScriptBlockPaletteItemType,
    ::Editor::ScriptModule::ScriptBlockPaletteItemType>
bindScriptBlockPaletteItemType();

MCNAPI ::Scripting::InterfaceBindingBuilder<::Editor::Input::BindingInfo> bindScriptInputBindingInfo();

MCNAPI ::Scripting::EnumBindingBuilder<::Editor::Input::Modifier, ::Editor::Input::Modifier> bindScriptInputModifier();

MCNAPI ::Scripting::EnumBindingBuilder<::Editor::Input::KeyInputType, ::Editor::Input::KeyInputType>
bindScriptKeyInputType();

MCNAPI ::Scripting::EnumBindingBuilder<::Editor::Input::MouseActionCategory, ::Editor::Input::MouseActionCategory>
bindScriptMouseActionCategory();

MCNAPI ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptBlockPalette>
convertServicePaletteToScriptPalette(
    ::Editor::EditorBlockPalette const&   servicePalette,
    ::Scripting::WeakLifetimeScope const& scope
);
// NOLINTEND

} // namespace Editor::ScriptModule
