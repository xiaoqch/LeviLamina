#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct CongestionWindowConfig {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::StructParametersParser> Parser();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::CongestionWindowConfig Parse(::std::string_view);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kKey();
    // NOLINTEND
};

} // namespace webrtc
