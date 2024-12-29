#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class DtlsTransportInternal {
public:
    // prevent constructor by default
    DtlsTransportInternal& operator=(DtlsTransportInternal const&);
    DtlsTransportInternal(DtlsTransportInternal const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DtlsTransportInternal();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket