#include <iostream>
using namespace std;

int main() {

    // Algoritmo operaciones matemáticas
    int num1, num2, suma, resta, multiplicacion, division;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    suma = num1 + num2;
    cout << "La suma de los números es: " << suma << endl;

    resta = num1 - num2;
    cout << "La resta de los números es: " << resta << endl;

    multiplicacion = num1 * num2;
    cout << "La multiplicación de los números es: " << multiplicacion << endl;

    division = num1 / num2;
    cout << "La divisón de los dos números es: " << division << endl;

    if (division = 0); {
        cout << "No se puede dividir por 0; ";
    }

    if (num1 > num2) {
        cout << num1 << " es mayor que " << num2 << endl;
    } else {
        cout << num1 << " no es mayor que " << num2 << endl;
    }

    return 0;
}
