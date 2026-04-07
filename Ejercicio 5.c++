#include <iostream>
#include <cmath>
using namespace std;

// Función para calcular el área de un círculo
float areaCirculo(float radio) {
    return 3.1416 * radio * radio;
}

// Función para calcular el factorial
int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

// Función para saber si es par o impar
string parOImpar(int numero) {
    if (numero % 2 == 0)
        return "par";
    else
        return "impar";
}

int main() {

    int opcion;

    do {
        cout << "\nMENU\n";
        cout << "1. Calcular area de un circulo\n";
        cout << "2. Calcular factorial\n";
        cout << "3. Verificar si un numero es par o impar\n";
        cout << "4. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            float r;
            cout << "Ingresa el radio: ";
            cin >> r;
            cout << "Area: " << areaCirculo(r) << endl;

        } else if (opcion == 2) {
            int n;
            cout << "Ingresa un numero: ";
            cin >> n;
            cout << "Factorial: " << factorial(n) << endl;

        } else if (opcion == 3) {
            int num;
            cout << "Ingresa un numero: ";
            cin >> num;
            cout << "El numero es " << parOImpar(num) << endl;

        } else if (opcion == 4) {
            cout << "Saliendo...\n";

        } else {
            cout << "Opcion invalida\n";
        }

    } while (opcion != 4);

    return 0;
}
