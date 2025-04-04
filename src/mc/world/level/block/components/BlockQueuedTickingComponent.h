#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DefinitionTrigger;
namespace Bedrock::PubSub { class Subscription; }
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

struct BlockQueuedTickingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mLooping;
    ::ll::TypedStorage<4, 4, uint>                             mDelayIntervalMinTicks;
    ::ll::TypedStorage<4, 4, uint>                             mDelayIntervalMaxTicks;
    ::ll::TypedStorage<8, 256, ::DefinitionTrigger>            mOnTimeDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mEventSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockQueuedTickingComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCAPI void onTick(::BlockEvents::BlockQueuedTickEvent const& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
