#include <iostream>
#include <string>
#include <cctype>
#include <ctime>
#include <algorithm>

int main() {
    std::string nombre;

    std::cout << "=== PROGRAMA DE INFORMACION DE USUARIO ===" << std::endl;
    std::cout << "Ingrese su nombre completo: ";
    std::getline(std::cin, nombre);

    // Cantidad de caracteres (sin contar el salto de linea)
    int totalCaracteres = nombre.length();
    std::cout << "\n--- Resultados ---" << std::endl;
    std::cout << "Nombre ingresado    : " << nombre << std::endl;
    std::cout << "Cantidad de caracteres: " << totalCaracteres << std::endl;

    // Convertir a mayusculas
    std::string nombreMayusculas = nombre;
    std::transform(nombreMayusculas.begin(), nombreMayusculas.end(),
                   nombreMayusculas.begin(), ::toupper);
    std::cout << "En mayusculas       : " << nombreMayusculas << std::endl;

    // Obtener fecha actual del sistema
    time_t tiempoActual = time(nullptr);
    struct tm* infoFecha = localtime(&tiempoActual);

    char fechaFormateada[50];
    strftime(fechaFormateada, sizeof(fechaFormateada), "%d/%m/%Y", infoFecha);

    int anioActual = infoFecha->tm_year + 1900;

    std::cout << "Fecha actual        : " << fechaFormateada << std::endl;

    // Generar usuario: primeras 3 letras del nombre (solo letras) + anio actual
    std::string primeras3 = "";
    int conteoLetras = 0;
    for (char c : nombre) {
        if (std::isalpha(c) && conteoLetras < 3) {
            primeras3 += std::tolower(c);
            conteoLetras++;
        }
        if (conteoLetras == 3) break;
    }

    std::string usuarioGenerado = primeras3 + std::to_string(anioActual);
    std::cout << "Usuario generado    : " << usuarioGenerado << std::endl;

    std::cout << "\n===========================================" << std::endl;

    return 0;
}
