#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/reflection/Privilege.h"
#include "mc/external/scripting/runtime/IPayload.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
namespace Scripting { class StringBasedRuntime; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class StringPayload : public ::Scripting::IPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk98b6d3;
    ::ll::UntypedStorage<8, 32> mUnkea571c;
    // NOLINTEND

public:
    // prevent constructor by default
    StringPayload& operator=(StringPayload const&);
    StringPayload(StringPayload const&);
    StringPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StringPayload() /*override*/;

    // vIndex: 1
    virtual ::Scripting::ResultAny runOn(
        ::Scripting::ContextId                  contextId,
        ::Scripting::StringBasedRuntime&        runtime,
        ::std::optional<::Scripting::Privilege> privilege
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StringPayload(::std::string scriptName, ::std::string scriptData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string scriptName, ::std::string scriptData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::ResultAny $runOn(
        ::Scripting::ContextId                  contextId,
        ::Scripting::StringBasedRuntime&        runtime,
        ::std::optional<::Scripting::Privilege> privilege
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
