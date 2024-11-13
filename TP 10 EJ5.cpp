#include <iostream>
#include <string>
using namespace std;

float convertirMoneda(float cantidad, string monedaOrigen, string monedaDestino, bool esCompra) {
    float tasaOrigen, tasaDestino;

    // Definir las tasas de cambio
    if (monedaOrigen == "USD") tasaOrigen = esCompra ? 955.5 : 995.5;
    else if (monedaOrigen == "EUR") tasaOrigen = esCompra ? 1059 : 1119;
    else if (monedaOrigen == "BRL") tasaOrigen = esCompra ? 180.5 : 190.5;

    if (monedaDestino == "USD") tasaDestino = esCompra ? 955.5 : 995.5;
    else if (monedaDestino == "EUR") tasaDestino = esCompra ? 1059 : 1119;
    else if (monedaDestino == "BRL") tasaDestino = esCompra ? 180.5 : 190.5;

    // Conversión
    return (cantidad * tasaOrigen) / tasaDestino;
}

int main() {
    float cantidad;
    string monedaOrigen, monedaDestino;
    char tipoCambio;

    cout << "Ingrese la cantidad a convertir: ";
    cin >> cantidad;
    cout << "Ingrese la moneda de origen (USD, EUR, BRL): ";
    cin >> monedaOrigen;
    cout << "Ingrese la moneda de destino (USD, EUR, BRL): ";
    cin >> monedaDestino;
    cout << "¿Desea realizar la conversión usando la tasa de compra (C) o de venta (V)?: ";
    cin >> tipoCambio;

    bool esCompra = (tipoCambio == 'C' || tipoCambio == 'c');
    float resultado = convertirMoneda(cantidad, monedaOrigen, monedaDestino, esCompra);

    cout << "Resultado de la conversión: " << resultado << " " << monedaDestino << endl;
    return 0;
}

