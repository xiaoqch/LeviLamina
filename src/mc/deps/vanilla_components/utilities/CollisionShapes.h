#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
// clang-format on

struct CollisionShapes {
public:
    // CollisionShapes inner types declare
    // clang-format off
    struct BlockAndBlockPos;
    // clang-format on

    // CollisionShapes inner types define
    struct BlockAndBlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk110a9c;
        ::ll::UntypedStorage<4, 12> mUnk52d08b;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockAndBlockPos& operator=(BlockAndBlockPos const&);
        BlockAndBlockPos(BlockAndBlockPos const&);
        BlockAndBlockPos();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8d7368;
    ::ll::UntypedStorage<8, 24> mUnke5f742;
    ::ll::UntypedStorage<1, 1>  mUnke03c26;
    // NOLINTEND

public:
    // prevent constructor by default
    CollisionShapes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CollisionShapes(::CollisionShapes const&);

    MCNAPI ::std::pair<::BlockPos, ::Block const*> getBlockPosCurrentlyStandingOn(::AABB box) const;

    MCNAPI ::CollisionShapes& operator=(::CollisionShapes const&);

    MCNAPI ::CollisionShapes& operator=(::CollisionShapes&&);

    MCNAPI ~CollisionShapes();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CollisionShapes const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
