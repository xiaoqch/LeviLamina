#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/ValueIteratorBase.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class ValueIterator : public ::Json::ValueIteratorBase {
public:
    // ValueIterator inner types define
    using size_t = uint;

    using difference_type = int;

    using reference = ::Json::Value&;

    using pointer = ::Json::Value*;

    using SelfType = ::Json::ValueIterator;

    using value_type = ::Json::Value;

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Json::Value& operator*() const;

    MCNAPI ::Json::ValueIterator& operator++();
    // NOLINTEND
};

} // namespace Json
