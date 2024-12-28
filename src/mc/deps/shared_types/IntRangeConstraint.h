#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicNumericConstraint.h"
#include "mc/deps/cereal/Constraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class IntRangeConstraint : public ::cereal::Constraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk55f7e7;
    ::ll::UntypedStorage<8, 48> mUnkb85a04;
    // NOLINTEND

public:
    // prevent constructor by default
    IntRangeConstraint& operator=(IntRangeConstraint const&);
    IntRangeConstraint(IntRangeConstraint const&);
    IntRangeConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 0
    virtual void doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const /*override*/;

    // vIndex: 1
    virtual ~IntRangeConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::IntRangeConstraint& constraintMax(::cereal::BasicNumericConstraint<double> constraint);

    MCAPI ::SharedTypes::IntRangeConstraint& constraintMin(::cereal::BasicNumericConstraint<double> constraint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription $description() const;

    MCAPI void $doValidate(::entt::meta_any const& any, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
