#pragma once
enum moving { up, down, left, right, forward, backwards };

class Ball
{

private:
    float pos_x;
    float pos_y;
    float pos_z;
    float radius;
    float vel_x=0.001;
    float vel_y=0.001;
    float vel_z=0.001;
    moving mov_z = moving::forward;
    moving mov_x = moving::left;
    moving mov_y = moving::up;
public:


	Ball() {
		pos_x = 0.1;
		pos_y = 0.1;
		pos_z = 0.1;
		radius = 1.0;

	};
    Ball(float r ) {
        pos_x = 0.1;
        pos_y = 0.1;
        pos_z = 0.1;
        radius = r;

    };

    void change_direction(moving mov);
    float getPosX() const { return pos_x; }
    float getPosY() const { return pos_y; }
    float getPosZ() const { return pos_z; }
    float getRadius() const { return radius; }
    void reset() {
        pos_x = 0.1;
        pos_y = 0.1;
        pos_z = 0.1;
        vel_x = 0.001;
        vel_y = 0.001;
        vel_z = 0.001;
        moving mov_x = moving::left;
        moving mov_y = moving::up;
        moving mov_z = moving::forward;

    }

    void move()
    {
        if (mov_z == moving::forward) {
            pos_z += vel_z;        
        }
        if (mov_z == moving::backwards) {
            pos_z -= vel_z;
        }
        if (mov_y == moving::up) {
            pos_y += vel_y;
        }
        if (mov_y == moving::down) {
            pos_y -= vel_y;
        }
        if (mov_x == moving::right) {
            pos_x += vel_x;
        }
        if (mov_x == moving::left) {
            pos_x -= vel_x;
        }
        
    }

};
