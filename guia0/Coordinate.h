#ifndef COORDINATE_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Coordinate {
    private:
        float x;
        float y;
        float z;

    public:
        /* Builders */
        Coordinate ();
        Coordinate (float x ,float y, float z);

        /* setters & getters */
        float get_x();
        float get_y();
        float get_z();
        void set_x(float x);
        void set_y(float y);
        void set_z(float z);
};
#endif