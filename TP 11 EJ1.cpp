#include <iostream>
#include <vector>
using namespace std;

void sumaElementos(vector<int>& vec) {
    int suma = 0;
    for (int i = 0; i < vec.size(); i++) {
        suma += vec[i];
    }
    cout << "Suma de todos los elementos: " << suma << endl;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    sumaElementos(vec);
    return 0;
}

