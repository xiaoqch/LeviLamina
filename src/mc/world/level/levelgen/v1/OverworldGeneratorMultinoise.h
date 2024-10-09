#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/v1/OverworldGenerator.h"

class OverworldGeneratorMultinoise : public ::OverworldGenerator {
public:
    // OverworldGeneratorMultinoise inner types declare
    // clang-format off
    struct BlockGenerationResult;
    struct Noises;
    // clang-format on

    // OverworldGeneratorMultinoise inner types define
    struct BlockGenerationResult {
    public:
        // prevent constructor by default
        BlockGenerationResult& operator=(BlockGenerationResult const&);
        BlockGenerationResult(BlockGenerationResult const&);
        BlockGenerationResult();
    };

    struct Noises {
    public:
        // prevent constructor by default
        Noises& operator=(Noises const&);
        Noises(Noises const&);
        Noises();

    public:
        // NOLINTBEGIN
        MCAPI ~Noises();

        MCAPI static struct OverworldGeneratorMultinoise::Noises
        make(class XoroshiroPositionalRandomFactory const& randomFactory);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    OverworldGeneratorMultinoise& operator=(OverworldGeneratorMultinoise const&);
    OverworldGeneratorMultinoise(OverworldGeneratorMultinoise const&);
    OverworldGeneratorMultinoise();

public:
    // NOLINTBEGIN
    MCVAPI void _prepareHeights(
        class BlockVolume&                                                    box,
        class ChunkPos const&                                                 chunkPos,
        class WorldGenCache const&                                            worldGenCache,
        class Aquifer*                                                        aquiferPtr,
        std::function<void(class BlockPos const&, class Block const&, int)>&& tickUpdateFn,
        bool                                                                  factorInBeardsAndShavers,
        std::vector<short>*                                                   ZXheights,
        int                                                                   skipTopN
    );

    MCVAPI bool chunkPosNeedsBlending(class ChunkPos const& cp);

    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos chunkPos) const;

    MCVAPI void decorateWorldGenPostProcess(
        class Biome const&,
        class LevelChunk&  lc,
        class BlockSource& source,
        class Random&      random
    ) const;

    MCVAPI class BlockPos findSpawnPosition() const;

    MCVAPI class Util::MultidimensionalArray<float, 5, 5, 41>
    generateDensityCellsForChunk(class ChunkPos const& chunkPos) const;

    MCVAPI class BiomeSource const& getBiomeSource() const;

    MCVAPI int getLevelGenHeight() const;

    MCVAPI std::unique_ptr<class PerlinSimplexNoise> const& getMaterialAdjNoise() const;

    MCVAPI std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4> worldQuartPos) const;

    MCVAPI class PerlinSimplexNoise const& getSurfaceNoise();

    MCVAPI std::optional<class XoroshiroPositionalRandomFactory> getXoroshiroPositionalRandomFactory() const;

    MCVAPI std::unique_ptr<class Aquifer> tryMakeAquifer(
        class ChunkPos const&          chunkPos,
        class SurfaceLevelCache const& surfaceLevelCache,
        short                          minHeight,
        short                          levelGenHeight,
        short                          seaLevel
    ) const;

    MCVAPI ~OverworldGeneratorMultinoise();

    MCAPI
    OverworldGeneratorMultinoise(class Dimension& dimension, class LevelSeed64 seed, class Biome const* biomeOverride);

    MCAPI static float _applySlides(class DimensionHeightRange const& heightRange, float noiseValue, uchar cellYIndex);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct TerrainInfo
    _attenuateOffsetAndFactor(class DividedPos2d<4> worldQuartPos, struct TerrainInfo defaultTerrainInfo) const;

    MCAPI class Util::MultidimensionalArray<float, 5, 5, 41> _generateDensityCellsForChunk(
        class ChunkPos const&      chunkPos,
        class WorldGenCache const& worldGenCache,
        class NoodleCavifier*      noodleCavifier,
        class OreVeinifier*        oreVeinifier
    ) const;

    MCAPI std::unique_ptr<class BiomeSource> _makeBiomeSource(
        class XoroshiroPositionalRandomFactory const&,
        class BiomeRegistry const& biomeRegistry,
        class Biome const*         overrideBiome
    );

    // NOLINTEND
};
