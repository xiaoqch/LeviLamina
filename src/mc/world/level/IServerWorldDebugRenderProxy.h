#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Options;
class Player;
// clang-format on

class IServerWorldDebugRenderProxy {
public:
    // prevent constructor by default
    IServerWorldDebugRenderProxy& operator=(IServerWorldDebugRenderProxy const&);
    IServerWorldDebugRenderProxy(IServerWorldDebugRenderProxy const&);
    IServerWorldDebugRenderProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IServerWorldDebugRenderProxy();

    // vIndex: 1
    virtual void renderActorsDebugServerState(::Options const&, ::Dimension const&) = 0;

    // vIndex: 2
    virtual void renderSimulatedPlayerDebugServerState(::Options const&, ::Player&) = 0;

    // vIndex: 3
    virtual void debugRenderDimension(::Dimension&) = 0;

    // vIndex: 4
    virtual void debugRendererStartTick() = 0;

    // vIndex: 5
    virtual void debugRendererEndTick() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
