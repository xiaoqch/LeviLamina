#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

class SetLocalDescriptionObserverInterface : public ::webrtc::RefCountInterface {
public:
    // prevent constructor by default
    SetLocalDescriptionObserverInterface& operator=(SetLocalDescriptionObserverInterface const&);
    SetLocalDescriptionObserverInterface(SetLocalDescriptionObserverInterface const&);
    SetLocalDescriptionObserverInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void OnSetLocalDescriptionComplete(::webrtc::RTCError) = 0;

    // vIndex: 2
    virtual ~SetLocalDescriptionObserverInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc