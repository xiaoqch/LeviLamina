#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Level;
class MinecraftGameTest;
class ServerInstance;
class TestConfig;
// clang-format on

class DedicatedServerGameTestRunner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnk67324a;
    ::ll::UntypedStorage<8, 184> mUnkd3a2d2;
    ::ll::UntypedStorage<8, 64>  mUnk991b8c;
    ::ll::UntypedStorage<8, 64>  mUnkfee08d;
    ::ll::UntypedStorage<1, 1>   mUnka6cf52;
    ::ll::UntypedStorage<8, 8>   mUnka26d55;
    ::ll::UntypedStorage<8, 16>  mUnk8dd78f;
    ::ll::UntypedStorage<8, 8>   mUnkc340eb;
    ::ll::UntypedStorage<8, 8>   mUnk7247f6;
    ::ll::UntypedStorage<1, 1>   mUnke03888;
    ::ll::UntypedStorage<1, 1>   mUnkdb76a0;
    ::ll::UntypedStorage<4, 4>   mUnk1da246;
    // NOLINTEND

public:
    // prevent constructor by default
    DedicatedServerGameTestRunner& operator=(DedicatedServerGameTestRunner const&);
    DedicatedServerGameTestRunner(DedicatedServerGameTestRunner const&);
    DedicatedServerGameTestRunner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DedicatedServerGameTestRunner(
        ::TestConfig const&  testConfig,
        ::MinecraftGameTest& gameTest,
        ::ServerInstance&    server,
        ::Level&             level
    );

    MCAPI ::Dimension* _ensureDimension(::DimensionType dimensionType);

    MCAPI void _finalizeReport();

    MCAPI void _initializeReport();

    MCAPI void _runTestGroup(::std::vector<::std::string> const& tags);

    MCAPI bool _saveReport();

    MCAPI bool _writeFile(::std::string const& fileName, ::std::string const& contents);

    MCAPI bool isDone() const;

    MCAPI void tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::TestConfig const& testConfig, ::MinecraftGameTest& gameTest, ::ServerInstance& server, ::Level& level);
    // NOLINTEND
};
