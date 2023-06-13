#include <iostream>

using namespace std;

int main() {
    int size = 4;

    int matriz[size][size];

    cout << "Ingrese los valores de la matriz:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int sumarFilas[size] = {0};
    int sumarColumnas[size] = {0};

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            sumarFilas[i] += matriz[i][j];
            sumarColumnas[j] += matriz[i][j];
        }
    }

    cout << "La suma de las filas es:" << endl;
    for (int i = 0; i < size; i++) {
        cout << sumarFilas[i] << " ";
    }
    cout << endl;

    cout << "La suma de las columnas es:" << endl;
    for (int i = 0; i < size; i++) {
        cout << sumarColumnas[i] << " ";
    }
    cout << endl;

    return 0;
}
