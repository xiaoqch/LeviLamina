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

class ActorEnumPropertyTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk81d065;
    ::ll::UntypedStorage<8, 48> mUnk12ddfb;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEnumPropertyTest& operator=(ActorEnumPropertyTest const&);
    ActorEnumPropertyTest(ActorEnumPropertyTest const&);
    ActorEnumPropertyTest();

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

    // vIndex: 5
    virtual ::Json::Value _serializeDomain() const /*override*/;

    // vIndex: 0
    virtual ~ActorEnumPropertyTest() /*override*/;
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

    MCAPI ::Json::Value $_serializeDomain() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
