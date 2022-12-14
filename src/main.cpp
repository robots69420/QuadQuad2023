/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\landen.sisk                                      */
/*    Created:      Wed Dec 07 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    10, 9           
// Lift                 motor         8               
// Launch               motor         6               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "Movement.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  launchSpin();

  thread bg (backgroundThings);
  bg.join();

  return 0;
}
