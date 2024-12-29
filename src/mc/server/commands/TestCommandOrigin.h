#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class NetworkIdentifier;
class Vec2;
class Vec3;
struct CommandOriginData;
// clang-format on

class TestCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk940085;
    ::ll::UntypedStorage<8, 8>   mUnk530d09;
    ::ll::UntypedStorage<8, 160> mUnk8271b8;
    ::ll::UntypedStorage<1, 1>   mUnk6bdb4f;
    // NOLINTEND

public:
    // prevent constructor by default
    TestCommandOrigin& operator=(TestCommandOrigin const&);
    TestCommandOrigin(TestCommandOrigin const&);
    TestCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TestCommandOrigin() /*override*/;

    // vIndex: 1
    virtual ::std::string const& getRequestId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 3
    virtual ::BlockPos getBlockPosition() const /*override*/;

    // vIndex: 4
    virtual ::Vec3 getWorldPosition() const /*override*/;

    // vIndex: 5
    virtual ::std::optional<::Vec2> getRotation() const /*override*/;

    // vIndex: 6
    virtual ::Level* getLevel() const /*override*/;

    // vIndex: 7
    virtual ::Dimension* getDimension() const /*override*/;

    // vIndex: 8
    virtual ::Actor* getEntity() const /*override*/;

    // vIndex: 9
    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;

    // vIndex: 10
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    // vIndex: 17
    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const /*override*/;

    // vIndex: 19
    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;

    // vIndex: 20
    virtual ::SubClientId getSourceSubId() const /*override*/;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const /*override*/;

    // vIndex: 24
    virtual ::CommandOriginData toCommandOriginData() const /*override*/;

    // vIndex: 29
    virtual ::CompoundTag serialize() const /*override*/;

    // vIndex: 30
    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getRequestId() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

    MCAPI ::std::optional<::Vec2> $getRotation() const;

    MCAPI ::Level* $getLevel() const;

    MCAPI ::Dimension* $getDimension() const;

    MCAPI ::Actor* $getEntity() const;

    MCAPI ::CommandPermissionLevel $getPermissionsLevel() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCAPI bool $isSelectorExpansionAllowed() const;

    MCAPI ::NetworkIdentifier const& $getSourceId() const;

    MCAPI ::SubClientId $getSourceSubId() const;

    MCAPI ::CommandOriginType $getOriginType() const;

    MCAPI ::CommandOriginData $toCommandOriginData() const;

    MCAPI ::CompoundTag $serialize() const;

    MCAPI bool $isValid() const;
    // NOLINTEND
};