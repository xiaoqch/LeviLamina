#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LodestoneBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    LodestoneBlock& operator=(LodestoneBlock const&);
    LodestoneBlock(LodestoneBlock const&);
    LodestoneBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LodestoneBlock() = default;

    MCAPI LodestoneBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI static class LodestoneBlockActor* getBlockActor(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
