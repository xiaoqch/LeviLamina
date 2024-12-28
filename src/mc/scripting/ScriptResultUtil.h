#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
namespace Scripting { class ResultAny; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace ScriptResultUtil {
// functions
// NOLINTBEGIN
MCAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError>
GametestResultToScriptingValueResult(::std::variant<::gametest::GameTestError, ::Vec3> const& result);

MCAPI ::Scripting::Result<::Vec3, ::gametest::GameTestError>
GametestResultToScriptingValueResult(::std::variant<::gametest::GameTestError, ::BlockPos> const& result);

MCAPI ::std::optional<::gametest::GameTestError> ScriptingResultToGameTestResult(::Scripting::ResultAny const& result);
// NOLINTEND

} // namespace ScriptResultUtil
