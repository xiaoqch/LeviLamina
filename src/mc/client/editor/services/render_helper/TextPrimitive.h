#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/editor/services/render_helper/BasePrimitivePosition.h"
#include "mc/editor/services/render_helper/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
namespace Editor::RenderHelper { struct Vertex; }
// clang-format on

namespace Editor::RenderHelper {

class TextPrimitive : public ::Editor::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk213cd8;
    ::ll::UntypedStorage<4, 16> mUnk140c18;
    // NOLINTEND

public:
    // prevent constructor by default
    TextPrimitive& operator=(TextPrimitive const&);
    TextPrimitive(TextPrimitive const&);
    TextPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ~TextPrimitive() /*override*/;

    // vIndex: 0
    virtual ::Editor::RenderHelper::PrimitiveType getType() const /*override*/;

    // vIndex: 5
    virtual void _rebuild() /*override*/;

    // vIndex: 6
    virtual void _getVertices(::std::vector<::Editor::RenderHelper::Vertex>&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Editor::RenderHelper::PrimitiveType $getType() const;

    MCAPI void $_rebuild();

    MCAPI void $_getVertices(::std::vector<::Editor::RenderHelper::Vertex>&);
    // NOLINTEND
};

} // namespace Editor::RenderHelper