#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    if (esPrimo(num))
        cout << num << " es un número primo." << endl;
    else
        cout << num << " no es un número primo." << endl;
    return 0;
}

