#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleLifetimeEventsComponent : public ::SharedTypes::v1_20_80::ParticleEffectComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3d9181;
    ::ll::UntypedStorage<8, 24> mUnk9bd981;
    ::ll::UntypedStorage<8, 72> mUnkce77c3;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleLifetimeEventsComponent& operator=(ParticleLifetimeEventsComponent const&);
    ParticleLifetimeEventsComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::HashedString const& getIdentifier() const /*override*/;

    // vIndex: 0
    virtual ~ParticleLifetimeEventsComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleLifetimeEventsComponent(::SharedTypes::v1_20_80::ParticleLifetimeEventsComponent const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleLifetimeEventsComponent&
    operator=(::SharedTypes::v1_20_80::ParticleLifetimeEventsComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleLifetimeEventsComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::HashedString const& $getIdentifier() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
