#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStack;
class SaveContext;
class TextObjectRoot;
struct ActorUniqueID;
// clang-format on

class ChalkboardBlockActor : public ::BlockActor {
public:
    // ChalkboardBlockActor inner types declare
    // clang-format off
    struct CachedLineData;
    struct CachedMessageData;
    struct ChalkboardFinder;
    // clang-format on

    // ChalkboardBlockActor inner types define
    struct CachedLineData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk8d4369;
        ::ll::UntypedStorage<4, 4>  mUnk580c82;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&);
        CachedLineData(CachedLineData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI CachedLineData();

        MCAPI ~CachedLineData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct CachedMessageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 640> mUnk163d4e;
        ::ll::UntypedStorage<4, 4>   mUnkb8325f;
        ::ll::UntypedStorage<8, 32>  mUnk422df7;
        ::ll::UntypedStorage<8, 8>   mUnk3044e8;
        ::ll::UntypedStorage<1, 1>   mUnk16bfc2;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&);
        CachedMessageData(CachedMessageData const&);
        CachedMessageData();
    };

    struct ChalkboardFinder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk1a5700;
        ::ll::UntypedStorage<8, 8> mUnk92f7b0;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChalkboardFinder& operator=(ChalkboardFinder const&);
        ChalkboardFinder(ChalkboardFinder const&);
        ChalkboardFinder();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool confirmedBroken(::ChalkboardBlockActor& compare, ::BlockSource& region) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              mText;
    ::ll::TypedStorage<8, 32, ::std::string>                              mTextObjectString;
    ::ll::TypedStorage<8, 32, ::TextObjectRoot>                           mTextObjectMessage;
    ::ll::TypedStorage<8, 696, ::ChalkboardBlockActor::CachedMessageData> mCachedMessage;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                  mSiblings;
    ::ll::TypedStorage<1, 1, bool>                                        mShouldPersistFormatting;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mBasePos;
    ::ll::TypedStorage<1, 1, ::ChalkboardSize>                            mSize;
    ::ll::TypedStorage<1, 1, bool>                                        mIsOnGround;
    ::ll::TypedStorage<1, 1, bool>                                        mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                                        mInitialized;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mOwner;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChalkboardBlockActor() /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 28
    virtual ::std::string getImmersiveReaderText(::BlockSource& region) /*override*/;

    // vIndex: 38
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const /*override*/;

    // vIndex: 40
    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChalkboardBlockActor(::BlockPos const& pos);

    MCAPI ::std::vector<::BlockPos> const& _getSiblings(::BlockSource& region);

    MCAPI ::std::string const& getText() const;

    MCAPI void setText(::std::string const& text);

    MCAPI void validate(::BlockSource& region);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ChalkboardBlockActor::ChalkboardFinder _findChalkboard(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static ::std::vector<::BlockPos>
    calculateAllBlocks(::BlockPos const& basePos, ::ChalkboardSize boardSize, int dir);

    MCAPI static bool canCreateChalkboard(
        ::Actor*                   creator,
        ::BlockSource&             region,
        ::BlockPos const&          basePos,
        ::ChalkboardSize           boardSize,
        uchar                      face,
        int                        dir,
        ::std::vector<::BlockPos>& occupiedBlocks,
        ::ItemStack const&         instance,
        bool                       generateParticles
    );

    MCAPI static ::ChalkboardBlockActor* convertFromEntity(::BlockSource& region, ::CompoundTag const& tag);

    MCAPI static ::ChalkboardBlockActor* createChalkboard(
        ::Actor*           creator,
        ::BlockSource&     region,
        ::BlockPos const&  basePos,
        ::ChalkboardSize   boardSize,
        uchar              face,
        int                dir,
        bool               isOnGround,
        ::ItemStack const& instance,
        ::std::string      text
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void $tick(::BlockSource& region);

    MCAPI ::std::string $getImmersiveReaderText(::BlockSource& region);

    MCAPI ::std::vector<::std::string> $getUgcStrings(::CompoundTag const& tag) const;

    MCAPI void $setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
