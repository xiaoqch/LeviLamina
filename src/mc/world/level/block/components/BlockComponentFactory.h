#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class IPackLoadContext;
class SemVersion;
struct BlockComponentDescription;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockComponentFactory : public ::Factory<::BlockComponentDescription>, public ::IPackLoadScoped {
public:
    // BlockComponentFactory inner types declare
    // clang-format off
    struct ComponentMetadata;
    // clang-format on

    // BlockComponentFactory inner types define
    struct ComponentMetadata {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnka06669;
        ::ll::UntypedStorage<8, 24> mUnkfbf74d;
        ::ll::UntypedStorage<8, 32> mUnk6beadb;
        ::ll::UntypedStorage<8, 24> mUnk445a76;
        ::ll::UntypedStorage<8, 64> mUnk9ed2fe;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentMetadata& operator=(ComponentMetadata const&);
        ComponentMetadata(ComponentMetadata const&);
        ComponentMetadata();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::BlockComponentFactory::ComponentMetadata& operator=(::BlockComponentFactory::ComponentMetadata&&);

        MCAPI ~ComponentMetadata();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb8c428;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentFactory(BlockComponentFactory const&);
    BlockComponentFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockComponentFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _buildBlockComponentsSchema();

    MCAPI void _registerLegacyDescriptions(::IPackLoadContext const* packLoadContext);

    MCAPI ::BlockComponentFactory& operator=(::BlockComponentFactory const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::BlockComponentFactory::ComponentMetadata>*
    contextInstanceIfAvailable(::cereal::ReflectionCtx const& ctx);

    MCAPI static void registerAllCerealDescriptions(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
