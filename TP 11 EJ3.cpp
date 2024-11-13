#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void manipularVector(vector<int>& vec) {
    // Duplicar cada elemento
    for (int i = 0; i < vec.size(); i++) {
        vec[i] *= 2;
    }
    cout << "Vector despu�s de duplicar elementos: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // Insertar un nuevo elemento en una posici�n elegida por el usuario
    int nuevoElemento, posicion;
    cout << "Ingrese el nuevo elemento a insertar: ";
    cin >> nuevoElemento;
    cout << "Ingrese la posici�n para insertar el elemento: ";
    cin >> posicion;
    if (posicion >= 0 && posicion <= vec.size()) {
        vec.insert(vec.begin() + posicion, nuevoElemento);
        cout << "Vector despu�s de la inserci�n: ";
        for (int val : vec) {
            cout << val << " ";
        }
        cout << endl;
    } else {
        cout << "Posici�n no v�lida." << endl;
    }

    // Eliminar todos los elementos de valor cero
    vec.erase(remove(vec.begin(), vec.end(), 0), vec.end());
    cout << "Vector despu�s de eliminar elementos cero: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {1, 2, 0, 4, 0};
    manipularVector(vec);
    return 0;
}

