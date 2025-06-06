#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RaidTriggerDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkfea261;
    // NOLINTEND

public:
    // prevent constructor by default
    RaidTriggerDefinition& operator=(RaidTriggerDefinition const&);
    RaidTriggerDefinition(RaidTriggerDefinition const&);
    RaidTriggerDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RaidTriggerDefinition>>& root
    );
    // NOLINTEND
};
