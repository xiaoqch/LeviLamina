#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ClientCacheMissResponsePacket : public ::Packet {
public:
    // prevent constructor by default
    ClientCacheMissResponsePacket& operator=(ClientCacheMissResponsePacket const&);
    ClientCacheMissResponsePacket(ClientCacheMissResponsePacket const&);
    ClientCacheMissResponsePacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientCacheMissResponsePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND
};
