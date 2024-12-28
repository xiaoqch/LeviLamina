#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

struct WebSocketPacketData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIP;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocketPacketData& operator=(WebSocketPacketData const&);
    WebSocketPacketData(WebSocketPacketData const&);
    WebSocketPacketData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WebSocketPacketData(::std::string const& ip);

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& ip);
    // NOLINTEND
};
