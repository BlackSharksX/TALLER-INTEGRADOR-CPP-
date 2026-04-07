#include <iostream>
using namespace std;

int main() {
    int cantidad;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad de estudiantes debe ser mayor a 0." << endl;
        return 1;
    }

    double* notas = new double[cantidad];

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese la nota del estudiante " << (i + 1) << ": ";
        cin >> notas[i];
    }

    double suma = 0.0;
    double notaMayor = notas[0];
    double notaMenor = notas[0];

    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
        if (notas[i] > notaMayor) {
            notaMayor = notas[i];
        }
        if (notas[i] < notaMenor) {
            notaMenor = notas[i];
        }
    }

    double promedio = suma / cantidad;

    cout << "\n--- Resultados ---" << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Nota mayor: " << notaMayor << endl;
    cout << "Nota menor: " << notaMenor << endl;

    delete[] notas;
    notas = nullptr;

    return 0;
}
