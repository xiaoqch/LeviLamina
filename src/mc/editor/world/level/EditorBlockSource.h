#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/BlockSource.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockPos;
class BlockSourceListener;
struct Bounds;
// clang-format on

class EditorBlockSource : public ::BlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnkd207f9;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockSource& operator=(EditorBlockSource const&);
    EditorBlockSource(EditorBlockSource const&);
    EditorBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorBlockSource() /*override*/;

    // vIndex: 26
    virtual void addListener(::BlockSourceListener&) /*override*/;

    // vIndex: 27
    virtual void removeListener(::BlockSourceListener&) /*override*/;

    // vIndex: 29
    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::Actor const*, ::AABB const&, bool, bool) /*override*/;

    // vIndex: 28
    virtual ::gsl::span<::gsl::not_null<::Actor*>>
    fetchEntities(::ActorType, ::AABB const&, ::Actor const*, ::std::function<bool(::Actor*)>) /*override*/;

    // vIndex: 16
    virtual bool hasChunksAt(::Bounds const&, bool) const /*override*/;

    // vIndex: 15
    virtual bool hasChunksAt(::BlockPos const&, int, bool) const /*override*/;

    // vIndex: 14
    virtual bool hasChunksAt(::AABB const&, bool) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addListener(::BlockSourceListener&);

    MCAPI void $removeListener(::BlockSourceListener&);

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>> $fetchEntities(::Actor const*, ::AABB const&, bool, bool);

    MCAPI ::gsl::span<::gsl::not_null<::Actor*>>
    $fetchEntities(::ActorType, ::AABB const&, ::Actor const*, ::std::function<bool(::Actor*)>);

    MCAPI bool $hasChunksAt(::Bounds const&, bool) const;

    MCAPI bool $hasChunksAt(::BlockPos const&, int, bool) const;

    MCAPI bool $hasChunksAt(::AABB const&, bool) const;
    // NOLINTEND
};
