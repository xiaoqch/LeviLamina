#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class UnrecognizedParametersCause {
public:
    // prevent constructor by default
    UnrecognizedParametersCause& operator=(UnrecognizedParametersCause const&);
    UnrecognizedParametersCause(UnrecognizedParametersCause const&);
    UnrecognizedParametersCause();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::dcsctp::UnrecognizedParametersCause> Parse(::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp