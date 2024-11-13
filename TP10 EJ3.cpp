#include <iostream>
using namespace std;

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, exponente;
    cout << "Ingrese la base y el exponente: ";
    cin >> base >> exponente;
    cout << "Resultado: " << potencia(base, exponente) << endl;
    return 0;
}

