#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ConnectionRole.h"
#include "mc/external/cricket/IceMode.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct IceParameters; }
namespace rtc { struct SSLFingerprint; }
// clang-format on

namespace cricket {

struct TransportDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk570b49;
    ::ll::UntypedStorage<8, 32> mUnk6a52b1;
    ::ll::UntypedStorage<8, 32> mUnk426746;
    ::ll::UntypedStorage<4, 4>  mUnk99f4fa;
    ::ll::UntypedStorage<4, 4>  mUnk3bd252;
    ::ll::UntypedStorage<8, 8>  mUnk3e5eb5;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportDescription& operator=(TransportDescription const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cricket::IceParameters GetIceParameters() const;

    MCAPI TransportDescription();

    MCAPI TransportDescription(::cricket::TransportDescription const&);

    MCAPI TransportDescription(::std::string_view, ::std::string_view);

    MCAPI
    TransportDescription(::std::vector<::std::string> const&, ::std::string_view, ::std::string_view, ::cricket::IceMode, ::cricket::ConnectionRole, ::rtc::SSLFingerprint const*);

    MCAPI ~TransportDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::TransportDescription const&);

    MCAPI void* $ctor(::std::string_view, ::std::string_view);

    MCAPI void*
    $ctor(::std::vector<::std::string> const&, ::std::string_view, ::std::string_view, ::cricket::IceMode, ::cricket::ConnectionRole, ::rtc::SSLFingerprint const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket