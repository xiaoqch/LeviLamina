#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace cricket { class StunRequestManager; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace cricket {

class StunRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk89e87e;
    ::ll::UntypedStorage<8, 8> mUnk910cb8;
    ::ll::UntypedStorage<8, 8> mUnka0487a;
    ::ll::UntypedStorage<4, 4> mUnk7deb95;
    ::ll::UntypedStorage<1, 1> mUnkbc8af7;
    ::ll::UntypedStorage<8, 8> mUnk310b10;
    ::ll::UntypedStorage<1, 1> mUnkbce873;
    // NOLINTEND

public:
    // prevent constructor by default
    StunRequest& operator=(StunRequest const&);
    StunRequest(StunRequest const&);
    StunRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StunRequest() = default;

    // vIndex: 1
    virtual void OnResponse(::cricket::StunMessage*);

    // vIndex: 2
    virtual void OnErrorResponse(::cricket::StunMessage*);

    // vIndex: 3
    virtual void OnTimeout();

    // vIndex: 4
    virtual void OnSent();

    // vIndex: 5
    virtual int resend_delay();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int Elapsed() const;

    MCNAPI void Send(::webrtc::TimeDelta);

    MCNAPI void SendDelayed(::webrtc::TimeDelta);

    MCNAPI void SendInternal();

    MCNAPI StunRequest(::cricket::StunRequestManager&, ::std::unique_ptr<::cricket::StunMessage>);

    MCNAPI ::cricket::StunMessage const* msg() const;

    MCNAPI void set_timed_out();

    MCNAPI int type();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::StunRequestManager&, ::std::unique_ptr<::cricket::StunMessage>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
