#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::detail {

template <typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct StorageTypeHelper {
public:
    // prevent constructor by default
    StorageTypeHelper& operator=(StorageTypeHelper const&);
    StorageTypeHelper(StorageTypeHelper const&);
    StorageTypeHelper();
};

} // namespace br::detail