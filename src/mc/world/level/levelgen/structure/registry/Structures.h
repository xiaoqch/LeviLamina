#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class IWorldRegistriesProvider;
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace br::worldgen { class StructureRegistry; }
namespace br::worldgen { struct JigsawStructure; }
// clang-format on

namespace br::worldgen {

struct Structures {
public:
    // prevent constructor by default
    Structures& operator=(Structures const&);
    Structures(Structures const&);
    Structures();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bootstrap(
        ::br::worldgen::StructureRegistry& context,
        ::BaseGameVersion const&,
        ::Experiments const&                                                               experiments,
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents> const& jigsawDefinitions,
        ::IWorldRegistriesProvider&                                                        registries
    );

    MCAPI static ::std::shared_ptr<::br::worldgen::JigsawStructure> makeTrailRuinsJigsaw();
    // NOLINTEND
};

} // namespace br::worldgen
