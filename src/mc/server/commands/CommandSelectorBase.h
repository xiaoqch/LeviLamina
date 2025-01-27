#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/server/commands/CommandPosition.h"

// auto generated inclusion list
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"
#include "mc/world/actor/selectors/InvertableFilter.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandIntegerRange;
class CommandOrigin;
class CommandPosition;
class CommandRationalRange;
class HashedString;
class Vec3;
struct ActorDefinitionIdentifier;
struct HasPermissionFilter;
// clang-format on

class CommandSelectorBase {
public:
    // CommandSelectorBase inner types define
    using FilterFunc = ::std::function<bool(::CommandOrigin const&, ::Actor const&)>;

public:
    // member variables
    // NOLINTBEGIN
    int                                                                          mVersion;
    ::CommandSelectionType                                                       mType;
    ::CommandSelectionOrder                                                      mOrder;
    ::std::vector<::InvertableFilter<::std::string>>                             mNameFilters;
    ::std::vector<::InvertableFilter<::ActorDefinitionIdentifier>>               mTypeFilters;
    ::std::vector<::InvertableFilter<::HashedString>>                            mFamilyFilters;
    ::std::vector<::InvertableFilter<::std::string>>                             mTagFilters;
    ::std::vector<::std::function<bool(::CommandOrigin const&, ::Actor const&)>> mFilterChain;
    ::CommandPosition                                                            mPosition;
    ::Vec3                                                                       mBoxDeltas;
    float                                                                        mRadiusMinSqr;
    float                                                                        mRadiusMaxSqr;
    uint64                                                                       mCount;
    bool                                                                         mIncludeDeadPlayers;
    bool                                                                         mIsPositionBound;
    bool                                                                         mDistanceFiltered;
    bool                                                                         mPositionFiltered;
    bool                                                                         mCountFiltered;
    bool                                                                         mHaveDeltas;
    bool                                                                         mForcePlayer;
    bool                                                                         mExcludeAgents;
    bool                                                                         mIsExplicitIdSelector;
    bool                                                                         mForceDimensionFiltering;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandSelectorBase(bool forcePlayer);

    MCAPI void addFamilyFilter(::InvertableFilter<::std::string> const& filter);

    MCAPI void addFilter(::std::function<bool(::CommandOrigin const&, ::Actor const&)> filter);

    MCAPI void addGameModeFilter(::InvertableFilter<::GameType> const& filter);

    MCAPI void addHasItemFilter(
        ::std::string const&                 itemName,
        ::std::optional<int>                 auxValue,
        ::CommandIntegerRange const&         quantity,
        ::SharedTypes::Legacy::EquipmentSlot equipmentSlot,
        ::CommandIntegerRange const&         slot
    );

    MCAPI void addHasPermissionFilters(::std::vector<::HasPermissionFilter> const& filters);

    MCAPI void addHasPropertyFilter(
        ::HashedString const&                                                               propertyName,
        bool                                                                                inverted,
        ::std::optional<::std::variant<::CommandRationalRange, bool, ::std::string>> const& optionalValue
    );

    MCAPI void addLevelFilter(::std::pair<int, int> const& level);

    MCAPI void addNameFilter(::InvertableFilter<::std::string> const& filter);

    MCAPI void addScoreFilter(
        ::std::string const&                                              objName,
        ::CommandIntegerRange const&                                      range,
        ::std::function<int(bool&, ::std::string const&, ::Actor const&)> callback
    );

    MCAPI void addTagFilter(::InvertableFilter<::std::string> const& filter);

    MCAPI void addTypeFilter(::InvertableFilter<::std::string> const& filter);

    MCAPI void addXRotationFilter(::std::pair<float, float> const& xRotation);

    MCAPI void addYRotationFilter(::std::pair<float, float> const& yRotation);

    MCAPI bool compareName(::std::string const& name) const;

    MCAPI bool compile(::CommandOrigin const& origin, ::std::string& error);

    MCAPI bool filter(::CommandOrigin const& origin, ::Actor& actor) const;

    MCAPI ::std::string getName() const;

    MCFOLD ::CommandSelectionOrder getOrder() const;

    MCAPI uint64 getResultCount() const;

    MCAPI bool hasName() const;

    MCAPI bool isExpansionAllowed(::CommandOrigin const& origin) const;

    MCFOLD bool isExplicitIdSelector() const;

    MCAPI bool matchFamily(::Actor const& entity) const;

    MCAPI bool matchName(::Actor const& entity) const;

    MCAPI bool matchTag(::Actor const& entity) const;

    MCAPI bool matchType(::Actor const& entity) const;

    MCAPI ::std::shared_ptr<::std::vector<::Actor*>> newResults(::CommandOrigin const& origin) const;

    MCAPI void setBox(::Vec3 const& deltas);

    MCAPI void setExcludeAgents(bool excludeAgents);

    MCAPI void setExplicitIdSelector(::std::string const& playerName);

    MCAPI void setForceDimensionFiltering(bool forceDimensionFiltering);

    MCAPI void setIncludeDeadPlayers(bool includeDead);

    MCAPI void setOrder(::CommandSelectionOrder order);

    MCAPI void setPosition(::CommandPosition const& position);

    MCAPI void setRadiusMax(float r);

    MCAPI void setRadiusMin(float rm);

    MCAPI void setResultCount(uint64 count, bool setWithSelector);

    MCAPI void setType(::CommandSelectionType type);

    MCFOLD void setVersion(int version);

    MCAPI ~CommandSelectorBase();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 const getFeetPos(int version, ::Actor const& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool forcePlayer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
