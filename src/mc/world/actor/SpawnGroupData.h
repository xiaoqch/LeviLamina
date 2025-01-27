#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobSpawnRules;
// clang-format on

class SpawnGroupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobSpawnRules>> mSpawnRules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnGroupData(::std::string const& identifier, ::MobSpawnRules& spawnRules);

    MCAPI void addSpawnRules(::MobSpawnRules& spawnRules);

    MCFOLD ::std::string const& getIdentifier() const;

    MCFOLD ::std::vector<::MobSpawnRules> const& getSpawnRules() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& identifier, ::MobSpawnRules& spawnRules);
    // NOLINTEND
};
