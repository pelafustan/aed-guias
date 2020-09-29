#ifndef CHAIN_H
#define CHAIN_H

#include <iostream>
#include <list>
#include "Aminoacid.h"
using namespace std;

class Chain {
    private:
        string chain_id;
        list <Aminoacid> aminoacids;

    public:
        /* Builders */
        Chain();
        Chain(string chain_id, list <Aminoacid> aminoacids);

        /* setters & getters */
        string get_chain_id();
        list <Aminoacid> get_aminoacids();
        void set_chain_id(string chain_id);
        void add_aminoacid(Aminoacid aminoacid);
};
#endif