#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct AllowOffHandItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AllowOffHandItemComponent {
public:
    // prevent constructor by default
    AllowOffHandItemComponent& operator=(AllowOffHandItemComponent const&);
    AllowOffHandItemComponent(AllowOffHandItemComponent const&);
    AllowOffHandItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AllowOffHandItemComponent() = default;

    // vIndex: 1
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2
    virtual void writeSettings();

    // vIndex: 3
    virtual bool isNetworkComponent() const;

    // vIndex: 4
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const& ctx) const;

    // vIndex: 5
    virtual bool initializeFromNetwork(class CompoundTag const& tag, struct cereal::ReflectionCtx const& ctx);

    // vIndex: 6
    virtual void handleVersionBasedInitialization(class SemVersion const& originalJsonVersion);

    // vIndex: 7
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI explicit AllowOffHandItemComponent(struct Puv::v1_20_50::AllowOffHandItemComponent component);

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
