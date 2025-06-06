#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FamilyTypeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcc400e;
    // NOLINTEND

public:
    // prevent constructor by default
    FamilyTypeDefinition& operator=(FamilyTypeDefinition const&);
    FamilyTypeDefinition(FamilyTypeDefinition const&);
    FamilyTypeDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addFamilyName(::std::string const& name);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FamilyTypeDefinition>>& root
    );
    // NOLINTEND
};
