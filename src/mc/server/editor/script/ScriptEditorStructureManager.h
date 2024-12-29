#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Level;
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::ScriptModule { class ScriptEditorStructure; }
namespace Editor::ScriptModule { class ScriptEditorStructureSearchOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptEditorStructureManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka1a432;
    ::ll::UntypedStorage<8, 8>  mUnk7aaab7;
    ::ll::UntypedStorage<8, 24> mUnke3ab21;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEditorStructureManager& operator=(ScriptEditorStructureManager const&);
    ScriptEditorStructureManager(ScriptEditorStructureManager const&);
    ScriptEditorStructureManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptEditorStructureManager(::gsl::not_null<::Level*> level, ::Scripting::WeakLifetimeScope& scope);

    MCAPI bool
    _containTag(::std::vector<::std::string> const& firstTags, ::std::vector<::std::string> const& secondTags);

    MCAPI ::Scripting::Result_deprecated<::Editor::ScriptModule::ScriptEditorStructure> createFromClipboardItem(
        ::Scripting::DependencyLocator&              locator,
        ::Editor::ScriptModule::ScriptClipboardItem& item,
        ::std::string                                structureName
    );

    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getExistingTags();

    MCAPI ::Scripting::Result_deprecated<::Editor::ScriptModule::ScriptEditorStructure>
    loadStructure(::Scripting::DependencyLocator& locator, ::std::string storageLocation, ::std::string structureName);

    MCAPI ::Scripting::Result<void> saveStructure(::Editor::ScriptModule::ScriptEditorStructure const& scriptStructure);

    MCAPI ::Scripting::Result_deprecated<::std::vector<::Editor::ScriptModule::ScriptEditorStructure>> searchStructures(
        ::Scripting::DependencyLocator&                                             locator,
        ::std::optional<::Editor::ScriptModule::ScriptEditorStructureSearchOptions> options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptEditorStructureManager> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::gsl::not_null<::Level*> level, ::Scripting::WeakLifetimeScope& scope);
    // NOLINTEND
};

} // namespace Editor::ScriptModule