#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Tag;
struct EquipmentTableDropChance;
// clang-format on

struct EquipmentTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd17193;
    ::ll::UntypedStorage<8, 24> mUnk5f0555;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipmentTable& operator=(EquipmentTable const&);
    EquipmentTable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EquipmentTable(::EquipmentTable const&);

    MCAPI explicit EquipmentTable(::std::string lootTable);

    MCAPI explicit EquipmentTable(::CompoundTag const& tag);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::EquipmentTableDropChance> _createDropChancesFromTag(::Tag const& tag);

    MCAPI static ::std::unique_ptr<::CompoundTag>
    _createTagFromDropChances(::std::vector<::EquipmentTableDropChance> const& dropChances);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EquipmentTable const&);

    MCAPI void* $ctor(::std::string lootTable);

    MCAPI void* $ctor(::CompoundTag const& tag);
    // NOLINTEND
};
