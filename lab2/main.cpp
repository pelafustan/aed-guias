#include "Stack.h"

int main() {
    int size;
    int n;

    cout << "Ingrese el tamaño máximo de la pila: ";
    cin >> size;

    cout << "¿Cuántos elementos va a ingresar a la pila? ";
    cin >> n;

    Stack stack = Stack(size);

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el contenido de la entrada " << i+1 << ": ";
        int entry;
        cin >> entry;
        stack.push(entry);
    }

    cout << " ---------- " << endl;

    stack.print();

    cout << " ---------- " << endl;

    stack.pop();

    cout << " ---------- " << endl;

    stack.print();

    cout << " ---------- " << endl;

    return 0;

}
