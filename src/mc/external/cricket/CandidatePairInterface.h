#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
// clang-format on

namespace cricket {

class CandidatePairInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CandidatePairInterface() = default;

    // vIndex: 1
    virtual ::cricket::Candidate const& local_candidate() const = 0;

    // vIndex: 2
    virtual ::cricket::Candidate const& remote_candidate() const = 0;
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
