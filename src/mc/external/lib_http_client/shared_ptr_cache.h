#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace xbox::httpclient {

struct shared_ptr_cache {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void remove(void*);
    // NOLINTEND
};

} // namespace xbox::httpclient
