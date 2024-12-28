#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSource;
// clang-format on

class IScriptPluginSourceEnumerator {
public:
    // prevent constructor by default
    IScriptPluginSourceEnumerator& operator=(IScriptPluginSourceEnumerator const&);
    IScriptPluginSourceEnumerator(IScriptPluginSourceEnumerator const&);
    IScriptPluginSourceEnumerator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptPluginSourceEnumerator();

    // vIndex: 1
    virtual ::std::vector<::std::shared_ptr<::IScriptPluginSource>> const& getPluginSources() const = 0;
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
};
