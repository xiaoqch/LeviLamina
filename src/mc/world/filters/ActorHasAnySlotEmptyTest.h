#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterContext;
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class ActorHasAnySlotEmptyTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6e0e86;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHasAnySlotEmptyTest& operator=(ActorHasAnySlotEmptyTest const&);
    ActorHasAnySlotEmptyTest(ActorHasAnySlotEmptyTest const&);
    ActorHasAnySlotEmptyTest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;

    // vIndex: 2
    virtual bool evaluate(::FilterContext const& context) const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getName() const /*override*/;

    // vIndex: 6
    virtual ::Json::Value _serializeValue() const /*override*/;

    // vIndex: 0
    virtual ~ActorHasAnySlotEmptyTest() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);

    MCAPI bool $evaluate(::FilterContext const& context) const;

    MCAPI ::std::string_view $getName() const;

    MCAPI ::Json::Value $_serializeValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
