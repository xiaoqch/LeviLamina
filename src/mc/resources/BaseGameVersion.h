#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Json { class Value; }
// clang-format on

class BaseGameVersion {
public:
    // BaseGameVersion inner types declare
    // clang-format off
    struct any_version_constructor;
    // clang-format on

    // BaseGameVersion inner types define
    struct any_version_constructor {
    public:
        // prevent constructor by default
        any_version_constructor& operator=(any_version_constructor const&);
        any_version_constructor(any_version_constructor const&);
        any_version_constructor();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::SemVersion> mSemVersion;
    ::ll::TypedStorage<1, 1, bool>           mNeverCompatible;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseGameVersion();

    MCAPI BaseGameVersion(::BaseGameVersion const& rhs);

    MCAPI BaseGameVersion(ushort major, uint minor, uint patch);

    MCAPI ::std::string const& asString() const;

    MCAPI ushort getMajor() const;

    MCAPI ushort getMinor() const;

    MCAPI ushort getPatch() const;

    MCAPI bool isAnyVersion() const;

    MCAPI bool isCompatibleWith(::BaseGameVersion const& baseGameVersion) const;

    MCAPI bool isNeverCompatible() const;

    MCAPI bool isValid() const;

    MCAPI bool operator!=(::BaseGameVersion const& rhs) const;

    MCAPI bool operator<(::BaseGameVersion const& rhs) const;

    MCAPI bool operator<=(::BaseGameVersion const& rhs) const;

    MCAPI ::BaseGameVersion& operator=(::BaseGameVersion const&);

    MCAPI bool operator==(::BaseGameVersion const& rhs) const;

    MCAPI bool operator>(::BaseGameVersion const& rhs) const;

    MCAPI bool operator>=(::BaseGameVersion const& rhs) const;

    MCAPI ~BaseGameVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SemVersion::MatchType fromJsonArray(::Json::Value const& jsonArray, ::BaseGameVersion& output);

    MCAPI static ::SemVersion::MatchType fromString(::std::string const& source, ::BaseGameVersion& output);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& ANY();

    MCAPI static ::BaseGameVersion const& EMPTY();

    MCAPI static ::BaseGameVersion const& INCOMPATIBLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BaseGameVersion const& rhs);

    MCAPI void* $ctor(ushort major, uint minor, uint patch);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
