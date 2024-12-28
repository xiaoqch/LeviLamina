#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct EntityArmorEquipmentSlotMappingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EntityArmorEquipmentSlotMappingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk40fea0;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityArmorEquipmentSlotMappingDefinition& operator=(EntityArmorEquipmentSlotMappingDefinition const&);
    EntityArmorEquipmentSlotMappingDefinition(EntityArmorEquipmentSlotMappingDefinition const&);
    EntityArmorEquipmentSlotMappingDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _setArmorSlot(::std::string const& slot);

    MCAPI void initialize(::EntityContext& entity, ::EntityArmorEquipmentSlotMappingComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EntityArmorEquipmentSlotMappingDefinition>>& root
    );
    // NOLINTEND
};
