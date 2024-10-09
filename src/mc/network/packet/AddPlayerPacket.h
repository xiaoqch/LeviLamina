#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/AddActorBasePacket.h"
#include "mc/platform/Result.h"

class AddPlayerPacket : public ::AddActorBasePacket {
public:
    // prevent constructor by default
    AddPlayerPacket& operator=(AddPlayerPacket const&);
    AddPlayerPacket(AddPlayerPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddPlayerPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AddPlayerPacket();

    MCAPI explicit AddPlayerPacket(class Player& p);

    // NOLINTEND
};
