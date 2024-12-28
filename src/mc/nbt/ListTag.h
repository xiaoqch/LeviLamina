#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IDataInput;
class IDataOutput;
class PrintStream;
// clang-format on

class ListTag : public ::Tag {
public:
    // ListTag inner types define
    using List = ::std::vector<::std::unique_ptr<::Tag>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Tag>>> mList;
    ::ll::TypedStorage<1, 1, ::Tag::Type>                              mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ListTag& operator=(ListTag const&);
    ListTag(ListTag const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void write(::IDataOutput& dos) const /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    // vIndex: 5
    virtual ::Tag::Type getId() const /*override*/;

    // vIndex: 4
    virtual ::std::string toString() const /*override*/;

    // vIndex: 7
    virtual void print(::std::string const& prefix_, ::PrintStream& out) const /*override*/;

    // vIndex: 9
    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    // vIndex: 10
    virtual uint64 hash() const /*override*/;

    // vIndex: 6
    virtual bool equals(::Tag const& rhs) const /*override*/;

    // vIndex: 1
    virtual void deleteChildren() /*override*/;

    // vIndex: 0
    virtual ~ListTag() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ListTag();

    MCAPI void add(::std::unique_ptr<::Tag> tag);

    MCAPI ::std::unique_ptr<::ListTag> copyList() const;

    MCAPI void forEachCompoundTag(::std::function<void(::CompoundTag const&)> func) const;

    MCAPI ::Tag* get(int index) const;

    MCAPI ::CompoundTag const* getCompound(uint64) const;

    MCAPI ::CompoundTag* getCompound(uint64 index);

    MCAPI double getDouble(int index) const;

    MCAPI float getFloat(int index) const;

    MCAPI int getInt(int index) const;

    MCAPI int64 getInt64(int index) const;

    MCAPI ::std::string const& getString(int index) const;

    MCAPI int size() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCAPI ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCAPI void $print(::std::string const& prefix_, ::PrintStream& out) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI uint64 $hash() const;

    MCAPI bool $equals(::Tag const& rhs) const;

    MCAPI void $deleteChildren();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
