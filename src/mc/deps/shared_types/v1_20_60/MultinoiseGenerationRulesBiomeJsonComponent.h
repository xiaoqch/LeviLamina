#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct MultinoiseGenerationRulesBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk1c9d30;
    ::ll::UntypedStorage<4, 8> mUnk587482;
    ::ll::UntypedStorage<4, 8> mUnkedb2f1;
    ::ll::UntypedStorage<4, 8> mUnk44ab52;
    ::ll::UntypedStorage<4, 8> mUnke73b56;
    // NOLINTEND

public:
    // prevent constructor by default
    MultinoiseGenerationRulesBiomeJsonComponent& operator=(MultinoiseGenerationRulesBiomeJsonComponent const&);
    MultinoiseGenerationRulesBiomeJsonComponent(MultinoiseGenerationRulesBiomeJsonComponent const&);
    MultinoiseGenerationRulesBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultinoiseGenerationRulesBiomeJsonComponent() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
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