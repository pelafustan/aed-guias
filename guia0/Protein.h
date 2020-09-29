#ifndef PROTEIN_H
#define PROTEIN_H

#include <iostream>
#include <list>
#include "Chain.h"
using namespace std;

class Protein {
    private:
        string name;
        string id;
        list <Chain> chains;

    public:
        /* Builders */
        Protein();
        Protein(string name, string id, list <Chain> chains);

        /* setters & getters */
        string get_name();
        string get_id();
        list <Chain> get_chains();
        void set_name(string name);
        void set_id(string id);
        void add_chain(Chain chain);
};
#endif