#pragma once
class Ball
{

private:
    float pos_x;
    float pos_y;
    float pos_z;
    float radius;
    float vel_x;
    float vel_y;
    float vel_z;
public:
	Ball() {
		pos_x = 0;
		pos_y = 0;
		pos_z = 0;
		radius = 1;
		vel_x = 0.001;
		vel_y = 0.001;
		vel_z = 0.001;
	};

    void change_direction(bool change_vel_x, bool change_vel_y, bool change_vel_z);
    float getPosX() const { return pos_x; }
    float getPosY() const { return pos_y; }
    float getPosZ() const { return pos_z; }
    float getRadius() const { return radius; }
    void move()
    {
        pos_x += vel_x;
        pos_y += vel_y;
        pos_z += vel_z;
    }
    void change_speed(float change_vel_x, float change_vel_y, float change_vel_z);

};
