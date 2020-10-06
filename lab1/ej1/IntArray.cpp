#include "IntArray.h"

/* Constructors */
IntArray::IntArray() {
    size = 1;
    nrEntries = 0;
    arr = new int[size];
    arr[0] = {0};
}

IntArray::IntArray(int size) {
    this->size = size;
    this->arr = new int[size];
    this->nrEntries = 0;
}

/* Indexing */
int& IntArray::operator[] (int index) {
    if (index > this->size) {
        throw("Out of bounds!");
    }
    return this->arr[index];
}

/* Size accessor */
int IntArray::getSize() {
    return this->size;
}

/* Number of elements in array accessor */
int IntArray::getNrOfEntries() {
    return this->nrEntries;
}

/* Compute the sum of the squared elements */
int IntArray::squares() {
    int sum = 0;
    for (int i = 0; i < this->nrEntries; i++) {
        sum += this->arr[i] * this->arr[i];
    }
    return sum;
}

void IntArray::add(int value) {
    if (this->nrEntries == 0) {
        this->arr[0] = value;
        this->nrEntries++;
    }
    else if (this->nrEntries < this->size) {
        this->arr[this->nrEntries++] = value;
    }
    else{
        throw("Array at max capacity!");
    }
}
