#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class System {
public:
    // prevent constructor by default
    System& operator=(System const&);
    System(System const&);
    System();
};

} // namespace Social
