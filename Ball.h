#pragma once
class Ball
{

private:
    float x;
    float y;
    float z;
    float radius;
    float vel_x;
    float vel_y;
    float vel_z;
public:
    void change_direction(bool change_vel_x, bool change_vel_y, bool change_vel_z);
    void move();
    void change_speed(float change_vel_x, float change_vel_y, float change_vel_z);

};