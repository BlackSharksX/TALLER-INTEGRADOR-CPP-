#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>

class NumeroNegativoException : public std::exception {
private:
    std::string mensaje;

public:
    explicit NumeroNegativoException(int numero) {
        std::ostringstream oss;
        oss << "Error: el numero " << numero << " es negativo. Solo se aceptan numeros enteros positivos o cero.";
        mensaje = oss.str();
    }

    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};

int leerEntero(const std::string& entrada) {
    size_t pos;
    int numero = std::stoi(entrada, &pos);
    if (pos != entrada.size()) {
        throw std::invalid_argument("La entrada contiene caracteres no numericos.");
    }
    return numero;
}

void validarNumero(int numero) {
    if (numero < 0) {
        throw NumeroNegativoException(numero);
    }
}

int main() {
    std::string entrada;

    std::cout << "=== Validador de Numeros Enteros ===" << std::endl;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> entrada;

    try {
        int numero = leerEntero(entrada);
        validarNumero(numero);
        std::cout << "Numero valido: " << numero << std::endl;
    } catch (const NumeroNegativoException& e) {
        std::cerr << "[Excepcion personalizada] " << e.what() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "[Error de conversion] No se pudo convertir la entrada a entero: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "[Error de rango] El numero esta fuera del rango permitido para un entero." << std::endl;
    }

    return 0;
}
