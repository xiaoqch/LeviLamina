#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/serviceproviders/EditorBlockPaletteServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct EditorBlockPalette; }
namespace Editor { struct EditorBlockPaletteEventActivePaletteChanged; }
namespace Editor { struct EditorBlockPaletteEventItemUpdated; }
namespace Editor { struct EditorBlockPaletteEventPaletteRemoved; }
namespace Editor { struct EditorBlockPaletteEventPaletteUpdated; }
namespace Editor { struct EditorBlockPaletteEventSelectedItemIndexChanged; }
namespace Editor { struct ProbabilityBlockPaletteItem; }
namespace Editor { struct SimpleBlockPaletteItem; }
namespace Editor::Network { class BlockPaletteActivePaletteChangedPayload; }
namespace Editor::Network { class BlockPaletteChangedPayload; }
namespace Editor::Network { class BlockPaletteItemChangedPayload; }
namespace Editor::Network { class BlockPaletteRemovedPayload; }
namespace Editor::Network { class BlockPaletteSelectedIndexChangedPayload; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::Services {

class EditorBlockPaletteService : public ::Editor::Services::IEditorService,
                                  public ::Editor::Services::EditorBlockPaletteServiceProvider,
                                  public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk208e72;
    ::ll::UntypedStorage<8, 16>  mUnkc25d79;
    ::ll::UntypedStorage<4, 4>   mUnk498fce;
    ::ll::UntypedStorage<8, 736> mUnk53b476;
    ::ll::UntypedStorage<8, 24>  mUnk71f343;
    ::ll::UntypedStorage<8, 48>  mUnkc02936;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockPaletteService& operator=(EditorBlockPaletteService const&);
    EditorBlockPaletteService(EditorBlockPaletteService const&);
    EditorBlockPaletteService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorBlockPaletteService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::vector<::std::shared_ptr<::Editor::EditorBlockPalette>> const& getPaletteList() const /*override*/;

    // vIndex: 2
    virtual ::Editor::EditorBlockPalette const& getActivePalette() const /*override*/;

    // vIndex: 14
    virtual void forEachBlockType(::std::function<void(::BlockLegacy const&, bool)> callback) const /*override*/;

    // vIndex: 7
    virtual int getSelectedPaletteItemIndex() const /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> pickBlock(::Block const&) = 0;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<::BlockLegacy const*> getSelectedBlockType() const /*override*/;

    // vIndex: 11
    virtual ::std::vector<::std::string> getPaletteIdList() const /*override*/;

    // vIndex: 12
    virtual ::std::optional<::Editor::EditorBlockPalette> getPalette(::HashedString const& paletteId) const
        /*override*/;

    // vIndex: 13
    virtual ::Scripting::Result_deprecated<
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>>
    getPaletteItem(::HashedString const& paletteId, int index) const /*override*/;

    // vIndex: 15
    virtual ::Bedrock::PubSub::Subscription
    registerEventListener(::std::function<void(::std::variant<
                                               ::Editor::EditorBlockPaletteEventItemUpdated,
                                               ::Editor::EditorBlockPaletteEventSelectedItemIndexChanged,
                                               ::Editor::EditorBlockPaletteEventActivePaletteChanged,
                                               ::Editor::EditorBlockPaletteEventPaletteUpdated,
                                               ::Editor::EditorBlockPaletteEventPaletteRemoved> const&)> callback
    ) /*override*/;

    // vIndex: 7
    virtual void _handleBlockPaletteActivePaletteChangedPayload(::Editor::Network::
                                                                    BlockPaletteActivePaletteChangedPayload const&) = 0;

    // vIndex: 8
    virtual void _handleBlockPaletteItemChangedPayload(::Editor::Network::BlockPaletteItemChangedPayload const&) = 0;

    // vIndex: 9
    virtual void _handleBlockPaletteSelectedIndexChangedPayload(::Editor::Network::
                                                                    BlockPaletteSelectedIndexChangedPayload const&) = 0;

    // vIndex: 10
    virtual void _handleBlockPaletteChangedPayload(::Editor::Network::BlockPaletteChangedPayload const&) = 0;

    // vIndex: 11
    virtual void _handleBlockPaletteRemovedPayload(::Editor::Network::BlockPaletteRemovedPayload const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorBlockPaletteService(::Editor::ServiceProviderCollection& serviceProviders);

    MCAPI void _addOrReplacePalette(::Editor::EditorBlockPalette const& palette);

    MCAPI ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>
    _checkAndClampWeights(::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> item);

    MCAPI ::Scripting::Result<void> _checkForDuplicateBlocks(
        ::HashedString const&                                                                          paletteId,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );

    MCAPI ::Editor::EditorBlockPalette& _getActivePalette() const;

    MCAPI ::Scripting::Error _getIndexOutOfBoundsError(int index, int max) const;

    MCAPI ::Editor::EditorBlockPalette* _getPalette(::HashedString const& paletteId) const;

    MCAPI ::Scripting::Result<void> _removePalette(::HashedString const& paletteId);

    MCAPI ::Scripting::Result<void> _setActivePalette(::HashedString const& paletteId);

    MCAPI ::Scripting::Result<void> _updatePaletteItem(
        ::HashedString const&                                                                          paletteId,
        int                                                                                            index,
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem> const& item
    );

    MCAPI ::Scripting::Result<void> _updateSelectedPaletteIndex(int index);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::std::vector<::std::shared_ptr<::Editor::EditorBlockPalette>> const& $getPaletteList() const;

    MCAPI ::Editor::EditorBlockPalette const& $getActivePalette() const;

    MCAPI void $forEachBlockType(::std::function<void(::BlockLegacy const&, bool)> callback) const;

    MCAPI int $getSelectedPaletteItemIndex() const;

    MCAPI ::Scripting::Result_deprecated<::BlockLegacy const*> $getSelectedBlockType() const;

    MCAPI ::std::vector<::std::string> $getPaletteIdList() const;

    MCAPI ::std::optional<::Editor::EditorBlockPalette> $getPalette(::HashedString const& paletteId) const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::variant<::Editor::SimpleBlockPaletteItem, ::Editor::ProbabilityBlockPaletteItem>>
    $getPaletteItem(::HashedString const& paletteId, int index) const;

    MCAPI ::Bedrock::PubSub::Subscription
    $registerEventListener(::std::function<void(::std::variant<
                                                ::Editor::EditorBlockPaletteEventItemUpdated,
                                                ::Editor::EditorBlockPaletteEventSelectedItemIndexChanged,
                                                ::Editor::EditorBlockPaletteEventActivePaletteChanged,
                                                ::Editor::EditorBlockPaletteEventPaletteUpdated,
                                                ::Editor::EditorBlockPaletteEventPaletteRemoved> const&)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForEditorBlockPaletteServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services