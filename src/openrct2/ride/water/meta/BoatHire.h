/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../../RideData.h"
#include "../../ShopItem.h"
#include "../../Track.h"

// clang-format off
constexpr const RideTypeDescriptor BoatHireRTD =
{
    SET_FIELD(AlternateType, RIDE_TYPE_NULL),
    SET_FIELD(Category, RIDE_CATEGORY_WATER),
    SET_FIELD(EnabledTrackPieces, (1ULL << TRACK_STRAIGHT) | (1ULL << TRACK_STATION_END) | (1ULL << TRACK_CURVE_VERY_SMALL)),
    SET_FIELD(ExtraTrackPieces, 0),
    SET_FIELD(CoveredTrackPieces, 0),
    SET_FIELD(StartTrackPiece, TRACK_ELEM_END_STATION),
    SET_FIELD(TrackPaintFunction, get_track_paint_function_boat_hire),
    SET_FIELD(Flags, RIDE_TYPE_FLAG_HAS_TRACK_COLOUR_MAIN | RIDE_TYPE_FLAG_HAS_TRACK_COLOUR_SUPPORTS | RIDE_TYPE_FLAG_TRACK_MUST_BE_ON_WATER |
                     RIDE_TYPE_FLAG_NO_TEST_MODE | RIDE_TYPE_FLAG_HAS_LOAD_OPTIONS | RIDE_TYPE_FLAG_HAS_VEHICLE_COLOURS | RIDE_TYPE_FLAG_CHECK_FOR_STALLING |
                     RIDE_TYPE_FLAG_HAS_TRACK | RIDE_TYPE_FLAG_SUPPORTS_MULTIPLE_TRACK_COLOUR | RIDE_TYPE_FLAG_ALLOW_MUSIC | RIDE_TYPE_FLAG_HAS_ENTRANCE_EXIT),
    SET_FIELD(RideModes, (1ULL << RIDE_MODE_BOAT_HIRE)),
    SET_FIELD(DefaultMode, RIDE_MODE_BOAT_HIRE),
    SET_FIELD(OperatingSettings, { 0, 0, 0, 0, 0, 0 }),
    SET_FIELD(Naming, { STR_RIDE_NAME_BOAT_HIRE, STR_RIDE_DESCRIPTION_BOAT_HIRE }),
    SET_FIELD(NameConvention, { RIDE_COMPONENT_TYPE_BOAT, RIDE_COMPONENT_TYPE_DOCKING_PLATFORM, RIDE_COMPONENT_TYPE_DOCKING_PLATFORM }),
    SET_FIELD(EnumName, nameof(RIDE_TYPE_BOAT_HIRE)),
    SET_FIELD(AvailableBreakdowns, (1 << BREAKDOWN_VEHICLE_MALFUNCTION)),
    SET_FIELD(Heights, { 255, 16, 0, 3, }),
    SET_FIELD(MaxMass, 255),
    SET_FIELD(LiftData, { SoundId::Null, 5, 5 }),
    SET_FIELD(RatingsCalculationFunction, ride_ratings_calculate_boat_hire),
    SET_FIELD(RatingsMultipliers, { 70, 6, 0 }),
    SET_FIELD(UpkeepCosts, { 50, 1, 0, 4, 0, 0 }),
    SET_FIELD(BuildCosts, { 55, 5, 5, }),
    SET_FIELD(DefaultPrices, { 10, 0 }),
    SET_FIELD(DefaultMusic, MUSIC_STYLE_WATER),
    SET_FIELD(PhotoItem, SHOP_ITEM_PHOTO),
    SET_FIELD(BonusValue, 40),
    SET_FIELD(ColourPresets, TRACK_COLOUR_PRESETS(
        { COLOUR_MOSS_GREEN, COLOUR_MOSS_GREEN, COLOUR_WHITE },
        { COLOUR_BLACK, COLOUR_BLACK, COLOUR_DARK_GREEN },
        { COLOUR_LIGHT_BROWN, COLOUR_LIGHT_BROWN, COLOUR_YELLOW },
        { COLOUR_BORDEAUX_RED, COLOUR_BORDEAUX_RED, COLOUR_BORDEAUX_RED },
    )),
    SET_FIELD(ColourKey, RideColourKey::Ride),
};
// clang-format on
