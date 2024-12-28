#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRuntimeID;
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class AnimatePacket : public ::Packet {
public:
    // AnimatePacket inner types define
    enum class Action : int {
        NoAction         = 0,
        Swing            = 1,
        WakeUp           = 3,
        CriticalHit      = 4,
        MagicCriticalHit = 5,
        RowRight         = 128,
        RowLeft          = 129,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>        mRuntimeId;
    ::ll::TypedStorage<4, 4, ::AnimatePacket::Action> mAction;
    ::ll::TypedStorage<4, 4, float>                   mData;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatePacket& operator=(AnimatePacket const&);
    AnimatePacket(AnimatePacket const&);

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
    virtual ~AnimatePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimatePacket();

    MCAPI AnimatePacket(::AnimatePacket::Action action, ::Actor& e);

    MCAPI AnimatePacket(::AnimatePacket::Action action, ::ActorRuntimeID runtimeId);

    MCAPI AnimatePacket(::AnimatePacket::Action action, ::ActorRuntimeID runtimeId, float data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::AnimatePacket::Action action, ::Actor& e);

    MCAPI void* $ctor(::AnimatePacket::Action action, ::ActorRuntimeID runtimeId);

    MCAPI void* $ctor(::AnimatePacket::Action action, ::ActorRuntimeID runtimeId, float data);
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
