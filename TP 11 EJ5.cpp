#include <iostream>
#include <vector>
using namespace std;

void promedioAlturas() {
    vector<float> alturas(5);
    cout << "Ingrese las alturas de 5 personas: ";
    for (int i = 0; i < 5; i++) {
        cin >> alturas[i];
    }
    float suma = 0;
    for (float altura : alturas) {
        suma += altura;
    }
    float promedio = suma / alturas.size();
    int masAltos = 0, masBajos = 0;
    for (float altura : alturas) {
        if (altura > promedio) masAltos++;
        else if (altura < promedio) masBajos++;
    }
    cout << "Promedio de alturas: " << promedio << endl;
    cout << "Personas más altas que el promedio: " << masAltos << endl;
    cout << "Personas más bajas que el promedio: " << masBajos << endl;
}

int main() {
    promedioAlturas();
    return 0;
}

