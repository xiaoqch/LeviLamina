#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
// clang-format on

namespace webrtc {

class IceCandidateInterface {
public:
    // prevent constructor by default
    IceCandidateInterface& operator=(IceCandidateInterface const&);
    IceCandidateInterface(IceCandidateInterface const&);
    IceCandidateInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceCandidateInterface();

    // vIndex: 1
    virtual ::std::string sdp_mid() const = 0;

    // vIndex: 2
    virtual int sdp_mline_index() const = 0;

    // vIndex: 3
    virtual ::cricket::Candidate const& candidate() const = 0;

    // vIndex: 4
    virtual ::std::string server_url() const;

    // vIndex: 5
    virtual bool ToString(::std::string*) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $server_url() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc