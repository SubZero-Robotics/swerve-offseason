// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems here

  // Configure the button bindings
  ConfigureButtonBindings();

  // ooh SetDefaultCommand how *fancy*
  m_drive.SetDefaultCommand(DefaultDrive(
    &m_drive,
    [this] { return Xbox.GetLeftY(); },
    [this] { return Xbox.GetLeftX(); },
    // I dunno if this is the right thing to do here, I want the angle (I think in radians?) but I'm using X because GetRightZ doesn't exist?
    [this] { return Xbox.GetRightX(); })
    );
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here
  // This function is empty... Just like my love life
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return &m_autonomousCommand;
}