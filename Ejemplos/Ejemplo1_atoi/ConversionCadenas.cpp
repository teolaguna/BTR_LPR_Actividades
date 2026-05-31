#include <iostream> // Entrada y salida estándar (cout, cin, endl) 
#include <cstdlib>  // Biblioteca requerida para la función de conversión atoi() 
 
using namespace std; 
 
int main() { 
    // Declaramos un puntero a una cadena constante de caracteres (String al estilo C) 
    const char* textoNumerico = "1234";  
 
    // Convertimos la cadena en un número entero nativo operable en la CPU 
    int numeroConvertido = atoi(textoNumerico);  
 
    cout << "=====================================================" << endl; 
    cout << "      EJEMPLO 1: CONVERSION DE DATOS CON atoi()      " << endl; 
    cout << "=====================================================" << endl; 
 
    cout << "Texto original (String): \"" << textoNumerico << "\"" << endl; 
    cout << "Valor convertido (int): " << numeroConvertido << endl; 
     
    // Verificación matemática: Si no se convirtió, sumarle 6 daría error o concatenaría texto. 
    cout << "Control aritmetico (Valor obtenido + 6): " << (numeroConvertido + 6) << endl; 
    cout << "=====================================================" << endl; 
 
    return 0; // Terminado exitoso 
} 
 
