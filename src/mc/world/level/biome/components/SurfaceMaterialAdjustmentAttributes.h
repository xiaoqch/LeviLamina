#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class ExpressionNode;
class PerlinSimplexNoise;
class RenderParams;
struct SurfaceMaterialAdjustmentEvaluated;
// clang-format on

struct SurfaceMaterialAdjustmentAttributes : public ::BiomeComponentBase {
public:
    // SurfaceMaterialAdjustmentAttributes inner types declare
    // clang-format off
    struct Element;
    // clang-format on

    // SurfaceMaterialAdjustmentAttributes inner types define
    struct Element {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>   mUnk4988e6;
        ::ll::UntypedStorage<4, 4>   mUnk419993;
        ::ll::UntypedStorage<4, 4>   mUnk5e506c;
        ::ll::UntypedStorage<8, 216> mUnk7701b7;
        ::ll::UntypedStorage<8, 216> mUnk610e0d;
        ::ll::UntypedStorage<8, 936> mUnkff1866;
        // NOLINTEND

    public:
        // prevent constructor by default
        Element& operator=(Element const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Element();

        MCNAPI Element(::SurfaceMaterialAdjustmentAttributes::Element const&);

        MCNAPI ~Element();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::SurfaceMaterialAdjustmentAttributes::Element const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SurfaceMaterialAdjustmentAttributes::Element>> mAdjustments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceMaterialAdjustmentAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SurfaceMaterialAdjustmentEvaluated evaluateAdjustments(
        ::RenderParams&                        molangParams,
        ::gsl::not_null<::PerlinSimplexNoise*> noise,
        ::BlockPos const&                      pos,
        int                                    heightMax,
        int                                    heightMin
    ) const;

    MCNAPI void parseExpressionNodeFloat(
        ::CompoundTag const& tag,
        ::std::string const& tagName,
        ::std::string const& tagNameType,
        ::ExpressionNode&    node,
        float                defaultValue
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
