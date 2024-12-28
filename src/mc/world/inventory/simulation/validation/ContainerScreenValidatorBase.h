#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerScreenValidation;
class ContainerValidationCommitObject;
class ItemStack;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
// clang-format on

class ContainerScreenValidatorBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk4ceace;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenValidatorBase& operator=(ContainerScreenValidatorBase const&);
    ContainerScreenValidatorBase(ContainerScreenValidatorBase const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerScreenValidatorBase();

    // vIndex: 1
    virtual ::std::shared_ptr<::ContainerValidationCommitObject>
    postCommitItemRemoved(::ContainerEnumName const, int const, ::ItemStack const&);

    // vIndex: 2
    virtual bool isCraftingImplemented();

    // vIndex: 3
    virtual ::ContainerValidationCraftResult getCraftResult(
        ::ContainerScreenContext const&,
        ::ContainerScreenValidation&,
        ::std::unique_ptr<::ContainerValidationCraftInputs>,
        uchar const
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerScreenValidatorBase();
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ContainerValidationCommitObject>
    $postCommitItemRemoved(::ContainerEnumName const, int const, ::ItemStack const&);

    MCAPI bool $isCraftingImplemented();

    MCAPI ::ContainerValidationCraftResult $getCraftResult(
        ::ContainerScreenContext const&,
        ::ContainerScreenValidation&,
        ::std::unique_ptr<::ContainerValidationCraftInputs>,
        uchar const
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
