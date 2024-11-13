#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    int min, max;
    cout << "Ingrese el rango (mínimo y máximo): ";
    cin >> min >> max;

    srand(time(0));
    cout << "Número aleatorio generado: " << generarAleatorio(min, max) << endl;
    return 0;
}

