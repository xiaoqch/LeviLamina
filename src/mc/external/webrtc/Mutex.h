#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Mutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk269f64;
    // NOLINTEND

public:
    // prevent constructor by default
    Mutex& operator=(Mutex const&);
    Mutex(Mutex const&);
    Mutex();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Mutex();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
