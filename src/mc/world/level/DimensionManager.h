#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/IDimensionManagerConnector.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class DimensionDefinitionGroup;
class IDimensionFactory;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on
class IDimensionFactory;

class DimensionManager : public ::IDimensionManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DimensionType, ::OwnerPtr<::Dimension>>> mDimensions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> const>       mDimensionFactory;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Dimension&), ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
                                                                           mOnNewDimensionCreatedPublisher;
    ::ll::TypedStorage<8, 24, ::std::optional<::DimensionDefinitionGroup>> mDimensionDefinitions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~DimensionManager() = default;

    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::Dimension&)>& getOnNewDimensionCreatedConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DimensionManager(
        ::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory,
        ::std::optional<::DimensionDefinitionGroup>        dimensionDefinitions
    );

    MCAPI void forEachDimension(::std::function<bool(::Dimension&)> callback);

    MCAPI ::WeakRef<::Dimension> getOrCreateDimension(::DimensionType dimensionType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IDimensionFactory> dimensionFactory,
        ::std::optional<::DimensionDefinitionGroup>        dimensionDefinitions
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::PubSub::Connector<void(::Dimension&)>& $getOnNewDimensionCreatedConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
