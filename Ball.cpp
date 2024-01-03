#include "Ball.h"


void Ball::change_direction(moving mov)
{
    switch (mov) {
    case moving::left:
        mov_x = moving::left;
        break;
    case moving::right:
        mov_x = moving::right;
        break;
    case moving::down:
        mov_y = moving::down;
        break;
    case moving::up:
        mov_y = moving::up;
        break;
    case moving::backwards:
        mov_z = moving::backwards;
        break;
    case moving::forward:
        mov_z = moving::forward;
        break;
    }

    move();
}



