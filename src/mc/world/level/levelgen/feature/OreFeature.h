#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocal.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
struct ReplaceRule;
// clang-format on

class OreFeature : public ::IFeature {
public:
    // OreFeature inner types declare
    // clang-format off
    struct Helper;
    struct ReplaceRulesAccelerator;
    struct SphereData;
    // clang-format on

    // OreFeature inner types define
    struct ReplaceRulesAccelerator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Block const*, ::std::vector<::BlockLegacy const*>>>>
            mRules;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReplaceRulesAccelerator& operator=(ReplaceRulesAccelerator const&);
        ReplaceRulesAccelerator(ReplaceRulesAccelerator const&);
        ReplaceRulesAccelerator();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void setRules(::std::vector<::ReplaceRule> const& replaceRules);
        // NOLINTEND
    };

    struct SphereData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk586a41;
        ::ll::UntypedStorage<4, 4>  mUnkf3395f;
        ::ll::UntypedStorage<4, 4>  mUnk1118fb;
        // NOLINTEND

    public:
        // prevent constructor by default
        SphereData& operator=(SphereData const&);
        SphereData(SphereData const&);
        SphereData();
    };

    struct Helper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkce24eb;
        ::ll::UntypedStorage<8, 24> mUnkca4f0f;
        ::ll::UntypedStorage<8, 24> mUnkfab9fa;
        ::ll::UntypedStorage<4, 4>  mUnk4fd06d;
        ::ll::UntypedStorage<1, 1>  mUnk73ea1f;
        // NOLINTEND

    public:
        // prevent constructor by default
        Helper& operator=(Helper const&);
        Helper(Helper const&);
        Helper();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mCount;
    ::ll::TypedStorage<4, 4, float>                         mCountf;
    ::ll::TypedStorage<4, 4, float>                         mCountfInv;
    ::ll::TypedStorage<4, 4, float>                         mDiscardChanceOnAirExposure;
    ::ll::TypedStorage<8, 24, ::std::vector<::ReplaceRule>> mReplaceRules;
    ::ll::TypedStorage<
        8,
        168,
        ::Bedrock::Threading::InstancedThreadLocal<::OreFeature::Helper, ::std::allocator<::OreFeature::Helper>>>
        mHelper;
    // NOLINTEND

public:
    // prevent constructor by default
    OreFeature& operator=(OreFeature const&);
    OreFeature(OreFeature const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OreFeature() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OreFeature();

    MCAPI OreFeature(int count, ::std::vector<::ReplaceRule>&& replaceRules);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(int count, ::std::vector<::ReplaceRule>&& replaceRules);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
