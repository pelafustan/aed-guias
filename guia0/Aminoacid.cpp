#include <iostream>
#include <list>
#include "Aminoacid.h"
using namespace std;

/* Builders */
Aminoacid::Aminoacid() {
    string name = "\0";
    int number = 0;
    list <Atom> atoms;
}

Aminoacid::Aminoacid(string name, int number, list <Atom> atoms) {
    this->name = name;
    this->number = number;
    this->atoms = atoms;
}

/* setters & getters */
string Aminoacid::get_name() {
    return this->name;
}

int Aminoacid::get_number() {
    return this->number;
}

list <Atom> Aminoacid::get_atoms() {
    return this->atoms;
}

void Aminoacid::set_name(string name) {
    this->name = name;
}

void Aminoacid::set_number(int number) {
    this->number = number;
}

void Aminoacid::add_atom(Atom atom) {
    this->atoms.push_back(atom);
}