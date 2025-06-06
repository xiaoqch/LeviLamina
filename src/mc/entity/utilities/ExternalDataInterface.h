#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct AdventureSettings;
// clang-format on

struct ExternalDataInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExternalDataInterface() = default;

    // vIndex: 1
    virtual bool isInWorldAndNotShowingAnyMenuScreens() const = 0;

    // vIndex: 2
    virtual ::AdventureSettings const& getAdventureSettings() const = 0;

    // vIndex: 3
    virtual ::ClientPlayMode getPlayMode() const = 0;

    // vIndex: 4
    virtual ::InputMode getInputMode() const = 0;

    // vIndex: 5
    virtual ::GameType getDefaultGameType() const = 0;

    // vIndex: 6
    virtual float getSmoothRotationSpeed() const = 0;

    // vIndex: 7
    virtual ::Vec3 getWorldSpaceVRRealityGazeDir() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
