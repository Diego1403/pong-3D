#include "Ball.h"
void Ball::change_direction(bool change_vel_x, bool change_vel_y, bool change_vel_z)
{

	if (change_vel_x) {
		vel_x *= -1;
	}
	if (change_vel_y) {
		vel_y *= -1;
	}
	if (change_vel_z) {
		vel_z *= -1;
	}
}

void Ball::change_speed(float change_vel_x = 0, float change_vel_y = 0, float change_vel_z = 0)
{


}