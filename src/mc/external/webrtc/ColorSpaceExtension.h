#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ColorSpace.h"
#include "mc/external/webrtc/HdrMasteringMetadata.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ColorSpace; }
namespace webrtc { struct HdrMetadata; }
// clang-format on

namespace webrtc {

class ColorSpaceExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar CombineRangeAndChromaSiting(
        ::webrtc::ColorSpace::RangeID,
        ::webrtc::ColorSpace::ChromaSiting,
        ::webrtc::ColorSpace::ChromaSiting
    );

    MCNAPI static bool Write(::rtc::ArrayView<uchar>, ::webrtc::ColorSpace const&);

    MCNAPI static uint64 WriteChromaticity(uchar*, ::webrtc::HdrMasteringMetadata::Chromaticity const&);

    MCNAPI static uint64 WriteHdrMetadata(::rtc::ArrayView<uchar>, ::webrtc::HdrMetadata const&);

    MCNAPI static uint64 WriteLuminance(uchar*, float, int);
    // NOLINTEND
};

} // namespace webrtc
