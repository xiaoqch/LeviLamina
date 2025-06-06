#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntitySensorComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EntitySensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk57b5ee;
    ::ll::UntypedStorage<1, 1>  mUnk4d0751;
    ::ll::UntypedStorage<8, 64> mUnk55c54d;
    ::ll::UntypedStorage<8, 24> mUnkd3a7f9;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySensorDefinition& operator=(EntitySensorDefinition const&);
    EntitySensorDefinition(EntitySensorDefinition const&);
    EntitySensorDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext& entity, ::EntitySensorComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EntitySensorDefinition>>& root
    );
    // NOLINTEND
};
