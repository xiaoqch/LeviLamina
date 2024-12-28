#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Json { class Value; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class Event {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk34803d;
    ::ll::UntypedStorage<8, 32> mUnk8db555;
    ::ll::UntypedStorage<1, 1>  mUnk69fed0;
    ::ll::UntypedStorage<4, 4>  mUnk4d8050;
    ::ll::UntypedStorage<8, 8>  mUnked1ee5;
    ::ll::UntypedStorage<8, 8>  mUnk406331;
    ::ll::UntypedStorage<4, 4>  mUnk510604;
    ::ll::UntypedStorage<8, 64> mUnk5e4cad;
    ::ll::UntypedStorage<8, 64> mUnk95b6af;
    ::ll::UntypedStorage<8, 64> mUnkfae032;
    ::ll::UntypedStorage<1, 1>  mUnkab0bd8;
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Event(::Social::Events::Event const&);

    MCAPI Event(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );

    MCAPI Event(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                  appPlatform,
        int                                                               eventTags
    );

    MCAPI void addMeasurement(::Social::Events::Measurement const& measurement);

    MCAPI void addProperty(::Social::Events::Property const& property);

    MCAPI bool hasEventTags(int tags) const;

    MCAPI bool hasMeasurements() const;

    MCAPI bool passesFilter(int tagsToExclude) const;

    MCAPI ::Json::Value propertiesAsJsonValue() const;

    MCAPI void updateMeasurements(::Social::Events::Event const& event);

    MCAPI ~Event();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Social::Events::Event const&);

    MCAPI void* $ctor(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        int                                                               eventTags
    );

    MCAPI void* $ctor(
        uint                                                              id,
        ::std::string const&                                              eventName,
        ::std::unordered_map<::std::string, ::Social::Events::Property>&& commonProperties,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&                  appPlatform,
        int                                                               eventTags
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
