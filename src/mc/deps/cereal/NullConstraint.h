#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class NullConstraint : public ::cereal::Constraint {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const /*override*/;

    // vIndex: 2
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 1
    virtual ~NullConstraint() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doValidate(::entt::meta_any const&, ::cereal::SerializerContext&) const;

    MCNAPI ::cereal::internal::ConstraintDescription $description() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
