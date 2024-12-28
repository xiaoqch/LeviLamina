#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct NpcDialogueButton {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk886b6b;
    ::ll::UntypedStorage<8, 24> mUnk575c95;
    ::ll::UntypedStorage<8, 32> mUnkaa680b;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDialogueButton& operator=(NpcDialogueButton const&);
    NpcDialogueButton(NpcDialogueButton const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NpcDialogueButton();

    MCAPI ~NpcDialogueButton();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NpcDialogueButton parse(::Json::Value const& root, ::std::string const& fileName, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
