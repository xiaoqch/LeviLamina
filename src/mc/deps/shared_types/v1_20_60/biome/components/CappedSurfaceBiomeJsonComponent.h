#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

namespace SharedTypes::v1_20_60 {

struct CappedSurfaceBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk79b593;
    ::ll::UntypedStorage<8, 24>  mUnkd269c3;
    ::ll::UntypedStorage<8, 96>  mUnke9019b;
    ::ll::UntypedStorage<8, 96>  mUnkbca727;
    ::ll::UntypedStorage<8, 104> mUnkd2e248;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CappedSurfaceBiomeJsonComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CappedSurfaceBiomeJsonComponent();

    MCAPI CappedSurfaceBiomeJsonComponent(::SharedTypes::v1_20_60::CappedSurfaceBiomeJsonComponent const&);

    MCAPI ::SharedTypes::v1_20_60::CappedSurfaceBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::CappedSurfaceBiomeJsonComponent const&);

    MCAPI ::SharedTypes::v1_20_60::CappedSurfaceBiomeJsonComponent&
    operator=(::SharedTypes::v1_20_60::CappedSurfaceBiomeJsonComponent&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_20_60::CappedSurfaceBiomeJsonComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
