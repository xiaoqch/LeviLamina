#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/GameEventType.h"

class GameEventMapping {
public:
    // prevent constructor by default
    GameEventMapping& operator=(GameEventMapping const&) = delete;
    GameEventMapping(GameEventMapping const&)            = delete;
    GameEventMapping()                                   = delete;

public:
    // NOLINTBEGIN
    // symbol:
    // ?nameToEvent@GameEventMapping@@SAAEBVGameEvent@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class GameEvent const& nameToEvent(std::string const&);

    // symbol: ?typeToEvent@GameEventMapping@@SAAEBVGameEvent@@W4GameEventType@GameEventConfig@@@Z
    MCAPI static class GameEvent const& typeToEvent(::GameEventConfig::GameEventType);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mGameEventPairs@GameEventMapping@@0V?$vector@UGameEventPair@@V?$allocator@UGameEventPair@@@std@@@std@@B
    MCAPI static std::vector<struct GameEventPair> const mGameEventPairs;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $mGameEventPairs() { return mGameEventPairs; }

    // NOLINTEND
};