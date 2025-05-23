#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectReason.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::EnumBindingBuilder<::std::string, ::ScriptModuleMinecraftServerUI::ScriptFormRejectReason>
bindScriptFormRejectReason();

MCNAPI ::Scripting::Result_deprecated<::Json::Value> resolveRawMessageAsJson(
    ::Player&                                                                                player,
    ::CurrentCmdVersion                                                                      commandVersion,
    ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text
);
// NOLINTEND

} // namespace ScriptModuleMinecraftServerUI
