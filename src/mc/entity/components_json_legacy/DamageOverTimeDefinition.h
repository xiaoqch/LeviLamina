#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class DamageOverTimeComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DamageOverTimeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6894f9;
    ::ll::UntypedStorage<4, 4> mUnk82b498;
    // NOLINTEND

public:
    // prevent constructor by default
    DamageOverTimeDefinition& operator=(DamageOverTimeDefinition const&);
    DamageOverTimeDefinition(DamageOverTimeDefinition const&);
    DamageOverTimeDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext&, ::DamageOverTimeComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DamageOverTimeDefinition>>& root
    );
    // NOLINTEND
};
