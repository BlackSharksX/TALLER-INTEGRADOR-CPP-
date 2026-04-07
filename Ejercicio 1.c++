#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "=============================================" << endl;
    cout << " LENGUAJES DE PROGRAMACIÓN Y PARADIGMAS" << endl;
    cout << "=============================================" << endl;
    cout << endl;

    cout << "--- Lenguaje Compilado ---" << endl;
    cout << "Un lenguaje compilado es aquel cuyo código fuente es traducido" << endl;
    cout << "completamente a código máquina por un programa llamado compilador" << endl;
    cout << "antes de ser ejecutado. Esto genera un archivo ejecutable que puede" << endl;
    cout << "correr directamente en el sistema operativo sin necesidad del" << endl;
    cout << "código fuente original." << endl;
    cout << "Ejemplos: C, C++, Rust, Go." << endl;

    cout << endl;

    cout << "--- Lenguaje Interpretado ---" << endl;
    cout << "Un lenguaje interpretado es aquel cuyo codigo fuente es leido y" << endl;
    cout << "ejecutado linea por linea en tiempo real por un programa llamado" << endl;
    cout << "interprete. No se genera un archivo ejecutable independiente;" << endl;
    cout << "el interprete debe estar presente cada vez que se ejecuta el programa." << endl;
    cout << "Ejemplos: Python, JavaScript, Ruby, PHP." << endl;

    cout << endl;

    cout << "--- C++ es un lenguaje COMPILADO ---" << endl;
    cout << "C++ pertenece a los lenguajes compilados. Su codigo fuente se" << endl;
    cout << "traduce a codigo maquina mediante un compilador (como g++ o clang++)," << endl;
    cout << "generando un ejecutable eficiente y de alto rendimiento." << endl;

    cout << endl;

    cout << "=============================================" << endl;
    cout << " SELECCIÓN DE PARADIGMA" << endl;
    cout << "=============================================" << endl;
    cout << endl;

    cout << "Seleccione un paradigma de programación:" << endl;
    cout << "1. Programación Estructurada" << endl;
    cout << "2. Programación Orientada a Objetos" << endl;
    cout << endl;

    cout << "Ingrese su opcion (1 o 2): ";
    int opcion;
    cin >> opcion;

    cout << endl;

    if (opcion == 1) {
        cout << "--- Programación Estructurada ---" << endl;
        cout << "La programación estructurada es un paradigma que organiza el" << endl;
        cout << "codigo en bloques logicos utilizando tres estructuras de control:" << endl;
        cout << "secuencia, seleccion (if/else) y repeticion (bucles)." << endl;
        cout << "Evita el uso de saltos incondicionales (goto) y busca que el" << endl;
        cout << "programa sea facil de leer, depurar y mantener." << endl;
        cout << "Se basa en funciones y procedimientos para dividir el programa" << endl;
        cout << "en partes mas pequenas y manejables." << endl;
        cout << "Ejemplo de lenguaje: C." << endl;

    } else if (opcion == 2) {
        cout << "--- Programacion Orientada a Objetos (POO) ---" << endl;
        cout << "La programacion orientada a objetos es un paradigma que organiza" << endl;
        cout << "el codigo en torno a 'objetos', que son instancias de 'clases'." << endl;
        cout << "Cada objeto agrupa datos (atributos) y comportamientos (metodos)." << endl;
        cout << "Sus pilares fundamentales son:" << endl;
        cout << " - Encapsulamiento: ocultar los detalles internos del objeto." << endl;
        cout << " - Herencia: crear nuevas clases a partir de otras existentes." << endl;
        cout << " - Polimorfismo: usar una misma interfaz para distintos tipos." << endl;
        cout << " - Abstraccion: representar conceptos esenciales sin detalles." << endl;
        cout << "Ejemplo de lenguaje: C++, Java." << endl;

    } else {
        cout << "Opcion no valida. Por favor ejecute el programa de nuevo" << endl;
        cout << "e ingrese 1 o 2." << endl;
    }

    cout << endl;
    return 0;
}
