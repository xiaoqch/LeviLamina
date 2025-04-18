#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PointLightShadowConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 36> mUnk6988ad;
    ::ll::UntypedStorage<4, 36> mUnk3b39bf;
    ::ll::UntypedStorage<4, 36> mUnkcd5c62;
    ::ll::UntypedStorage<4, 36> mUnka7f63c;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightShadowConfiguration& operator=(PointLightShadowConfiguration const&);
    PointLightShadowConfiguration(PointLightShadowConfiguration const&);
    PointLightShadowConfiguration();
};
