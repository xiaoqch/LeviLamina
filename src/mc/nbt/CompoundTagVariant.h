#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ByteArrayTag;
class ByteTag;
class CompoundTag;
class DoubleTag;
class EndTag;
class FloatTag;
class Int64Tag;
class IntArrayTag;
class IntTag;
class ListTag;
class ShortTag;
class StringTag;
class Tag;
// clang-format on

class CompoundTagVariant {
public:
    // CompoundTagVariant inner types define
    using Variant = ::std::variant<
        ::EndTag,
        ::ByteTag,
        ::ShortTag,
        ::IntTag,
        ::Int64Tag,
        ::FloatTag,
        ::DoubleTag,
        ::ByteArrayTag,
        ::StringTag,
        ::ListTag,
        ::CompoundTag,
        ::IntArrayTag>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::EndTag,
            ::ByteTag,
            ::ShortTag,
            ::IntTag,
            ::Int64Tag,
            ::FloatTag,
            ::DoubleTag,
            ::ByteArrayTag,
            ::StringTag,
            ::ListTag,
            ::CompoundTag,
            ::IntArrayTag>>
        mTagStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagVariant& operator=(CompoundTagVariant const&);
    CompoundTagVariant(CompoundTagVariant const&);
    CompoundTagVariant();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Tag& emplace(::Tag&& tag);

    MCAPI ~CompoundTagVariant();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
