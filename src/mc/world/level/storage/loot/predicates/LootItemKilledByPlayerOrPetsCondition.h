#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class LootTableContext;
class Random;
// clang-format on

class LootItemKilledByPlayerOrPetsCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemKilledByPlayerOrPetsCondition& operator=(LootItemKilledByPlayerOrPetsCondition const&);
    LootItemKilledByPlayerOrPetsCondition(LootItemKilledByPlayerOrPetsCondition const&);
    LootItemKilledByPlayerOrPetsCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemKilledByPlayerOrPetsCondition() /*override*/;

    // vIndex: 1
    virtual bool applies(::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $applies(::Random& random, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
