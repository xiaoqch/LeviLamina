#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
// clang-format on

class GrowingPlantFeature : public ::IFeature {
public:
    // GrowingPlantFeature inner types declare
    // clang-format off
    struct WeightedBlockReference;
    struct WeightedRandomNumberReference;
    // clang-format on

    // GrowingPlantFeature inner types define
    struct WeightedRandomNumberReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnk92f875;
        ::ll::UntypedStorage<4, 4> mUnk7a4752;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedRandomNumberReference& operator=(WeightedRandomNumberReference const&);
        WeightedRandomNumberReference(WeightedRandomNumberReference const&);
        WeightedRandomNumberReference();
    };

    struct WeightedBlockReference {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 184> mUnk63f3ab;
        ::ll::UntypedStorage<4, 4>   mUnka9f6ce;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const&);
        WeightedBlockReference(WeightedBlockReference const&);
        WeightedBlockReference();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~WeightedBlockReference();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5f69d8;
    ::ll::UntypedStorage<1, 1>  mUnk8164c1;
    ::ll::UntypedStorage<4, 8>  mUnk76831d;
    ::ll::UntypedStorage<8, 24> mUnkf3ee6d;
    ::ll::UntypedStorage<8, 24> mUnkbd7ccc;
    ::ll::UntypedStorage<1, 1>  mUnk102e29;
    // NOLINTEND

public:
    // prevent constructor by default
    GrowingPlantFeature& operator=(GrowingPlantFeature const&);
    GrowingPlantFeature(GrowingPlantFeature const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GrowingPlantFeature() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GrowingPlantFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
