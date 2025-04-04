#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/services/persistence/EditorPersistenceService.h"
#include "mc/editor/services/persistence/PersistentDataType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Services {

class EditorServerPersistenceService : public ::Editor::Services::EditorPersistenceService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke0f2d7;
    ::ll::UntypedStorage<1, 1>  mUnkedb2c6;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorServerPersistenceService& operator=(EditorServerPersistenceService const&);
    EditorServerPersistenceService(EditorServerPersistenceService const&);
    EditorServerPersistenceService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorServerPersistenceService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 7
    virtual void
    _removePersistData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType) /*override*/;

    // vIndex: 8
    virtual void _tick(::Editor::ServiceProviderCollection& serviceProvider) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadPersistDataFromLevel();

    MCAPI void _removePersistDataFromLevel(::HashedString const& key);

    MCAPI void _saveDataOnLevel(::HashedString const& key, ::std::string value);

    MCAPI void _savePersistDataOnLevel();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& LEVEL_STORAGE_PERSISTDATA_KEY_SUFFIX();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI void $_removePersistData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType);

    MCAPI void $_tick(::Editor::ServiceProviderCollection& serviceProvider);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEditorPersistenceServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
