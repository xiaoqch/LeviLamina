#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/util/Factory.h"
#include "mc/world/response/EventResponse.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct EventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DieEventResponse : public ::EventResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk71bc29;
    // NOLINTEND

public:
    // prevent constructor by default
    DieEventResponse& operator=(DieEventResponse const&);
    DieEventResponse(DieEventResponse const&);
    DieEventResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 2
    virtual void executeAction(::RenderParams& params) const /*override*/;

    // vIndex: 3
    virtual void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>& schema,
        ::Factory<::EventResponse> const&                                                                       factory
    ) const /*override*/;

    // vIndex: 0
    virtual ~DieEventResponse() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCAPI void $executeAction(::RenderParams& params) const;

    MCAPI void $buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>& schema,
        ::Factory<::EventResponse> const&                                                                       factory
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
