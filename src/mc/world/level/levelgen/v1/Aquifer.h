#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AquiferNoises;
class Block;
class BlockPos;
class ChunkPos;
class SurfaceLevelCache;
struct OverworldNoises3d;
// clang-format on

class Aquifer {
public:
    // Aquifer inner types declare
    // clang-format off
    struct FluidSample;
    struct LocalRegistry;
    // clang-format on

    // Aquifer inner types define
    using AquifierGridPos = ::BlockPos;

    struct FluidSample {
    public:
        // FluidSample inner types define
        enum class FluidType : schar {
            Water = 0,
            Lava  = 1,
            None  = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>                       pos;
        ::ll::TypedStorage<4, 4, int>                               blockLevel;
        ::ll::TypedStorage<1, 1, ::Aquifer::FluidSample::FluidType> fluidType;
        // NOLINTEND

    public:
        // prevent constructor by default
        FluidSample& operator=(FluidSample const&);
        FluidSample(FluidSample const&);
        FluidSample();
    };

    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk33b760;
        ::ll::UntypedStorage<8, 8> mUnkeef3f1;
        ::ll::UntypedStorage<8, 8> mUnkf5b904;
        ::ll::UntypedStorage<8, 8> mUnkd60ac1;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalRegistry& operator=(LocalRegistry const&);
        LocalRegistry(LocalRegistry const&);
        LocalRegistry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AquiferNoises const&>                 mAquiferNoises;
    ::ll::TypedStorage<8, 8, ::OverworldNoises3d const&>             mTerrainNoises;
    ::ll::TypedStorage<8, 8, ::SurfaceLevelCache const&>             mSurfaceLevelCache;
    ::ll::TypedStorage<4, 4, int>                                    mSeaLevel;
    ::ll::TypedStorage<4, 4, int>                                    mLastFluidLevel;
    ::ll::TypedStorage<4, 4, float>                                  mLastBarrierDensity;
    ::ll::TypedStorage<1, 1, ::Aquifer::FluidSample::FluidType>      mLastFluidType;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldScheduleFluidUpdate;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mMinGrid;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mGridSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::Aquifer::FluidSample>> mFluidLevelCache;
    ::ll::TypedStorage<8, 32, ::Aquifer::LocalRegistry>              mLocalRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    Aquifer& operator=(Aquifer const&);
    Aquifer(Aquifer const&);
    Aquifer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Aquifer(
        ::ChunkPos const&          chunkPos,
        ::AquiferNoises const&     aquiferNoises,
        ::OverworldNoises3d const& terrainNoises,
        ::SurfaceLevelCache const& surfaceLevelCache,
        int                        dimensionMinHeight,
        int                        levelGenHeight,
        int                        seaLevel
    );

    MCAPI ::Aquifer::FluidSample _computeAquifer(::BlockPos const& cellCenter) const;

    MCAPI ::Aquifer::FluidSample _getOrComputeNewFluidSample(::BlockPos const& cellCenter);

    MCAPI void computeAt(::BlockPos const& worldPos);

    MCAPI float getLastBarrier() const;

    MCAPI ::Block const* getLastFluidBlockType(bool canTickUpdate) const;

    MCAPI int getLastFluidLevel() const;

    MCAPI bool shouldScheduleFluidUpdate() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<::std::pair<int, int>, 13> const& chunkOffset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ChunkPos const&          chunkPos,
        ::AquiferNoises const&     aquiferNoises,
        ::OverworldNoises3d const& terrainNoises,
        ::SurfaceLevelCache const& surfaceLevelCache,
        int                        dimensionMinHeight,
        int                        levelGenHeight,
        int                        seaLevel
    );
    // NOLINTEND
};
