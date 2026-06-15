#include <iostream>
#include <iomanip>
#include <cstdint>

int main() {

    // 1. Variable entera que almacena la edad
    int edad;

    // 2. Puntero a entero apuntando a la variable 'edad'
    int* pEdad = &edad;

    // 3. Solicitar la edad por teclado mediante el puntero desreferenciado
    std::cout << "=====================================" << std::endl;
    std::cout << "   SISTEMA DE CONTROL DE ACCESO      " << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "\nIngrese su edad: ";
    std::cin >> *pEdad;   // Se escribe directamente en el espacio fisico apuntado

    // 4. Validacion de control de acceso
    if (*pEdad >= 18) {
        std::cout << "\n-------------------------------------" << std::endl;
        std::cout << "  ✔  ACCESO APROBADO"                  << std::endl;
        std::cout << "-------------------------------------"  << std::endl;
        std::cout << "  Edad registrada   : " << *pEdad      << " años" << std::endl;
        std::cout << "  Direccion memoria : 0x"
                  << std::hex << std::uppercase
                  << reinterpret_cast<uintptr_t>(pEdad)
                  << std::endl;
        std::cout << "-------------------------------------"  << std::endl;
    } else {
        std::cout << "\n-------------------------------------" << std::endl;
        std::cout << "  ✘  ACCESO DENEGADO"                  << std::endl;
        std::cout << "     Debe ser mayor de 18 años."        << std::endl;
        std::cout << "-------------------------------------"  << std::endl;
    }

    return 0;
}
