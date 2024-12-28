#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerAdmin {
public:
    // prevent constructor by default
    ScriptServerAdmin& operator=(ScriptServerAdmin const&);
    ScriptServerAdmin(ScriptServerAdmin const&);
    ScriptServerAdmin();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::Result<void>
    transferPlayer(::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer, ::std::string host, ushort port);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
