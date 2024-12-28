#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptEventSource : int {
    Server      = 0,
    Entity      = 1,
    Block       = 2,
    NpcDialogue = 3,
};

}
