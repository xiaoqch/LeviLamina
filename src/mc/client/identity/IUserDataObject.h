#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

class IUserDataObject {
public:
    // prevent constructor by default
    IUserDataObject& operator=(IUserDataObject const&);
    IUserDataObject(IUserDataObject const&);
    IUserDataObject();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IUserDataObject();

    // vIndex: 1
    virtual ::std::string const& getObjectName() const = 0;

    // vIndex: 2
    virtual bool fillFromJSON(::Json::Value const&) = 0;

    // vIndex: 3
    virtual ::Json::Value toJSONObject() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social