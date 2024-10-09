#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangVariableIndex.h"

class MolangVariable {
public:
    // prevent constructor by default
    MolangVariable& operator=(MolangVariable const&);
    MolangVariable(MolangVariable const&);
    MolangVariable();

public:
    // NOLINTBEGIN
    MCAPI MolangVariable(::MolangVariableIndex index, class HashedString name, struct MolangScriptArg value);

    MCAPI ~MolangVariable();

    MCAPI static ::MolangVariableIndex getVariableIndex(class HashedString const& name);

    MCAPI static ::MolangVariableIndex getVariableIndex(uint64 nameHash);

    MCAPI static ::MolangVariableIndex getVariableIndex(uint64 nameHash, char const* name, bool allowSpecialCharacters);

    MCAPI static class HashedString const& getVariableName(::MolangVariableIndex index);

    MCAPI static void initVariableMaps();

    MCAPI static void processWaterMark();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::recursive_mutex& _getMolangVariableIndexLock();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool mHasSetWatermark;

    MCAPI static std::unordered_map<::MolangVariableIndex, class HashedString> mIndexToVariableNameMap;

    MCAPI static std::unordered_map<::MolangVariableIndex, class HashedString> mIndexToVariableNameMap_LowWaterMark;

    MCAPI static std::unordered_map<uint64, ::MolangVariableIndex> mVariableNameToIndexMap;

    MCAPI static std::unordered_map<uint64, ::MolangVariableIndex> mVariableNameToIndexMap_LowWaterMark;

    // NOLINTEND
};