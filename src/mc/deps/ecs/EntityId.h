#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/ecs/EntityIdTraits.h"

template <>
class entt::entt_traits<EntityId> : public entt::basic_entt_traits<EntityIdTraits> {
public:
    static constexpr entity_type page_size = ENTT_SPARSE_PAGE;
};

class EntityId : public entt::entt_traits<EntityId> {
public:
    entity_type mRawId{entt::null};

    [[nodiscard]] constexpr EntityId() = default;

    [[nodiscard]] constexpr EntityId(entity_type rawId) : mRawId(rawId) {}

    [[nodiscard]] constexpr bool isNull() const { return *this == entt::null; }

    [[nodiscard]] constexpr operator entity_type() const { return mRawId; }
};
