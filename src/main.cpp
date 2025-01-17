/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       cloud                                                     */
/*    Created:      1/10/2025, 1:51:37 PM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include "driving_functions.h"
#include "robot_config.h"
#include "autonomous.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen

// define your global instances of motors and other devices here


int main() {
    left_drive.spinFor(fwd, 1, rev, false);
    right_drive.spinFor(fwd, 1, rev, true);
    turn_to_angle(90,20, 2);

    while(1) {
        arcade_drive();
        hook_start();
        vex::task::sleep(10);
    }
}