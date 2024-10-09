#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class DragonTakeoffGoal : public ::Goal {
public:
    // prevent constructor by default
    DragonTakeoffGoal& operator=(DragonTakeoffGoal const&);
    DragonTakeoffGoal(DragonTakeoffGoal const&);
    DragonTakeoffGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonTakeoffGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit DragonTakeoffGoal(class EnderDragon& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _findNewTarget();

    // NOLINTEND
};
