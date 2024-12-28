#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardFactory {
public:
    // prevent constructor by default
    ScriptScoreboardFactory& operator=(ScriptScoreboardFactory const&);
    ScriptScoreboardFactory(ScriptScoreboardFactory const&);
    ScriptScoreboardFactory();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboard>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::Level& level);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
