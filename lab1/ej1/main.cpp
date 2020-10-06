#include <random>
#include <unistd.h>
#include "IntArray.h"
using namespace std;

void print_array(IntArray arr) {
    for (int i = 0; i < arr.getNrOfEntries(); i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    srand(time(NULL));

    int size; // init for array length
    cout << "Ingrese el largo máximo del arreglo: ";
    cin >> size;

    IntArray arr = IntArray(size); // init object of class IntArray

    int nrEntries; // init for number of entries. Number of entries are the number of elements that actually 'live' in the array

    cout << "Ingrese el número de elementos que desea ingresar: ";
    cin >> nrEntries;

    while (nrEntries < 0 || nrEntries > arr.getSize()){
        cout << "Fuera de los límites. Debe ser menor o igual a " << arr.getSize() << ": ";
        cin >> nrEntries;
    }

    int value;

    for (int i = 0; i < nrEntries; i++){
        cout << "Ingrese el elemento para la posición " << i+1 << ": ";
        cin >> value;
        arr.add(value);
    }

    cout << " ---------- " << endl;

    cout << "Capacidad del arreglo: " << arr.getSize() << endl;
    cout << "Cantidad de elementos en el arreglo: " << arr.getNrOfEntries() << endl;

    cout << "Elementos del arreglo:" << endl;

    print_array(arr);

    cout << " ---------- " << endl;

    int sqsum = arr.squares();

    cout << "La suma de los elementos del arreglo al cuadrado es: " << sqsum << endl;

    cout << " ---------- " << endl;


    int rsize = rand() % 41 + 10; // rand between 10 and 50, bounds included

    IntArray arr2 = IntArray(rsize);

    int rNrEntries = rand() % (rsize - 4) + 5; // rand between 5 and rsize

    for (int i = 0; i < rNrEntries; i++) {
        int rvalue = rand() % 15; // rand between 0 and 15
        arr2.add(rvalue);
    }

    cout << "Arreglo aleatorio..." << endl;
    cout << "Capacidad: " << arr2.getSize() << endl;
    cout << "Número de entradas: " << arr2.getNrOfEntries() << endl;
    cout << "Elementos: ";
    for (int i = 0; i < arr2.getNrOfEntries(); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int sum2 = arr2.squares();
    cout << "La suma de los elementos al cuadrado es: " << sum2 << endl;

    return 0;
}
