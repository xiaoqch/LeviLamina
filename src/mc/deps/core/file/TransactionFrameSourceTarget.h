#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class TransactionFrameSourceTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1032> mUnk500b9e;
    ::ll::UntypedStorage<8, 1032> mUnkc7e523;
    ::ll::UntypedStorage<1, 1>    mUnk9d9552;
    ::ll::UntypedStorage<8, 16>   mUnk9e3f64;
    ::ll::UntypedStorage<8, 16>   mUnkf97f14;
    ::ll::UntypedStorage<8, 80>   mUnkad08df;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionFrameSourceTarget& operator=(TransactionFrameSourceTarget const&);
    TransactionFrameSourceTarget(TransactionFrameSourceTarget const&);
    TransactionFrameSourceTarget();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TransactionFrameSourceTarget(::Core::Path const& source, ::Core::Path const& target);

    MCAPI ~TransactionFrameSourceTarget();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result exec(
        ::Core::Path const&                                                    source,
        ::Core::Path const&                                                    target,
        ::std::function<::Core::Result(::Core::TransactionFrameSourceTarget&)> sameStorageAreaFunction,
        ::std::function<::Core::Result(::Core::TransactionFrameSourceTarget&)> differentStorageAreaFunction
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& source, ::Core::Path const& target);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
