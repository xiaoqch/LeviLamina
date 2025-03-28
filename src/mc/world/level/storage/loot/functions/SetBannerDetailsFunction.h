#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetBannerDetailsFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke809d9;
    ::ll::UntypedStorage<1, 1>  mUnkd8feda;
    ::ll::UntypedStorage<8, 24> mUnkc9e1fc;
    // NOLINTEND

public:
    // prevent constructor by default
    SetBannerDetailsFunction& operator=(SetBannerDetailsFunction const&);
    SetBannerDetailsFunction(SetBannerDetailsFunction const&);
    SetBannerDetailsFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetBannerDetailsFunction() /*override*/ = default;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _apply(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _parseBannerPattern(::std::vector<::std::pair<uchar, ::ItemColor>>& patternVec, ::Json::Value const& object);

    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
