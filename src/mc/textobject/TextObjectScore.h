#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectScore : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectScore& operator=(TextObjectScore const&);
    TextObjectScore(TextObjectScore const&);
    TextObjectScore();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextObjectScore() = default;

    // vIndex: 1
    virtual std::string asString() const;

    // vIndex: 2
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3
    virtual class Json::Value resolve(struct ResolveData const& resolveData) const;

    MCAPI static std::string const RAW_TEXT_SCORE_KEY;

    MCAPI static std::string const RAW_TEXT_SCORE_NAME_KEY;

    MCAPI static std::string const RAW_TEXT_SCORE_OBJECTIVE_KEY;

    MCAPI static std::string const RAW_TEXT_SCORE_STAR;

    // NOLINTEND
};
