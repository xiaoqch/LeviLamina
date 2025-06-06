#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class ReportBlock; }
// clang-format on

namespace webrtc {

class ReceiveStatisticsProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReceiveStatisticsProvider() = default;

    // vIndex: 1
    virtual ::std::vector<::webrtc::rtcp::ReportBlock> RtcpReportBlocks(uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
