#include <iostream>
using namespace std;

int mayorDeTres(int a, int b, int c) {
    int mayor = (a > b) ? a : b;
    mayor = (mayor > c) ? mayor : c;
    return mayor;
}

int main() {
    int num1, num2, num3;
    cout << "Ingrese tres n�meros: ";
    cin >> num1 >> num2 >> num3;
    cout << "El mayor de los tres n�meros es: " << mayorDeTres(num1, num2, num3) << endl;
    return 0;
}

