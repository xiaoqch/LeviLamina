#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentClipboardOptions; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentClipboard : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7b4fbf;
    ::ll::UntypedStorage<1, 1>  mUnk81f975;
    ::ll::UntypedStorage<1, 1>  mUnkd4706b;
    ::ll::UntypedStorage<4, 12> mUnk62bf0a;
    ::ll::UntypedStorage<4, 12> mUnk865513;
    ::ll::UntypedStorage<1, 1>  mUnk7203d5;
    ::ll::UntypedStorage<4, 24> mUnka9f0b6;
    ::ll::UntypedStorage<4, 24> mUnke8c048;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentClipboard& operator=(ScriptWidgetComponentClipboard const&);
    ScriptWidgetComponentClipboard();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ScriptWidgetComponentClipboard() /*override*/ = default;

    // vIndex: 2
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentClipboard(::Editor::ScriptModule::ScriptWidgetComponentClipboard const&);

    MCNAPI ScriptWidgetComponentClipboard(
        ::Editor::ServiceProviderCollection&                                     serviceProviders,
        ::mce::UUID const&                                                       componentId,
        ::std::string const&                                                     componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner,
        ::Editor::ScriptModule::ScriptWidgetService&                             parentService,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>> const&
                                                                                       optionalClipboardItem,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions> options
    );

    MCNAPI void _setClipboardMirror(::Mirror m);

    MCNAPI void _setClipboardOffset(::Vec3 const& offset);

    MCNAPI void _setClipboardOrigin(::Vec3 const& pivot);

    MCNAPI void _setClipboardRotation(::Rotation r);

    MCNAPI void _setOuterBoundsFillColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI void _setOuterBoundsVisible(bool visible);

    MCNAPI void _setOuterBoundsWireframeColor(::ScriptModuleMinecraft::ScriptRGBA const& color);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptWidgetComponentClipboard> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentClipboard const&);

    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                     serviceProviders,
        ::mce::UUID const&                                                       componentId,
        ::std::string const&                                                     componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner,
        ::Editor::ScriptModule::ScriptWidgetService&                             parentService,
        ::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>> const&
                                                                                       optionalClipboardItem,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions> options
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Editor::Widgets::WidgetComponentType const $getComponentType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
