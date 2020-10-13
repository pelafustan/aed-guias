#include "Stack.h"

Stack::Stack() {
    size = 1;
    lastEntry = -1;
    full = false;
    empty = true;
    arr = new int[size];
}

Stack::Stack(int size) {
    this->size = size;
    this->lastEntry = -1;
    this->full = false;
    this->empty = true;
    arr = new int[size];
}

void Stack::push(int entry) {
    if(empty) {
        this->empty = false;
        arr[this->lastEntry++] = entry;
    }
    else if(this->lastEntry < (this->size) - 1) {
        arr[this->lastEntry++] = entry;
    }
    else {
        this->full = true;
        throw "Stack Overflow!";
    }
}

int Stack::pop() {
    if (this->lastEntry >= 0) {
        int out = arr[lastEntry];
        this->arr[lastEntry] = {};
        this->lastEntry--;
        this->full = false;
        return out;
    }
    else {
        this->empty = true;
        throw "Stack Underflow";
    }
}

int Stack::top() {
    return this->arr[lastEntry];
}

bool Stack::isEmpty() {
    return this->empty;
}

bool Stack::isFull() {
    return this->full;
}

void Stack::print() {
    for (int i = 0; i <= this->lastEntry; i++) {
        cout << this->arr[i] << endl;
    }
}
