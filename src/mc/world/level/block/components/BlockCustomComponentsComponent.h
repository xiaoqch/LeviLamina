#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
struct BlockCustomComponentData;
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
// clang-format on

class BlockCustomComponentsComponent {
public:
    // BlockCustomComponentsComponent inner types declare
    // clang-format off
    struct ExecutableComponent;
    // clang-format on

    // BlockCustomComponentsComponent inner types define
    struct ExecutableComponent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkf66582;
        ::ll::UntypedStorage<8, 8> mUnk29a4ca;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExecutableComponent& operator=(ExecutableComponent const&);
        ExecutableComponent(ExecutableComponent const&);
        ExecutableComponent();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsCustomComponentsV1;
    ::ll::TypedStorage<1, 1, bool> mHasPlayerInteractEvent;
    ::ll::TypedStorage<1, 1, bool> mHasPlayerPlacingEvent;
    ::ll::TypedStorage<8, 16, ::WeakRef<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>> mScriptRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockCustomComponentData>> mCustomComponentData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::BlockCustomComponentsComponent::ExecutableComponent> _gatherComponentsToExecute() const;

    MCAPI ::std::vector<::gsl::not_null<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*>>
    tryGetComponentsToExecute(::BlockLegacy const& baseBlock) const;
    // NOLINTEND
};
