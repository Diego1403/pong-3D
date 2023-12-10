#include "Ball.h"


void Ball::change_direction(moving mov)
{
    switch (mov) {
    case moving::right:
        mov_x = moving::left;
        break;
    case moving::left:
        mov_x = moving::right;
        break;
    case moving::up:
        mov_y = moving::down;
        break;
    case moving::down:
        mov_y = moving::up;
        break;
    case moving::forward:
        mov_z = moving::backwards;
        break;
    case moving::backwards:
        mov_z = moving::forward;
        break;
    }

    move();
}



void Ball::change_speed(float change_vel_x = 0, float change_vel_y = 0, float change_vel_z = 0)
{


}
