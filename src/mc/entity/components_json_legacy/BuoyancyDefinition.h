#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BuoyancyComponent;
class EntityContext;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BuoyancyDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf70154;
    ::ll::UntypedStorage<4, 4>  mUnke0ec57;
    ::ll::UntypedStorage<4, 4>  mUnk1771dd;
    ::ll::UntypedStorage<4, 4>  mUnkc2daf3;
    ::ll::UntypedStorage<1, 1>  mUnk8581e4;
    ::ll::UntypedStorage<1, 1>  mUnkcf84b1;
    ::ll::UntypedStorage<8, 24> mUnkfa99bb;
    ::ll::UntypedStorage<8, 16> mUnkad6396;
    // NOLINTEND

public:
    // prevent constructor by default
    BuoyancyDefinition& operator=(BuoyancyDefinition const&);
    BuoyancyDefinition(BuoyancyDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BuoyancyDefinition();

    MCAPI void _addLiquidBlockDescriptor(::BlockDescriptor const& liquidBlockDescriptor);

    MCAPI ::Json::Value _serialize() const;

    MCAPI void initialize(::EntityContext& entity, ::BuoyancyComponent& component) const;

    MCAPI void uninitialize(::EntityContext& entity, ::BuoyancyComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BuoyancyDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
