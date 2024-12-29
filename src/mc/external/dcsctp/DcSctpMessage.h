#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class DcSctpMessage {
public:
    // prevent constructor by default
    DcSctpMessage& operator=(DcSctpMessage const&);
    DcSctpMessage(DcSctpMessage const&);
    DcSctpMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DcSctpMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp