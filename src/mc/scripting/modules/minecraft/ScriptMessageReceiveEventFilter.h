#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft::EventFilters { struct ScriptMessageReceiveEventFilterData; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptMessageReceiveEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke1af0d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageReceiveEventFilter& operator=(ScriptMessageReceiveEventFilter const&);
    ScriptMessageReceiveEventFilter(ScriptMessageReceiveEventFilter const&);
    ScriptMessageReceiveEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void process();

    MCAPI bool shouldAllow(::ScriptModuleMinecraft::EventFilters::ScriptMessageReceiveEventFilterData const& data);

    MCAPI ~ScriptMessageReceiveEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<
        ::ScriptModuleMinecraft::EventFilters::ScriptMessageReceiveEventFilter>
    bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
