#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class IControl {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IControl();

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<::Json::Value> buildJson(::Player&, ::CurrentCmdVersion) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
