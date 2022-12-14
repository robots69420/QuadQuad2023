# Quad Quad 2022-2023
## Features
- Control motor that launches the discs into the goal
- Control motor that drives the discs up to the launcher
- Debugging screen that refreshes every second
## Robot Information
- 2 Wheel drive train
  - Left motor port - 10
  - Right motor port - 9
  - 18:1 gear ratio
  - FWD
- Disc Launcher
  - Motor name - Launch
  - Port - 6
  - Use in reverse not forwards
  - 18:1 gear ratio
- Disc Lifter
  - Motor name - Lift
  - Port - 8
  - Use in reverse not forwards
  - 18:1 gear ratio
## Functions
- launchSpin() - Start spinning the the launch motor (doesn't stop)
- launchStop() - Stop spinning the launch motor
- launchToggle() - Runs launchSpin() if the motor isn't spinning and runs launchStop if the motor is already spinning
- liftSpin() - Start spinning the lift motor (doesn't stop)
- liftStop() -  Stop spinning the lift motor
- liftToggle() - Runs liftSpin() if the motor isn't spinning and runs launchStop if the motor is already spinning
- debugInfo() - Displays debug information that may or may not serve purpose
- backgroundThings() - Runs checks and displays debug information.  Runs once every second and must be put in a thread
