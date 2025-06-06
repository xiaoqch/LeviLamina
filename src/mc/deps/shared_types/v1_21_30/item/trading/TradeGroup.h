#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_30 {

struct TradeGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc3f4d7;
    ::ll::UntypedStorage<8, 24> mUnke33751;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeGroup& operator=(TradeGroup const&);
    TradeGroup(TradeGroup const&);
    TradeGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_30::TradeGroup& operator=(::SharedTypes::v1_21_30::TradeGroup&&);

    MCNAPI ~TradeGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
