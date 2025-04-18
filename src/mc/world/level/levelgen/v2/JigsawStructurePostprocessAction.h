#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class CompoundTag;
class Dimension;
class JigsawStructureElementRegistry;
class ServerLevel;
namespace br::worldgen { class PoolElementStructureSection; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JigsawStructurePostprocessAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::br::worldgen::PoolElementStructureSection>> mSection;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                    mOriginPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                 mChunkBounds;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawReplacement>                              mJigsawReplacement;
    ::ll::TypedStorage<1, 1, bool>                                                           mIncludeEntities;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;

    // vIndex: 2
    virtual void serialize(::CompoundTag& tag) /*override*/;

    // vIndex: 0
    virtual ~JigsawStructurePostprocessAction() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::JigsawStructurePostprocessAction>
    load(::CompoundTag const& tag, ::JigsawStructureElementRegistry const& elementReg);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::cereal::ReflectionCtx>& mCerealContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::ServerLevel& level, ::Dimension& dimension);

    MCAPI void $serialize(::CompoundTag& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
