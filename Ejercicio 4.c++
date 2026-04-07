#include <iostream>
using namespace std;

int main() {

    int N;

    // Pedir número
    cout << "Ingrese un numero: ";
    cin >> N;

    // 1. Tabla de multiplicar
    cout << "\nTabla de multiplicar de " << N << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << N << " x " << i << " = " << N * i << endl;
    }

    // 2. Suma acumulada desde 1 hasta N
    int suma = 0;
    for (int i = 1; i <= N; i++) {
        suma += i;
    }

    cout << "\nSuma acumulada desde 1 hasta " << N << " = " << suma << endl;

    // 3. Ver si es primo
    bool esPrimo = true;

    if (N < 2) {
        esPrimo = false;

    } else {
        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                esPrimo = false;
            }
        }
    }

    if (esPrimo) {
        cout << "\nEl numero " << N << " es primo.\n";
    } else {
        cout << "\nEl numero " << N << " NO es primo.\n";
    }

    return 0;
}
