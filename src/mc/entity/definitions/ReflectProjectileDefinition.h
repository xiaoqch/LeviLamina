#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ReflectProjectileDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk77b87e;
    ::ll::UntypedStorage<8, 216> mUnk5fa002;
    ::ll::UntypedStorage<8, 216> mUnkafaef4;
    ::ll::UntypedStorage<8, 24>  mUnk9caa5a;
    ::ll::UntypedStorage<8, 32>  mUnkd8b3bd;
    // NOLINTEND

public:
    // prevent constructor by default
    ReflectProjectileDefinition& operator=(ReflectProjectileDefinition const&);
    ReflectProjectileDefinition(ReflectProjectileDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReflectProjectileDefinition();

    MCNAPI void _addProjectileToReflect(::std::string const& projectileName);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ReflectProjectileDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
