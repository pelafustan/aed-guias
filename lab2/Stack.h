#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

class Stack {
    private:
        int size; // stack capacity
        int lastEntry; // position of the last element in the stack
        bool full; // is my stack full?
        bool empty; // is my stack empty?
        int *arr; // Array that store the stack entries

    public:
        /* Builders */
        Stack();
        Stack(int size);

        /* add an element to the stack */
        void push(int entry);

        /* remove the last element in the stack */
        int pop();

        /* return the last element in the stack */
        int top();

        /* info about capacity status */
        bool isEmpty();

        /* info about capacity status */
        bool isFull();

        /* print all the stack entries */
        void print();
};
#endif
