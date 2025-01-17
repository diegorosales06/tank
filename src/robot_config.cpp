#include "vex.h"
#include "robot_config.h"

brain Brain;

controller Controller;

motor left_back(PORT1, ratio6_1, true);

motor left_middle(PORT2, ratio6_1, true);

motor left_front(PORT3, ratio6_1, true);


motor right_back(PORT4, ratio6_1, false);

motor right_middle(PORT5, ratio6_1, false);

motor right_front(PORT6, ratio6_1, false);

inertial inertial_heading(PORT7);

motor_group left_drive(left_back,left_middle,left_front);

motor_group right_drive(right_back,right_middle,right_front);

digital_out hook(Brain.ThreeWirePort.A);
