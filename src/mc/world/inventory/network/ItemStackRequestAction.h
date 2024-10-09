#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"

class ItemStackRequestAction {
public:
    // prevent constructor by default
    ItemStackRequestAction& operator=(ItemStackRequestAction const&);
    ItemStackRequestAction(ItemStackRequestAction const&);
    ItemStackRequestAction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestAction();

    // vIndex: 1
    virtual class ItemStackRequestActionCraftBase const* getCraftAction() const;

    // vIndex: 2
    virtual int getFilteredStringIndex() const;

    // vIndex: 3
    virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette& blockPalette, bool isClientSide);

    // vIndex: 4
    virtual void _write(class BinaryStream& stream) const = 0;

    // vIndex: 5
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream) = 0;

    MCAPI explicit ItemStackRequestAction(::ItemStackRequestActionType actionType);

    MCAPI ::ItemStackRequestActionType getActionType() const;

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI static std::string const getActionTypeName(::ItemStackRequestActionType type);

    MCAPI static class Bedrock::Result<std::unique_ptr<class ItemStackRequestAction>>
    read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::ItemStackRequestActionType, std::string> const actionTypeMap;

    // NOLINTEND
};
