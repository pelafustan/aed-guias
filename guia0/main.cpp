#include <iostream>
#include "Protein.h"
using namespace std;

list <Atom> create_atoms() {
    int answer = 1; // condición para entrar al while
    string aux = "xyz"; // esto ayudará con el texto en pantalla más abajo

    list <Atom> atoms;
    string at_name;
    int at_number;
    float coord[3];

    while (answer == 1) {
        cout << "Ingrese el nombre del átomo: ";
        cin >> at_name;

        cout << "Ingrese el número del átomo: ";
        cin >> at_number;

        for (int i=0; i<3; i++) {
            cout << "Ingrese la coordenada " << aux[i] << ": ";
            cin >> coord[i];
        }
        atoms.push_back(Atom(at_name, at_number, coord));

        cout << "Para agregar otro átomo ingrese 1, caso contrario 0: ";
        cin >> answer;
    }

    return atoms;
}

list <Aminoacid> create_aminoacids() {
    int answer = 1;

    list <Aminoacid> aminoacids;
    string aa_name;
    int aa_number;

    while (answer == 1) {
        cout << "Ingrese nombre del aminoácido: ";
        cin >> aa_name;

        cout << "Ingrese número del residuo: ";
        cin >> aa_number;

        list <Atom> atoms = create_atoms();

        aminoacids.push_back(Aminoacid(aa_name, aa_number, atoms));

        cout << "Para agregar otro residuo ingrese 1, caso contrario 0: ";
        cin >> answer;
    }

    return aminoacids;
}

list <Chain> create_chains() {
    int answer = 1;

    list <Chain> chains;
    string chain_id;

    while (answer == 1) {
        cout << "Ingrese el identificador de la cadena: ";
        cin >> chain_id;

        list <Aminoacid> aminoacids = create_aminoacids();

        chains.push_back(Chain(chain_id, aminoacids));

        cout << "Para agregar otra cadena ingrese 1, de lo contrario 0: ";
        cin >> answer;
    }

    return chains;
}

list <Protein> create_proteins() {
    int answer = 1;

    string prot_name;
    string prot_id;
    list <Protein> proteins;

    while (answer == 1) {
        cout << "Ingrese nombre de proteína: ";
        cin >> prot_name;

        cout << "Ingrese código de proteína: ";
        cin >> prot_id;

        list <Chain> chains = create_chains();

        proteins.push_back(Protein(prot_name, prot_id, chains);

        cout << "Para agregar otra proteína ingrese 1, de lo contrario 0: ";
        cin >> answer;
    }

    return proteins;
}

void print_proteins(list <Protein> proteins) {
    for (Protein p : proteins) {
        cout << "Nombre proteína: " << p.get_name() << endl;
        cout << "Identificador: " << p.get_id() << endl;

        cout << " ---------------- " << endl;

        cout << "Cadenas" << endl;
        for (Chain ch : p.get_chains()) {
            cout << "Identificador de cadena: " << ch.get_chain_id() << endl;

            cout << "Aminoácidos" << endl;
            for (Aminoacid aa : ch.get_aminoacids()) {
                cout << "Nombre residuo: " << aa.get_name() << endl;
                cout << "Número del residuo: " << aa.get_number() << endl;

                cout << "Átomos" << endl;
                for (Atom at : aa.get_atoms()) {
                    cout << "Nombre átomo: " << at.get_name() << endl;
                    cout << "Número átomo: " << at.get_number() << endl;

                    cout << "Coordenadas" << endl;
                    cout << "Coordenada x: " << at.get_coordinates().get_x() << endl;
                    cout << "Coordenada y: " << at.get_coordinates().get_y() << endl;
                    cout << "Coordenada z: " << at.get_coordinates().get_z() << endl;
                }
            }
        }
    }
}

int main () {
    cout << "Programa para agregar proteínas. Presione enter para continuar..." << endl;
    cin.ignore();

    list <Protein> proteins = create_proteins();

    cout << "Las proteínas ingresadas son: " << endl;

    print_proteins(proteins);

    return 0;
}
