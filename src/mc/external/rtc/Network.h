#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AdapterType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
namespace rtc { class InterfaceAddress; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class MdnsResponderInterface; }
// clang-format on

namespace rtc {

class Network {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk2dfd6e;
    ::ll::UntypedStorage<8, 48> mUnk76b8b7;
    ::ll::UntypedStorage<8, 8>  mUnk4726cc;
    ::ll::UntypedStorage<8, 8>  mUnkf0926e;
    ::ll::UntypedStorage<8, 32> mUnkd76b9c;
    ::ll::UntypedStorage<8, 32> mUnk60ca47;
    ::ll::UntypedStorage<4, 32> mUnke2612e;
    ::ll::UntypedStorage<4, 4>  mUnk2ee3f0;
    ::ll::UntypedStorage<8, 32> mUnkdfe543;
    ::ll::UntypedStorage<8, 24> mUnk2ac563;
    ::ll::UntypedStorage<4, 4>  mUnkdc5778;
    ::ll::UntypedStorage<1, 1>  mUnk44d2a9;
    ::ll::UntypedStorage<4, 4>  mUnka99825;
    ::ll::UntypedStorage<4, 4>  mUnkf929bb;
    ::ll::UntypedStorage<4, 4>  mUnk9a3926;
    ::ll::UntypedStorage<1, 1>  mUnk3e1bdb;
    ::ll::UntypedStorage<2, 2>  mUnkfd3be7;
    ::ll::UntypedStorage<4, 4>  mUnk3e48ba;
    // NOLINTEND

public:
    // prevent constructor by default
    Network& operator=(Network const&);
    Network(Network const&);
    Network();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::IPAddress GetBestIP() const;

    MCAPI ushort GetCost(::webrtc::FieldTrialsView const&) const;

    MCAPI ::webrtc::MdnsResponderInterface* GetMdnsResponder() const;

    MCAPI Network(::std::string_view, ::std::string_view, ::rtc::IPAddress const&, int, ::rtc::AdapterType);

    MCAPI bool SetIPs(::std::vector<::rtc::InterfaceAddress> const&, bool);

    MCAPI ::std::string ToString() const;

    MCAPI ~Network();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::pair<::rtc::AdapterType, bool> GuessAdapterFromNetworkCost(int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view, ::std::string_view, ::rtc::IPAddress const&, int, ::rtc::AdapterType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
