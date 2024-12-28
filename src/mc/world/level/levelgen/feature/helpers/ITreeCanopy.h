#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class ITreeCanopy {
public:
    // prevent constructor by default
    ITreeCanopy& operator=(ITreeCanopy const&);
    ITreeCanopy(ITreeCanopy const&);
    ITreeCanopy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITreeCanopy();

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    placeCanopy(::IBlockWorldGenAPI&, ::BlockPos const&, ::Random&, ::RenderParams&, ::TreeHelper::TreeParams const&, ::std::vector<::BlockPos> const&)
        const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
