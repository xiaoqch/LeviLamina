#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Writer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Json { class Writer; }
// clang-format on

namespace Json {

class FastWriter : public ::Json::Writer {
public:
    // prevent constructor by default
    FastWriter& operator=(FastWriter const&);
    FastWriter(FastWriter const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FastWriter();

    // vIndex: 1
    virtual std::string write(class Json::Value const& root);

    MCAPI FastWriter();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void writeValue(class Json::Value const& value);

    // NOLINTEND
};

}; // namespace Json
