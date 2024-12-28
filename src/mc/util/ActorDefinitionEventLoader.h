#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionEvent;
class ActorEventResponseFactory;
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class ActorDefinitionEventLoader {
public:
    // prevent constructor by default
    ActorDefinitionEventLoader& operator=(ActorDefinitionEventLoader const&);
    ActorDefinitionEventLoader(ActorDefinitionEventLoader const&);
    ActorDefinitionEventLoader();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _loadCollection(
        ::ActorDefinitionEvent&            defEvent,
        ::Json::Value const&               collection,
        ::MinEngineVersion const&          minEngineVersion,
        ::ActorEventResponseFactory const* responseFactory,
        ::JsonBetaState                    useBetaFeatures
    );

    MCAPI static ::ActorDefinitionEvent _loadEvent(
        ::Json::Value&                     root,
        ::MinEngineVersion const&          minEngineVersion,
        ::ActorEventResponseFactory const* responseFactory,
        ::JsonBetaState                    useBetaFeatures
    );

    MCAPI static ::ActorDefinitionEvent loadEvent(
        ::Json::Value                      root,
        ::MinEngineVersion const&          minEngineVersion,
        ::SemVersion const&                formatVersion,
        ::ActorEventResponseFactory const* responseFactory,
        ::JsonBetaState                    useBetaFeatures
    );
    // NOLINTEND
};
