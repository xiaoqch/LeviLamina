#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockCancellableEventBase.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

namespace BlockEvents {

class BlockPlayerPlacingEvent : public ::BlockEvents::BlockCancellableEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8309f9;
    ::ll::UntypedStorage<8, 8> mUnk7cb3ad;
    ::ll::UntypedStorage<8, 8> mUnk20e934;
    ::ll::UntypedStorage<1, 1> mUnk73a7ef;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlayerPlacingEvent& operator=(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent(BlockPlayerPlacingEvent const&);
    BlockPlayerPlacingEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    // vIndex: 0
    virtual ~BlockPlayerPlacingEvent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
