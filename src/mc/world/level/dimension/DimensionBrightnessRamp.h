#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionBrightnessRamp {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, float[16]> mBrightnessRamp;
    // NOLINTEND

public:
    // prevent constructor by default
    DimensionBrightnessRamp& operator=(DimensionBrightnessRamp const&);
    DimensionBrightnessRamp(DimensionBrightnessRamp const&);
    DimensionBrightnessRamp();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DimensionBrightnessRamp();

    // vIndex: 1
    virtual void buildBrightnessRamp();

    // vIndex: 2
    virtual float getBaseAmbientValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getBrightnessRampValue(int index) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $buildBrightnessRamp();

    MCAPI float $getBaseAmbientValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
