#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AudioProcessing.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioBuffer; }
// clang-format on

namespace webrtc {

class CustomProcessing {
public:
    // prevent constructor by default
    CustomProcessing& operator=(CustomProcessing const&);
    CustomProcessing(CustomProcessing const&);
    CustomProcessing();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void Initialize(int, int) = 0;

    // vIndex: 1
    virtual void Process(::webrtc::AudioBuffer*) = 0;

    // vIndex: 2
    virtual ::std::string ToString() const = 0;

    // vIndex: 3
    virtual void SetRuntimeSetting(::webrtc::AudioProcessing::RuntimeSetting);

    // vIndex: 4
    virtual ~CustomProcessing();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $SetRuntimeSetting(::webrtc::AudioProcessing::RuntimeSetting);
    // NOLINTEND
};

} // namespace webrtc
