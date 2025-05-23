#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackIOProvider;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
namespace Core { class Path; }
// clang-format on

class DirectoryPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk821c35;
    ::ll::UntypedStorage<1, 1>  mUnk414a1e;
    ::ll::UntypedStorage<1, 1>  mUnk8650d4;
    ::ll::UntypedStorage<1, 1>  mUnk22bc19;
    ::ll::UntypedStorage<1, 1>  mUnk38aea0;
    ::ll::UntypedStorage<1, 1>  mUnkd4f382;
    ::ll::UntypedStorage<8, 24> mUnke75300;
    ::ll::UntypedStorage<8, 64> mUnkd51275;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackSource& operator=(DirectoryPackSource const&);
    DirectoryPackSource(DirectoryPackSource const&);
    DirectoryPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DirectoryPackSource() /*override*/;

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)> callback) const /*override*/;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)> callback) /*override*/;

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const /*override*/;

    // vIndex: 4
    virtual ::PackType getPackType() const /*override*/;

    // vIndex: 5
    virtual ::PackSourceReport load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DirectoryPackSource(
        ::Core::Path const&                  path,
        ::PackType                           packType,
        ::PackOrigin                         packOrigin,
        bool                                 isDeveloperDirectory,
        ::std::unique_ptr<::IPackIOProvider> io
    );

    MCNAPI void addPack(::std::unique_ptr<::Pack>&& pack);

    MCNAPI void deleteAllPacksAndReset();

    MCNAPI bool removePack(::Core::Path const& fullPath);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void checkAndRemoveIncompletePacks(::Core::Path const& path);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::Path const&                  path,
        ::PackType                           packType,
        ::PackOrigin                         packOrigin,
        bool                                 isDeveloperDirectory,
        ::std::unique_ptr<::IPackIOProvider> io
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $forEachPackConst(::std::function<void(::Pack const&)> callback) const;

    MCNAPI void $forEachPack(::std::function<void(::Pack&)> callback);

    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceReport $load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
