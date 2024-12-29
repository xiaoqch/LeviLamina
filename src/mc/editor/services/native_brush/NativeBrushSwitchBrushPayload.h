#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class NativeBrushSwitchBrushPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushSwitchBrushPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk1c5257;
    ::ll::UntypedStorage<4, 8> mUnk62d372;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushSwitchBrushPayload& operator=(NativeBrushSwitchBrushPayload const&);
    NativeBrushSwitchBrushPayload(NativeBrushSwitchBrushPayload const&);
    NativeBrushSwitchBrushPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushSwitchBrushPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network