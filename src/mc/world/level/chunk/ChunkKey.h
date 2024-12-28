#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class LevelChunk;
// clang-format on

class ChunkKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChunkPos const>      pos;
    ::ll::TypedStorage<4, 4, ::DimensionType const> id;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkKey& operator=(ChunkKey const&);
    ChunkKey(ChunkKey const&);
    ChunkKey();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChunkKey(::LevelChunk const& lc);

    MCAPI ChunkKey(::ChunkPos const& pos, ::DimensionType id);

    MCAPI ::std::string_view asSpan() const;

    MCAPI uint64 hashCode() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelChunk const& lc);

    MCAPI void* $ctor(::ChunkPos const& pos, ::DimensionType id);
    // NOLINTEND
};
