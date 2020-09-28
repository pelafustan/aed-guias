#include <iostream>
#include "Coordinate.h"
using namespace std;

/* Builders */
Coordinate::Coordinate() {
    float x = 0;
    float y = 0;
    float z = 0;
}

Coordinate::Coordinate(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

/* setters & getters */
float Coordinate::get_x() {
    return this->x;
}

float Coordinate::get_y() {
    return this->y;
}

float Coordinate::get_z() {
    return this->z;
}

void Coordinate::set_x(float x) {
    this->x = x;
}

void Coordinate::set_y(float y) {
    this->y = y;
}

void Coordinate::set_z(float z) {
    this->z = z;
}