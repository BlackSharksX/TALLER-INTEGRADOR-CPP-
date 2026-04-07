#include <iostream>
#include <iomanip> // Formatea entrada y salida
using namespace std;

int main() {

    double nota;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {

        cout << "=============================================" << endl;
        cout << " SISTEMA DE CALIFICACIONES" << endl;
        cout << "=============================================" << endl;

        cout << "Ingrese una nota (0.0 a 5.0): ";

        if (!(cin >> nota)) {
            cout << "Error: Ingrese un número valido." << endl;
            return 1;
        }

        // Validación
        if (nota < 0.0 || nota > 5.0) {
            cout << "Error: La nota debe estar en el rango de 0.0 a 5.0." << endl;

        } else {

            if (nota >= 4.6) {
                cout << "Resultado: Excelente (" << fixed << setprecision(1) << nota << ")" << endl;

            } else if (nota >= 3.0) {
                cout << "Resultado: Aprueba (" << fixed << setprecision(1) << nota << ")" << endl;

            } else {
                cout << "Resultado: Reprueba (" << fixed << setprecision(1) << nota << ")" << endl;
            }
        }

        cout << "=============================================" << endl;

        // Preguntar si desea continuar
        cout << "¿Desea ingresar otra nota? (s/n): ";
        cin >> continuar;

        cout << endl;
    }

    cout << "Vuelva pronto..." << endl;

    return 0;
}
