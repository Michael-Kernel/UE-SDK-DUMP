#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeadMountedDisplay

#include "Basic.hpp"


namespace SDK
{

// Enum HeadMountedDisplay.ESpectatorScreenMode
// NumValues: 0x0009
enum class ESpectatorScreenMode : uint8
{
	Disabled                                 = 0,
	SingleEyeLetterboxed                     = 1,
	Undistorted                              = 2,
	Distorted                                = 3,
	SingleEye                                = 4,
	SingleEyeCroppedToFill                   = 5,
	Texture                                  = 6,
	TexturePlusEye                           = 7,
	ESpectatorScreenMode_MAX                 = 8,
};

// Enum HeadMountedDisplay.EHMDWornState
// NumValues: 0x0004
enum class EHMDWornState : uint8
{
	Unknown                                  = 0,
	Worn                                     = 1,
	NotWorn                                  = 2,
	EHMDWornState_MAX                        = 3,
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
// NumValues: 0x0003
enum class EHMDTrackingOrigin : uint8
{
	Floor                                    = 0,
	Eye                                      = 1,
	EHMDTrackingOrigin_MAX                   = 2,
};

// Enum HeadMountedDisplay.EOrientPositionSelector
// NumValues: 0x0004
enum class EOrientPositionSelector : uint8
{
	Orientation                              = 0,
	Position                                 = 1,
	OrientationAndPosition                   = 2,
	EOrientPositionSelector_MAX              = 3,
};

// Enum HeadMountedDisplay.ETrackingStatus
// NumValues: 0x0004
enum class ETrackingStatus : uint8
{
	NotTracked                               = 0,
	InertialOnly                             = 1,
	Tracked                                  = 2,
	ETrackingStatus_MAX                      = 3,
};

}

