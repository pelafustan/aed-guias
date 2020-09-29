#include <iostream>
#include <list>
#include "Protein.h"
using namespace std;

/* Builders */
Protein::Protein() {
    string name = "\0";
    string id = "\0";
    list <Chain> chains;
}

Protein::Protein(string name, string id, list <Chain> chains) {
    this->name = name;
    this->id = id;
    this->chains = chains;
}

/* setters & getters */
string Protein::get_name() {
    return this->name;
}

string Protein::get_id() {
    return this->id;
}

list <Chain> Protein::get_chains() {
    return this->chains;
}

void Protein::set_name(string name) {
    this->name = name;
}

void Protein::set_id(string id) {
    this->id = id;
}

void Protein::add_chain(Chain chain) {
    this->chains.push_back(chain);
}