#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class JigsawBlockInfo;
class LegacyStructureSettings;
// clang-format on

class EmptyPoolElement : public ::StructurePoolElement {
public:
    // prevent constructor by default
    EmptyPoolElement& operator=(EmptyPoolElement const&);
    EmptyPoolElement(EmptyPoolElement const&);
    EmptyPoolElement();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::BlockPos getSize(::Rotation) const /*override*/;

    // vIndex: 2
    virtual ::std::vector<::JigsawBlockInfo> getJigsawMarkers(::BlockPos position, ::Rotation rotation) const
        /*override*/;

    // vIndex: 1
    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const
        /*override*/;

    // vIndex: 3
    virtual ::BoundingBox getBoundingBox(::BlockPos position, ::Rotation rotation) const /*override*/;

    // vIndex: 13
    virtual bool isValid() const /*override*/;

    // vIndex: 15
    virtual ::StructurePoolElementType type() const /*override*/;

    // vIndex: 14
    virtual ~EmptyPoolElement() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockPos $getSize(::Rotation) const;

    MCAPI ::std::vector<::JigsawBlockInfo> $getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;

    MCAPI ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;

    MCAPI ::BoundingBox $getBoundingBox(::BlockPos position, ::Rotation rotation) const;

    MCAPI bool $isValid() const;

    MCAPI ::StructurePoolElementType $type() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
