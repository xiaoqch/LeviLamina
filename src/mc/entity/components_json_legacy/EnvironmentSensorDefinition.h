#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EnvironmentSensorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke28070;
    // NOLINTEND

public:
    // prevent constructor by default
    EnvironmentSensorDefinition& operator=(EnvironmentSensorDefinition const&);
    EnvironmentSensorDefinition(EnvironmentSensorDefinition const&);
    EnvironmentSensorDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addEnvironmentTrigger(::ActorDefinitionTrigger const& trigger);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EnvironmentSensorDefinition>>& root
    );
    // NOLINTEND
};
