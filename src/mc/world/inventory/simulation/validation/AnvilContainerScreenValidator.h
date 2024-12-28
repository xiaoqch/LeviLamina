#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ContainerScreenValidation;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
// clang-format on

class AnvilContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    AnvilContainerScreenValidator& operator=(AnvilContainerScreenValidator const&);
    AnvilContainerScreenValidator(AnvilContainerScreenValidator const&);
    AnvilContainerScreenValidator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool isCraftingImplemented() /*override*/;

    // vIndex: 3
    virtual ::ContainerValidationCraftResult getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    ) /*override*/;

    // vIndex: 0
    virtual ~AnvilContainerScreenValidator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isCraftingImplemented();

    MCAPI ::ContainerValidationCraftResult $getCraftResult(
        ::ContainerScreenContext const&                     screenContext,
        ::ContainerScreenValidation&                        screenValidation,
        ::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs,
        uchar const                                         numCrafts
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
