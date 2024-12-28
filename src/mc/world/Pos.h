#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Pos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // prevent constructor by default
    Pos& operator=(Pos const&);
    Pos(Pos const&);
    Pos();
};
