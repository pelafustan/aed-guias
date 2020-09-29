#include <iostream>
#include <list>
#include "Chain.h"
using namespace std;

/* Builders */
Chain::Chain() {
    string chain_id = "\0";
    list <Aminoacid> aminoacids;
}

Chain::Chain(string chain_id, list <Aminoacid> aminoacids) {
    this->chain_id = chain_id;
    this->aminoacids = aminoacids;
}

/* setters & getters */
string Chain::get_chain_id() {
    return this->chain_id;
}

list <Aminoacid> Chain::get_aminoacids() {
    return this->aminoacids;
}

void Chain::set_chain_id(string chain_id) {
    this->chain_id = chain_id;
}

void Chain::add_aminoacid(Aminoacid aminoacid) {
    this->aminoacids.push_back(aminoacid);
}