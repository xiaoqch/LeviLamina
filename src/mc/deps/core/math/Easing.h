#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/EasingType.h"

class Easing {
public:
    // prevent constructor by default
    Easing& operator=(Easing const&);
    Easing(Easing const&);
    Easing();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::function<float(float, float, float)> getEasingFunc(::EasingType easingType);

    MCAPI static ::std::string const& getStringFromEasingType(::EasingType easingType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::function<float(float, float, float)>>& mEasingFuncs();
    // NOLINTEND
};
