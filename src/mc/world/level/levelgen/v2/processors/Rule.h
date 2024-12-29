#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class Rule : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk60beef;
    // NOLINTEND

public:
    // prevent constructor by default
    Rule& operator=(Rule const&);
    Rule(Rule const&);
    Rule();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::br::worldgen::StructureBlockInfo>
    process(::IBlockSource& region, ::BlockPos, ::BlockPos structurePos, ::br::worldgen::StructureBlockInfo const& originalBlockInfo, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&)
        const /*override*/;

    // vIndex: 3
    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    // vIndex: 4
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~Rule() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo>
    $process(::IBlockSource& region, ::BlockPos, ::BlockPos structurePos, ::br::worldgen::StructureBlockInfo const& originalBlockInfo, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&)
        const;

    MCAPI ::br::worldgen::StructureProcessorType $type() const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors