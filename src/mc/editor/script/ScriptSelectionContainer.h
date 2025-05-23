#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeIterable.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
namespace Editor::Selection { class SelectionContainer; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolumeItem; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSelectionContainer
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptSelectionContainer>,
  public ::ScriptModuleMinecraft::ScriptBlockVolumeIterable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk59bf9f;
    ::ll::UntypedStorage<8, 16> mUnk3ef2db;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionContainer& operator=(ScriptSelectionContainer const&);
    ScriptSelectionContainer(ScriptSelectionContainer const&);
    ScriptSelectionContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptSelectionContainer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSelectionContainer(
        ::WeakRef<::Editor::Selection::SelectionContainer> containerObjectRef,
        ::Scripting::WeakLifetimeScope const&              scope
    );

    MCNAPI ::Scripting::Result<void> clearContainer();

    MCNAPI ::Scripting::Result_deprecated<::BoundingBox> containerBoundingBox();

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA> getFillColor() const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA> getOutlineColor() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isVisible() const;

    MCNAPI ::Scripting::Result_deprecated<::Vec3> moveBy(::Vec3 const& delta);

    MCNAPI ::Scripting::Result_deprecated<::Vec3> moveTo(::Vec3 const& position);

    MCNAPI ::Editor::ScriptModule::ScriptSelectionContainer&
    operator=(::Editor::ScriptModule::ScriptSelectionContainer&&);

    MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem>
    peekLastVolume(::std::optional<::CompoundBlockVolumePositionRelativity> optRelativity);

    MCNAPI ::Scripting::Result<void> popVolume();

    MCNAPI ::Scripting::Result<void> pushVolume(::ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem const& item);

    MCNAPI ::Scripting::Result<void> setFillColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result<void> setOutlineColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result<void> setVisible(bool visible);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSelectionContainer> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WeakRef<::Editor::Selection::SelectionContainer> containerObjectRef,
        ::Scripting::WeakLifetimeScope const&              scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
