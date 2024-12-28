#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/Loader.h"
#include "mc/network/packet/StructureTemplateResponseType.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/levelgen/structure/StructureDeleteResult.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class ChunkLoadActionList;
class CommandArea;
class CompoundTag;
class Dimension;
class IUnknownBlockTypeRegistry;
class LegacyStructureTemplate;
class Level;
class LevelStorage;
class PackInstance;
class ResourcePackManager;
class ServerLevel;
class StructureAnimationData;
class StructureSettings;
class StructureTemplate;
class StructureTemplateDataResponsePacket;
struct Tick;
namespace Core { class Path; }
namespace SharedTypes::v1_21_50 { struct JigsawStructureMetadata; }
namespace SharedTypes::v1_21_50 { struct JigsawStructureMetadataFile; }
namespace SharedTypes::v1_21_50 { struct JigsawStructureMetadataRegistry; }
// clang-format on

class StructureManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mRepositoryMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::LegacyStructureTemplate>>>
        mLegacyStructureRepository;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::StructureTemplate>>>
                                                                                          mStructureRepository;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StructureAnimationData>>> mStructurePlacementQueue;
    ::ll::TypedStorage<4, 4, uint>                                                     mStructurePlacementSaveCounter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry>> mUnknownBlockRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePackManager> const> mPackManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_50::JigsawStructureMetadataRegistry>>
        mMetadataRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureManager& operator=(StructureManager const&);
    StructureManager(StructureManager const&);
    StructureManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StructureManager(::ResourcePackManager& packManager);

    MCAPI ::StructureTemplate* _createAndLoadStructure(
        ::std::string const&         structureName,
        ::ResourcePackManager const* packManager,
        ::LevelStorage*              levelStorage
    );

    MCAPI ::std::string _createLevelStorageId(::std::string const& dimensionPrefix, ::std::string const& saveId);

    MCAPI bool _findResource(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& structurePath,
        ::PackInstance const&                                           pack,
        ::std::string&                                                  resourceStream
    );

    MCAPI ::SharedTypes::v1_21_50::JigsawStructureMetadataRegistry& _getMetadataRegistry() const;

    MCAPI bool _placeSegment(::StructureAnimationData& structureAnimationData);

    MCAPI bool _placeSegment(
        ::Dimension&                                         dimension,
        ::StructureAnimationData&                            structureAnimationData,
        ::ChunkLoadActionList&                               chunkLoadActionList,
        ::BoundingBox const&                                 boundingBox,
        ::std::function<::ChunksLoadedStatus(::Tick)> const& areChunksLoaded
    );

    MCAPI ::LegacyStructureTemplate* _readLegacyStructure(::std::string const& name);

    MCAPI void
    _removePlacementQueueItem(::std::string const& dimensionPrefix, ::StructureAnimationData& structureAnimationData);

    MCAPI void
    _savePlacementQueueItem(::std::string const& dimensionPrefix, ::StructureAnimationData& structureAnimationData);

    MCAPI void clearAndShutdownStructurePlacement();

    MCAPI ::StructureTemplate&
    cloneStructure(::StructureTemplate const& structureTemplate, ::std::string const& structureName);

    MCAPI ::StructureTemplateDataResponsePacket createStructureDataExportPacket(
        ::std::string const&            structureName,
        ::ResourcePackManager const*    packManager,
        ::LevelStorage*                 levelStorage,
        ::StructureTemplateResponseType responseType
    );

    MCAPI ::StructureDeleteResult deleteStructure(::std::string const& structureName, ::LevelStorage& levelStorage);

    MCAPI ::std::optional<::SharedTypes::v1_21_50::JigsawStructureMetadata>
    getJigsawStructureMetadata(uint64 metadataKey) const;

    MCAPI ::StructureTemplate& getOrCreate(::std::string const& structureName);

    MCAPI ::LegacyStructureTemplate& getOrCreateLegacy(::std::string const& structureName);

    MCAPI ::StructureTemplate* getOrLoadStructure(
        ::std::string const&         structureName,
        ::ResourcePackManager const* packManager,
        ::LevelStorage*              levelStorage
    );

    MCAPI ::StructureTemplate* getStructure(::std::string const& structureName) const;

    MCAPI ::std::vector<::std::string> getStructureNames(::LevelStorage& levelStorage, bool includeUnremovable) const;

    MCAPI void importStructureFromTemplate(::std::string name, ::StructureTemplate const& temp);

    MCAPI bool load(
        ::StructureTemplate&         structureTemplate,
        ::ResourcePackManager const* packManager,
        ::LevelStorage*              levelStorage
    );

    MCAPI void loadMetadataRegistries(::ResourcePackManager& packManager);

    MCAPI void loadPlacementQueue(::LevelStorage& storage, ::Level& level, ::Dimension& dimension);

    MCAPI void
    loadPlacementQueueItem(::std::string const& key, ::CompoundTag const& tag, ::Level& level, ::Dimension& dimension);

    MCAPI void queueLoad(::std::unique_ptr<::StructureAnimationData> structureAnimationData);

    MCAPI bool readStructure(::StructureTemplate& structureTemplate);

    MCAPI void reset();

    MCAPI void saveToLevel(::StructureTemplate const& structureTemplate, ::LevelStorage& levelStorage);

    MCAPI void setJigsawStructureMetadata(
        uint64                                           metadataKey,
        ::SharedTypes::v1_21_50::JigsawStructureMetadata jigsawStructureMetadata
    );

    MCAPI void setUnknownBlockRegistry(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI void tick(::Dimension const& dimension);

    MCAPI ::QueueRequestResult tryPlaceStructureInWorld(
        ::std::unique_ptr<::CommandArea>            cmdArea,
        ::ServerLevel&                              level,
        ::Dimension&                                dimension,
        ::BoundingBox const&                        bounds,
        ::BlockPos const&                           loadPosition,
        ::StructureSettings const&                  settings,
        ::StructureTemplate const&                  structureTemplate,
        ::std::unique_ptr<::StructureAnimationData> structureAnimationData
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::SharedTypes::v1_21_50::JigsawStructureMetadataRegistry>
    _loadMetadataRegistries(::ResourcePackManager& packManager, bool excludeLatest);

    MCAPI static void _metadataPackForEachCallback(
        ::SharedTypes::v1_21_50::JigsawStructureMetadataRegistry&            registry,
        ::Puv::Loader<::SharedTypes::v1_21_50::JigsawStructureMetadataFile>& loader,
        ::PackInstance const&                                                pack,
        ::std::string&                                                       fileData,
        ::Core::Path const&                                                  filenameWithExtension
    );

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getStructurePath(::std::string const& structureFullName);

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getStructurePath(::std::string const& structureNamespace, ::std::string const& structureName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& BEHAVIOR_PACK_STRUCTURES_FOLDER();

    MCAPI static char const*& LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourcePackManager& packManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
