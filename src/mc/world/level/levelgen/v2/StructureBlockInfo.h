#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class CompoundTag;
// clang-format on

namespace br::worldgen {

struct StructureBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk451641;
    ::ll::UntypedStorage<8, 8>  mUnk888151;
    ::ll::UntypedStorage<8, 8>  mUnke2f28f;
    ::ll::UntypedStorage<8, 16> mUnk45b43c;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureBlockInfo& operator=(StructureBlockInfo const&);
    StructureBlockInfo(StructureBlockInfo const&);
    StructureBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::br::worldgen::StructureBlockInfo clone() const;

    MCAPI bool operator!=(::br::worldgen::StructureBlockInfo const& rhs) const;

    MCAPI ~StructureBlockInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::StructureBlockInfo
    from(::BlockPos pos, ::Block const& state, ::Block const* extraBlockState);

    MCAPI static ::br::worldgen::StructureBlockInfo
    from(::BlockPos pos, ::Block const& state, ::Block const* extraBlockState, ::std::unique_ptr<::CompoundTag>&& nbt);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen