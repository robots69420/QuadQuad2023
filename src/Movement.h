#pragma once
#include "../src/robot-config.cpp"

using namespace vex;

int launchState = false;
int liftState = false;
int LiftTravelDistance = 0;

// DO NOT REMOVE MY STUFF
// Launcher things

void launchSpin() {
  launchState = true;
  Launch.setVelocity(200, percent);
  Launch.spin(reverse);
}

void launchStop() {
  Launch.stop();
  launchState = false;
}

void launchToggle() {
  if (launchState) {
    launchStop();
  } else {
    launchSpin();
  }
}

// Lift things

void liftSpin() {
  int liftState = true;
  Lift.spin(reverse);
}

void liftStop() {
  int liftState = false;
  Lift.stop();
}

void liftToggle() {
  if (liftState) {
    liftStop();
  } else {
    liftSpin();
  }
}

// Non-motor functions
void debugInfo() { // God forgive me for what I'm about to do
  Brain.Screen.clearScreen();
  Brain.Screen.print("Debug Info");
  Brain.Screen.newLine();
  Brain.Screen.newLine();
  Brain.Screen.print("Distance Tracking");
  Brain.Screen.newLine();
  Brain.Screen.print("LiftTravelDistance - ");
  Brain.Screen.print(LiftTravelDistance);
  Brain.Screen.newLine();
  Brain.Screen.newLine();
  Brain.Screen.print("Motor States");
  Brain.Screen.newLine();
  Brain.Screen.print("Lift State - ");
  Brain.Screen.print(liftState);
  Brain.Screen.newLine();
  Brain.Screen.print("Launch State - ");
  Brain.Screen.print(launchState);
} // Boilerplate, nooooooooooooooooooooooooooooooooooooo

void backgroundThings() {
  while (true) {
    Brain.Screen.pressed(launchToggle);
    debugInfo();
    wait(1, seconds);
  }
}
