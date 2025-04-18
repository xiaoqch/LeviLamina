#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Dimension;
class DimensionHeightRange;
class IDimensionManagerConnector;
class ILevelChunkEventManagerConnector;
class LevelChunk;
class LevelChunkMetaData;
class LevelChunkMetaDataDictionary;
class LevelSeed64;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LevelChunkMetaDataManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaDataDictionary>> mLevelChunkMetaDataDictionary;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnNewDimensionCreatedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnChunkLoadedSubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _consolidateLevelChunkMetaData(::LevelChunk& levelChunk);

    MCAPI void _onNewDimensionCreated(::Dimension& dimension);

    MCFOLD ::std::shared_ptr<::LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void registerOnNewDimensionCreated(::IDimensionManagerConnector& dimensionManagerConnector);

    MCAPI void updateLevelChunkMetaDataForSaving(
        ::LevelChunk&                 lc,
        ::BaseGameVersion const&      currentBaseGameVersion,
        ::DimensionHeightRange const& dimensionHeightRange
    );

    MCAPI ~LevelChunkMetaDataManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void inferInitialMetaDataAfterDeserialization(
        ::LevelChunk&                 lc,
        ::LevelSeed64                 generationSeed,
        ::GeneratorType               generatorType,
        ::std::string const&          dimensionName,
        ::DimensionType               dimensionId,
        ::DimensionHeightRange const& dimensionHeightRange,
        ::BaseGameVersion const&      currentBaseGameVersion,
        ::LevelChunkMetaData&         metaData
    );

    MCAPI static ::std::shared_ptr<::LevelChunkMetaData> initializeLevelChunkMetaData(
        ::DimensionType               dimensionId,
        ::std::string const&          dimensionName,
        ::DimensionHeightRange const& dimensionHeightRange,
        bool                          use3DBiomeMaps,
        ::LevelSeed64                 levelSeed,
        ::GeneratorType               generatorType,
        ::BaseGameVersion const&      baseGameVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
