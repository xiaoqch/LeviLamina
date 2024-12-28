#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectScore : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk71dadc;
    ::ll::UntypedStorage<8, 32> mUnk8e694b;
    // NOLINTEND

public:
    // prevent constructor by default
    TextObjectScore& operator=(TextObjectScore const&);
    TextObjectScore(TextObjectScore const&);
    TextObjectScore();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string asString() const /*override*/;

    // vIndex: 2
    virtual ::Json::Value asJsonValue() const /*override*/;

    // vIndex: 3
    virtual ::Json::Value resolve(::ResolveData const& resolveData) const /*override*/;

    // vIndex: 0
    virtual ~TextObjectScore() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& RAW_TEXT_SCORE_KEY();

    MCAPI static ::std::string const& RAW_TEXT_SCORE_NAME_KEY();

    MCAPI static ::std::string const& RAW_TEXT_SCORE_OBJECTIVE_KEY();

    MCAPI static ::std::string const& RAW_TEXT_SCORE_STAR();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $asString() const;

    MCAPI ::Json::Value $asJsonValue() const;

    MCAPI ::Json::Value $resolve(::ResolveData const& resolveData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
