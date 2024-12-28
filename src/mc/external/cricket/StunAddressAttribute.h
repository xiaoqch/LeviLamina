#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/StunAttribute.h"
#include "mc/external/cricket/StunAttributeValueType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunAddressAttribute : public ::cricket::StunAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnka0a52e;
    // NOLINTEND

public:
    // prevent constructor by default
    StunAddressAttribute& operator=(StunAddressAttribute const&);
    StunAddressAttribute(StunAddressAttribute const&);
    StunAddressAttribute();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::cricket::StunAttributeValueType value_type() const /*override*/;

    // vIndex: 3
    virtual bool Read(::rtc::ByteBufferReader*) /*override*/;

    // vIndex: 4
    virtual bool Write(::rtc::ByteBufferWriter*) const /*override*/;

    // vIndex: 0
    virtual ~StunAddressAttribute() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void SetAddress(::rtc::SocketAddress const&);

    MCAPI StunAddressAttribute(ushort, ::rtc::SocketAddress const&);

    MCAPI StunAddressAttribute(ushort, ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort, ::rtc::SocketAddress const&);

    MCAPI void* $ctor(ushort, ushort);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cricket::StunAttributeValueType $value_type() const;

    MCAPI bool $Read(::rtc::ByteBufferReader*);

    MCAPI bool $Write(::rtc::ByteBufferWriter*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
