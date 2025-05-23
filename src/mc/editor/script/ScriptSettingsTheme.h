#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSettingsTheme {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka9a9b3;
    ::ll::UntypedStorage<8, 16> mUnk59913a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSettingsTheme& operator=(ScriptSettingsTheme const&);
    ScriptSettingsTheme(ScriptSettingsTheme const&);
    ScriptSettingsTheme();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::Error> addNewTheme(
        ::std::string const&                  id,
        ::std::optional<::std::string> const& name,
        ::std::optional<::std::string> const& sourceThemeId
    );

    MCNAPI bool canThemeBeModified(::std::string const& id) const;

    MCNAPI ::Scripting::Result<void, ::Scripting::Error> deleteTheme(::std::string const& id);

    MCNAPI ::std::string const getCurrentTheme() const;

    MCNAPI ::std::optional<::std::map<::std::string, ::ScriptModuleMinecraft::ScriptRGBA>>
    getThemeColors(::std::string const& id) const;

    MCNAPI ::std::vector<::std::string> getThemeIdList() const;

    MCNAPI ::Scripting::Result<::std::string, ::Scripting::Error> getThemeName(::std::string const& id) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptRGBA resolveColorKey(::Editor::Settings::ThemeSettingsColorKey key) const;

    MCNAPI ::Scripting::Result<void, ::Scripting::Error> setCurrentTheme(::std::string const& id);

    MCNAPI ::Scripting::Result<void, ::Scripting::Error>
    setThemeName(::std::string const& id, ::std::string const& name);

    MCNAPI ::Scripting::Result<void, ::Scripting::Error> updateThemeColor(
        ::std::string const&                      id,
        ::Editor::Settings::ThemeSettingsColorKey key,
        ::ScriptModuleMinecraft::ScriptRGBA       newColor
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSettingsTheme> bindScript();

    MCNAPI static ::Scripting::EnumBindingBuilder<::std::string, ::Editor::Settings::ThemeSettingsColorKey>
    bindScriptPropsEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
