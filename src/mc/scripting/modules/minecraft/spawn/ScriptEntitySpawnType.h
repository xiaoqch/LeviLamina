#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntitySpawnType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk33dc53;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntitySpawnType(ScriptEntitySpawnType const&);
    ScriptEntitySpawnType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BoundingBox _getSpawnAABB(::Vec3 const& position) const;

    MCNAPI bool
    _isBlockDangerous(::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock> const& block) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptEntitySpawnType&
    operator=(::ScriptModuleMinecraft::ScriptEntitySpawnType const&);

    MCNAPI ~ScriptEntitySpawnType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
