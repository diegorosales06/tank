#include "autonomous.h"
#include "robot_config.h"

void turn_to_angle(float target_angle, float speed, float AcceptableError){
    float angular_error = 0;
    float current_heading = 0; //angke of robot
    float turn_speed = 0;


    while (true){
        current_heading = inertial_heading.heading();
        angular_error = target_angle - current_heading;

        if (angular_error > 180){
            angular_error = angular_error - 360;

        }

        else if (angular_error < -180){
            angular_error = angular_error + 360;

        }
        
        if (angular_error > 0){
            turn_speed = speed;
        }

        else{
            turn_speed = -speed;

        }

        left_drive.spin(fwd, turn_speed, pct);
        right_drive.spin(reverse, turn_speed, pct);

        if (fabs(angular_error) < AcceptableError){
            break;
        }

    }

}

/// clockwise = positive, cc = negative