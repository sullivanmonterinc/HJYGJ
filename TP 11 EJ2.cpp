#include <iostream>
#include <vector>
using namespace std;

void sumaPromedioElementos(vector<int>& vec) {
    int suma = 0;
    for (int i = 0; i < vec.size(); i++) {
        suma += vec[i];
    }
    float promedio = static_cast<float>(suma) / vec.size();
    cout << "Suma: " << suma << ", Promedio: " << promedio << endl;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    sumaPromedioElementos(vec);
    return 0;
}

