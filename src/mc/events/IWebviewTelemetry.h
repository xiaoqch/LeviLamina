#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/WebviewObserver.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
struct WebviewDownloadInfo;
// clang-format on

class IWebviewTelemetry : public ::WebviewObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3b1452;
    // NOLINTEND

public:
    // prevent constructor by default
    IWebviewTelemetry& operator=(IWebviewTelemetry const&);
    IWebviewTelemetry(IWebviewTelemetry const&);
    IWebviewTelemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void onDownloadBegin(::WebviewDownloadInfo const& downloadInfo) /*override*/;

    // vIndex: 8
    virtual void onDownloadComplete(::WebviewDownloadInfo const& downloadInfo) /*override*/;

    // vIndex: 9
    virtual void onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo) /*override*/;

    // vIndex: 0
    virtual ~IWebviewTelemetry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit IWebviewTelemetry(::IMinecraftEventing const& eventing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftEventing const& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onDownloadBegin(::WebviewDownloadInfo const& downloadInfo);

    MCAPI void $onDownloadComplete(::WebviewDownloadInfo const& downloadInfo);

    MCAPI void $onDownloadCanceled(::WebviewDownloadInfo const& downloadInfo);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
