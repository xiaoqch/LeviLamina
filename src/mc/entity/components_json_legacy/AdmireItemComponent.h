#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class WeakEntityRef;
struct Tick;
// clang-format on

class AdmireItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>             mIsAdmiring;
    ::ll::TypedStorage<8, 152, ::ItemStack>    mAdmireItem;
    ::ll::TypedStorage<8, 8, ::Tick>           mAdmireUntil;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mItemOwnerRef;
    // NOLINTEND

public:
    // prevent constructor by default
    AdmireItemComponent& operator=(AdmireItemComponent const&);
    AdmireItemComponent(AdmireItemComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AdmireItemComponent(::AdmireItemComponent&&);

    MCAPI void onAdmireItemPickedUp(::Actor const& owner, ::ItemStack const& item, ::Actor* itemOwner);

    MCAPI ::AdmireItemComponent& operator=(::AdmireItemComponent&&);

    MCAPI void stopAdmiring();

    MCAPI ~AdmireItemComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AdmireItemComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
