#ifndef INTARRAY_H
#define INTARRAY_H

#include <iostream>
using namespace std;

class IntArray {
    public:
        /* Constructors */
        IntArray();
        IntArray(int n);
        /* Indexing */

        int& operator[] (int index);

        /* Mutators */
        void add(int value);

        /* Accessors */
        int getSize();
        int getNrOfEntries();

        /* Compute the sum of the squared elements */
        int squares();

    private:
        int size;
        int nrEntries;
        int *arr;
};

#endif
