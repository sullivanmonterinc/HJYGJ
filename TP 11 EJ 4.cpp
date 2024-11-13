#include <iostream>
#include <vector>
using namespace std;

void maxMinElementos() {
    vector<int> vec(10);
    cout << "Ingrese 10 números: ";
    for (int i = 0; i < 10; i++) {
        cin >> vec[i];
    }
    int maxVal = vec[0], minVal = vec[0];
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > maxVal) maxVal = vec[i];
        if (vec[i] < minVal) minVal = vec[i];
    }
    cout << "Valor máximo: " << maxVal << ", Valor mínimo: " << minVal << endl;
}

int main() {
    maxMinElementos();
    return 0;
}

