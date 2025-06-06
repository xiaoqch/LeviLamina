#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CSHA1 {
public:
    // CSHA1 inner types define
    enum class REPORT_TYPE : int {
        Hex      = 0,
        Digit    = 1,
        HexShort = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 20> mUnk4559ac;
    ::ll::UntypedStorage<4, 8>  mUnk7068c2;
    ::ll::UntypedStorage<4, 4>  mUnkd21733;
    ::ll::UntypedStorage<1, 64> mUnkb78ee3;
    ::ll::UntypedStorage<1, 20> mUnk3ec896;
    ::ll::UntypedStorage<4, 12> mUnk3bbf1b;
    ::ll::UntypedStorage<1, 64> mUnk1f7c52;
    ::ll::UntypedStorage<8, 8>  mUnkb04bdb;
    // NOLINTEND

public:
    // prevent constructor by default
    CSHA1& operator=(CSHA1 const&);
    CSHA1(CSHA1 const&);
    CSHA1();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Final();

    MCNAPI void Transform(uint* pState, uchar const* pBuffer);

    MCNAPI ~CSHA1();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
