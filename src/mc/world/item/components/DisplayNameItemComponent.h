#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DisplayNameItemComponent : public ::NetworkedItemComponent<::DisplayNameItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDescriptionId;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayNameItemComponent(DisplayNameItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DisplayNameItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DisplayNameItemComponent& operator=(::DisplayNameItemComponent&&);

    MCNAPI ::DisplayNameItemComponent& operator=(::DisplayNameItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
