/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2020 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <AHRS.h>

#include <frc/SPI.h>
#include <frc/TimedRobot.h>

class Robot : public frc::TimedRobot {
 private:
  AHRS navx{ frc::SPI::Port::kMXP };
};
