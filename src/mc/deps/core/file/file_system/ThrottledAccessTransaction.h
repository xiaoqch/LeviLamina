#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class ThrottledAccessTransaction : public ::Core::FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8c51f4;
    ::ll::UntypedStorage<8, 24> mUnk1bfcad;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledAccessTransaction& operator=(ThrottledAccessTransaction const&);
    ThrottledAccessTransaction(ThrottledAccessTransaction const&);
    ThrottledAccessTransaction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThrottledAccessTransaction() /*override*/ = default;

    // vIndex: 4
    virtual bool shouldCommit() /*override*/;

    // vIndex: 5
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode() /*override*/;

    // vIndex: 6
    virtual uint64 getTransactionWriteSizeLimit() const /*override*/;

    // vIndex: 7
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::PathView,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;

    // vIndex: 8
    virtual bool _fileExists(::Core::PathView) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _deleteFile(::Core::PathView) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _getFileSize(::Core::PathView, uint64*) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) /*override*/;

    // vIndex: 12
    virtual ::Core::Result _createEmptyFile(::Core::PathView fileName) /*override*/;

    // vIndex: 16
    virtual ::Core::Result _createOneDirectory(::Core::PathView) /*override*/;

    // vIndex: 17
    virtual ::Core::Result _createOneDirectoryIfNotExisting(::Core::PathView directoryPath) /*override*/;

    // vIndex: 18
    virtual ::Core::Result _createDirectoryRecursively(::Core::PathView directoryPath) /*override*/;

    // vIndex: 19
    virtual bool _directoryExists(::Core::PathView) /*override*/;

    // vIndex: 20
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) /*override*/;

    // vIndex: 21
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath) /*override*/;

    // vIndex: 22
    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::PathView directoryPath) /*override*/;

    // vIndex: 24
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) /*override*/;

    // vIndex: 25
    virtual ::Core::Result
        _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>) /*override*/
        ;

    // vIndex: 31
    virtual bool _fileOrDirectoryExists(::Core::PathView) /*override*/;

    // vIndex: 33
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) /*override*/;

    // vIndex: 34
    virtual ::Core::Result _addIgnoredThrottlePath(::Core::PathView) /*override*/;

    // vIndex: 35
    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::PathView) /*override*/;

    // vIndex: 36
    virtual ::Core::Result
    _createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) /*override*/;

    // vIndex: 44
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, int64*) /*override*/;

    // vIndex: 45
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) /*override*/;

    // vIndex: 46
    virtual ::Core::Result _endTransaction() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
