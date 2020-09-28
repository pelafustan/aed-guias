#ifndef ATOM_H
#define ATOM_H

#include <iostream>
#include "Coordinate.h"
using namespace std;


class Atom {
    private:
        string name;
        int number;
        Coordinate coordinates;

    public:
        /* Builders */
        Atom ();
        Atom (string name, int number, float coord[3]);

        /* setters & getters */
        string get_name();
        int get_number();
        Coordinate get_coordinates();
        void set_name(string name);
        void set_number(int number);
        void set_coordinates(float coord[3]);
};
#endif