#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/ZipCompressionLevel.h"

namespace Core::ZipUtils {

class ZipSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk3c3d64;
    ::ll::UntypedStorage<1, 1>  mUnkd47ca3;
    ::ll::UntypedStorage<1, 1>  mUnk525460;
    ::ll::UntypedStorage<4, 4>  mUnk6bb064;
    ::ll::UntypedStorage<8, 24> mUnk70535b;
    ::ll::UntypedStorage<8, 32> mUnkb56316;
    ::ll::UntypedStorage<4, 4>  mUnk952208;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipSettings& operator=(ZipSettings const&);
    ZipSettings(ZipSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ZipSettings();

    MCAPI explicit ZipSettings(::Core::ZipUtils::ZipCompressionLevel compression);

    MCAPI ~ZipSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Core::ZipUtils::ZipCompressionLevel compression);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::ZipUtils
