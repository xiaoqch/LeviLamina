#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class EditorStructureTemplate; }
// clang-format on

namespace Editor::Services {

class ServerStructureServiceProvider {
public:
    // prevent constructor by default
    ServerStructureServiceProvider& operator=(ServerStructureServiceProvider const&);
    ServerStructureServiceProvider(ServerStructureServiceProvider const&);
    ServerStructureServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerStructureServiceProvider();

    // vIndex: 1
    virtual ::std::optional<::Editor::EditorStructureTemplate> loadStructure(::std::string const&) = 0;
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services