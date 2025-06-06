#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAimAssistCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk56d106;
    ::ll::UntypedStorage<8, 32> mUnk4c8cdd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAimAssistCategory& operator=(ScriptAimAssistCategory const&);
    ScriptAimAssistCategory(ScriptAimAssistCategory const&);
    ScriptAimAssistCategory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const* _getCategoryDefinition() const;

    MCNAPI ::Scripting::Result<::std::unordered_map<::std::string, int>, ::Scripting::Error> getBlockPriorities() const;

    MCNAPI ::Scripting::Result<int, ::Scripting::Error> getDefaultBlockPriority() const;

    MCNAPI ::Scripting::Result<int, ::Scripting::Error> getDefaultEntityPriority() const;

    MCNAPI ::Scripting::Result<::std::unordered_map<::std::string, int>, ::Scripting::Error>
    getEntityPriorities() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptAimAssistCategory&
    operator=(::ScriptModuleMinecraft::ScriptAimAssistCategory&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptAimAssistCategory> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
