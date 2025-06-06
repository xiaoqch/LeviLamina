#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/scripting/modules/minecraft/device/ScriptSystemInfo.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptClientSystemInfo : public ::ScriptModuleMinecraft::ScriptSystemInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk78b136;
    ::ll::UntypedStorage<4, 4>  mUnk9a7963;
    ::ll::UntypedStorage<4, 4>  mUnkc28247;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientSystemInfo& operator=(ScriptClientSystemInfo const&);
    ScriptClientSystemInfo(ScriptClientSystemInfo const&);
    ScriptClientSystemInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptClientSystemInfo() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptClientSystemInfo(::Player const& player);

    MCNAPI ::ScriptModuleMinecraft::ScriptClientSystemInfo&
    operator=(::ScriptModuleMinecraft::ScriptClientSystemInfo&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptClientSystemInfo> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
