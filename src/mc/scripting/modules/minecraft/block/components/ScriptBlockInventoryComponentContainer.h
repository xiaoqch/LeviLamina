#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptContainer.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemContext;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponentContainer : public ::ScriptModuleMinecraft::ScriptContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka24892;
    ::ll::UntypedStorage<4, 12> mUnk743c06;
    ::ll::UntypedStorage<8, 8>  mUnkf22c88;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockInventoryComponentContainer& operator=(ScriptBlockInventoryComponentContainer const&);
    ScriptBlockInventoryComponentContainer(ScriptBlockInventoryComponentContainer const&);
    ScriptBlockInventoryComponentContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockInventoryComponentContainer() /*override*/ = default;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<int> getEmptySlotsCount() const /*override*/;

    // vIndex: 13
    virtual ::Container* _tryGetContainer() const /*override*/;

    // vIndex: 14
    virtual ::ItemContext _getItemContext(int slot) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlockInventoryComponentContainer>
    bindV010();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> $getEmptySlotsCount() const;

    MCNAPI ::Container* $_tryGetContainer() const;

    MCNAPI ::ItemContext $_getItemContext(int slot) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
