#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
struct ActorUniqueID;
// clang-format on

namespace GameEvents {

class PositionSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke6304b;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionSource& operator=(PositionSource const&);
    PositionSource(PositionSource const&);
    PositionSource();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void serializeTo(::CompoundTag& tag) const;
    // NOLINTEND
};

} // namespace GameEvents
