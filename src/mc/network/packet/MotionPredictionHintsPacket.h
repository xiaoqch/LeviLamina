#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorRuntimeID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class MotionPredictionHintsPacket : public ::Packet {
public:
    ActorRuntimeID mRuntimeId; // this+0x30
    Vec3           mMotion;    // this+0x38
    bool           mOnGround;  // this+0x44

    // prevent constructor by default
    MotionPredictionHintsPacket& operator=(MotionPredictionHintsPacket const&) = delete;
    MotionPredictionHintsPacket(MotionPredictionHintsPacket const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getId@MotionPredictionHintsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@MotionPredictionHintsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@MotionPredictionHintsPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@MotionPredictionHintsPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);

    // symbol: ??1MotionPredictionHintsPacket@@UEAA@XZ
    MCVAPI ~MotionPredictionHintsPacket();

    // symbol: ??0MotionPredictionHintsPacket@@QEAA@AEBVActor@@@Z
    MCAPI MotionPredictionHintsPacket(class Actor const&);

    // symbol: ??0MotionPredictionHintsPacket@@QEAA@XZ
    MCAPI MotionPredictionHintsPacket();

    // NOLINTEND
};