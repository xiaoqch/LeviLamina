#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/enums/RewindType.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class Vec2;
class Vec3;
struct PlayerInputTick;
// clang-format on

class CorrectPlayerMovePredictionPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                mPosDelta;
    ::ll::TypedStorage<4, 8, ::Vec2>                 mRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mVehicleAngularVelocity;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>      mTick;
    ::ll::TypedStorage<1, 1, bool>                   mOnGround;
    ::ll::TypedStorage<1, 1, ::RewindType>           mPredictionType;
    // NOLINTEND

public:
    // prevent constructor by default
    CorrectPlayerMovePredictionPacket& operator=(CorrectPlayerMovePredictionPacket const&);
    CorrectPlayerMovePredictionPacket(CorrectPlayerMovePredictionPacket const&);
    CorrectPlayerMovePredictionPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~CorrectPlayerMovePredictionPacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
