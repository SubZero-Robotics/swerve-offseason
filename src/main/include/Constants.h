/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

namespace DriveConstants {
    // TODO
}

// XboxController enums.  Since the Trigger stuff works on the base Joystick class, not the
// Xbox extension, these are undefined where we want to use them.  So, flat-out copied them 
// here for reference
enum  	Button {
  kBumperLeft = 5, kBumperRight = 6, kStickLeft = 9, kStickRight = 10,
  kA = 1, kB = 2, kX = 3, kY = 4,
  kBack = 7, kStart = 8
};
 
enum  	Axis {
  kLeftX = 0, kRightX = 4, kLeftY = 1, kRightY = 5,
  kLeftTrigger = 2, kRightTrigger = 3
};