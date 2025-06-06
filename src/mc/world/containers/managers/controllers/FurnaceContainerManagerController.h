#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class FurnaceContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1cdedc;
    ::ll::UntypedStorage<1, 1>  mUnk5b6721;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceContainerManagerController& operator=(FurnaceContainerManagerController const&);
    FurnaceContainerManagerController(FurnaceContainerManagerController const&);
    FurnaceContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FurnaceContainerManagerController() /*override*/ = default;

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const /*override*/;

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
