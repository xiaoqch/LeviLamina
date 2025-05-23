#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"
#include "mc/editor/services/native_brush/BrushPaintMode.h"
#include "mc/editor/services/native_brush/BrushShapeMethod.h"

namespace Editor::Brush {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::
    EnumBindingBuilder<::Editor::Brush::BrushPaintCompletionState, ::Editor::Brush::BrushPaintCompletionState>
    bindBrushPaintCompletionStates();

MCNAPI ::Scripting::EnumBindingBuilder<::Editor::Brush::BrushPaintMode, ::Editor::Brush::BrushPaintMode>
bindBrushPaintModes();

MCNAPI ::Scripting::EnumBindingBuilder<::std::string, ::Editor::Brush::BrushShapeMethod> bindBrushShapeMethods();
// NOLINTEND

} // namespace Editor::Brush
