#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FeatureRegistry;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
// clang-format on

class LegacyTreeFeature : public ::IFeature {
public:
    // LegacyTreeFeature inner types define
    enum class Type : int {
        BambooJungle          = 0,
        BirchForest           = 1,
        BirchForestMutated    = 2,
        ExtremeHillsPlusTrees = 3,
        FlowerForest          = 4,
        Meadow                = 5,
        Forest                = 6,
        Ice                   = 7,
        Jungle                = 8,
        JungleEdge            = 9,
        MesaForest            = 10,
        Plains                = 11,
        Savanna               = 12,
        SavannaMutated        = 13,
        Taiga                 = 14,
        TaigaMega             = 15,
        TaigaMegaSpruce       = 16,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke9ef65;
    ::ll::UntypedStorage<8, 24> mUnk387478;
    ::ll::UntypedStorage<4, 4>  mUnk843ebb;
    ::ll::UntypedStorage<8, 24> mUnk4ed60b;
    ::ll::UntypedStorage<8, 64> mUnkd9a533;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTreeFeature& operator=(LegacyTreeFeature const&);
    LegacyTreeFeature(LegacyTreeFeature const&);
    LegacyTreeFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyTreeFeature() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyTreeFeature(::LegacyTreeFeature::Type placementType, ::FeatureRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyTreeFeature::Type placementType, ::FeatureRegistry& registry);
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
