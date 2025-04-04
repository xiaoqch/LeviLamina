#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/events/AggregationEventListener.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
namespace Json { class Value; }
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class OneDSEditorEventListener : public ::Social::Events::AggregationEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk8228d9;
    ::ll::UntypedStorage<8, 8>  mUnkfa9982;
    ::ll::UntypedStorage<8, 8>  mUnk1b321f;
    ::ll::UntypedStorage<8, 24> mUnk534f95;
    ::ll::UntypedStorage<8, 24> mUnkdfe2f1;
    ::ll::UntypedStorage<8, 8>  mUnka936b9;
    ::ll::UntypedStorage<4, 4>  mUnk5e9a8b;
    ::ll::UntypedStorage<8, 32> mUnk1d0f8b;
    ::ll::UntypedStorage<8, 32> mUnkf43964;
    ::ll::UntypedStorage<8, 32> mUnkec1236;
    ::ll::UntypedStorage<8, 32> mUnkceea33;
    ::ll::UntypedStorage<8, 32> mUnk5e2dc9;
    // NOLINTEND

public:
    // prevent constructor by default
    OneDSEditorEventListener& operator=(OneDSEditorEventListener const&);
    OneDSEditorEventListener(OneDSEditorEventListener const&);
    OneDSEditorEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OneDSEditorEventListener() /*override*/;

    // vIndex: 5
    virtual void sendEvent(::Social::Events::Event const& event) /*override*/;

    // vIndex: 3
    virtual int getEventTagsFilter() const /*override*/;

    // vIndex: 6
    virtual void _flushEventQueue() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddPartA(::std::string const& eventName, ::Json::Value& eventBody, int64 eventTimestamp);

    MCAPI void AddPartC(::Social::Events::Event const& event, ::Json::Value& eventBody);

    MCAPI ::std::string BuildCommonSchemaMsg(::Social::Events::Event const& event);

    MCAPI explicit OneDSEditorEventListener(::Core::Path logFileName);

    MCAPI ::std::vector<::std::string> _buildEventPayloads(
        ::std::vector<::Social::Events::Event>                            events,
        ::std::function<void(::std::string const&, ::std::string const&)> onEventSerialized
    );

    MCAPI void
    _handleAsyncResponse(::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Response>> asyncResponse
    );

    MCAPI bool _sendBatch();

    MCAPI void _sendEvents(::std::string const& eventPayload, ::std::string const& endpoint);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& ENDPOINT_IDENTIFIER();

    MCAPI static ::std::string const& EVENT_NAMESPACE();

    MCAPI static ::std::string const& ONEDS_URL();

    MCAPI static ::std::string const& PARTA_IDENTIFIER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path logFileName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $sendEvent(::Social::Events::Event const& event);

    MCFOLD int $getEventTagsFilter() const;

    MCAPI void $_flushEventQueue();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social::Events
