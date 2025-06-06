#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentBeforeEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Mob;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentBeforeDurabilityDamageEvent
: public ::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeEvent<int&, ::ItemStack&, ::Actor&, ::Mob&> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke129c5;
    ::ll::UntypedStorage<8, 40> mUnk250afe;
    ::ll::UntypedStorage<8, 32> mUnk2bc6c4;
    ::ll::UntypedStorage<8, 32> mUnk38cd6b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentBeforeDurabilityDamageEvent&
    operator=(ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);
    ScriptItemCustomComponentBeforeDurabilityDamageEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void updateEngineEvent(int& durabilityDamage, ::ItemStack& item, ::Actor&, ::Mob&) const /*override*/;

    // vIndex: 2
    virtual bool shouldCancel() const /*override*/;

    // vIndex: 0
    virtual ~ScriptItemCustomComponentBeforeDurabilityDamageEvent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptItemCustomComponentBeforeDurabilityDamageEvent(::ScriptModuleMinecraft::
                                                             ScriptItemCustomComponentBeforeDurabilityDamageEvent&&);

    MCNAPI
    ScriptItemCustomComponentBeforeDurabilityDamageEvent(::ScriptModuleMinecraft::
                                                             ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptItemCustomComponentBeforeDurabilityDamageEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateEngineEvent(int& durabilityDamage, ::ItemStack& item, ::Actor&, ::Mob&) const;

    MCNAPI bool $shouldCancel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
