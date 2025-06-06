#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ItemEventListener;
struct ItemCompleteUseEvent;
struct ItemReleaseUseEvent;
struct ItemStartUseEvent;
struct ItemStartUseOnEvent;
struct ItemStopUseEvent;
struct ItemStopUseOnEvent;
struct ItemUseEvent;
struct ItemUsedOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemEventListener : public ::EventListenerDispatcher<::ItemEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk77a3ff;
    ::ll::UntypedStorage<8, 16> mUnke24955;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemEventListener& operator=(ScriptItemEventListener const&);
    ScriptItemEventListener(ScriptItemEventListener const&);
    ScriptItemEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 23
    virtual ::EventResult onEvent(::ItemUsedOnEvent const& itemEvent) /*override*/;

    // vIndex: 22
    virtual ::EventResult onEvent(::ItemStartUseOnEvent const& itemEvent) /*override*/;

    // vIndex: 21
    virtual ::EventResult onEvent(::ItemStopUseOnEvent const& itemEvent) /*override*/;

    // vIndex: 24
    virtual ::EventResult onEvent(::ItemUseEvent const& itemEvent) /*override*/;

    // vIndex: 20
    virtual ::EventResult onEvent(::ItemStartUseEvent const& itemEvent) /*override*/;

    // vIndex: 19
    virtual ::EventResult onEvent(::ItemCompleteUseEvent const& itemEvent) /*override*/;

    // vIndex: 18
    virtual ::EventResult onEvent(::ItemReleaseUseEvent const& itemEvent) /*override*/;

    // vIndex: 17
    virtual ::EventResult onEvent(::ItemStopUseEvent const& itemEvent) /*override*/;

    // vIndex: 0
    virtual ~ScriptItemEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ItemUsedOnEvent const& itemEvent);

    MCNAPI ::EventResult $onEvent(::ItemStartUseOnEvent const& itemEvent);

    MCNAPI ::EventResult $onEvent(::ItemStopUseOnEvent const& itemEvent);

    MCNAPI ::EventResult $onEvent(::ItemUseEvent const& itemEvent);

    MCNAPI ::EventResult $onEvent(::ItemStartUseEvent const& itemEvent);

    MCNAPI ::EventResult $onEvent(::ItemCompleteUseEvent const& itemEvent);

    MCNAPI ::EventResult $onEvent(::ItemReleaseUseEvent const& itemEvent);

    MCNAPI ::EventResult $onEvent(::ItemStopUseEvent const& itemEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
