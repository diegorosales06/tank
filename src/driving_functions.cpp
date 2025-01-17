#include "robot_config.h"
#include "vex.h"
#include "driving_functions.h"


int left_speed = 0;
int right_speed = 0;

void arcade_drive(){
    //right_speed = Controller.Axis3.position() + Controller.Axis1.position();
    //left_speed = Controller.Axis3.position() - Controller.Axis1.position();
    right_speed = Controller.Axis3.position();
    left_speed = Controller.Axis2.position();

    left_drive.spin(forward,left_speed,percent);
    right_drive.spin(forward,right_speed,percent);


}

void hook_start(){
    if(Controller.ButtonR1.pressing())
        hook.set(true);
    else
        hook.set(false);

}
 