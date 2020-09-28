#include <iostream>
#include "Atom.h"
using namespace std;

/* Builders */
Atom::Atom() {
    string name = "\0";
    int number = 0;
    Coordinate coord();
}

Atom::Atom(string name, int number, float coord[3]) {
    this->name = name;
    this->number = number;
    this->coordinates = Coordinate(coord[0], coord[1], coord[2]);
}

/* setters & getters */
string Atom::get_name() {
    return this->name;
}

int Atom::get_number() {
    return this->number;
}

Coordinate Atom::get_coordinates() {
    return this->coordinates;
}

void Atom::set_name(string name) {
    this->name = name;
}

void Atom::set_number(int number) {
    this->number = number;
}

void Atom::set_coordinates(float coord[3]) {
    this->coordinates = Coordinate(coord[0], coord[1], coord[2]);
}