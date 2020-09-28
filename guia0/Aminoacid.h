#ifndef AMINOACID_H
#define AMINOACID_H

#include <iostream>
#include <list>
#include "Atom.h"
using namespace std;

class Aminoacid {
    private:
        string name;
        int number;
        list <Atom> atoms;

    public:
        /* Builders */
        Aminoacid ();
        Aminoacid(string name, int number, list <Atom> atoms);

        /* setters & getters */
        string get_name();
        int get_number();
        list <Atom> get_atoms();
        void set_name(string name);
        void set_number(int number);
        void add_atom(Atom atom);
};
#endif