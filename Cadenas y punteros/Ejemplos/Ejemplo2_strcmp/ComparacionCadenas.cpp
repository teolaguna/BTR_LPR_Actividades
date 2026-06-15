#include <cstring>
#include <iostream>
 
using namespace std; 
 
int main() { 
    // Definimos dos punteros a constantes de caracteres 
    const char* cadena1 = "Hola"; 
    const char* cadena2 = "Mundo"; 
 
    // strcmp compara byte a byte basándose en el valor numérico ASCII 
    // Devuelve: 
    //  0: Si son idénticas en contenido 
    //  Menor que 0: Si cadena1 es lexicográficamente menor que cadena2 
    //  Mayor que 0: Si cadena1 es lexicográficamente mayor que cadena2 
    int evaluacion = strcmp(cadena1, cadena2); 
 
    cout << "=====================================================" << endl; 
    cout << "     EJEMPLO 2: EVALUACION COMPARATIVA CON strcmp()   " << endl; 
    cout << "=====================================================" << endl; 
 
    if (evaluacion == 0) { 
        cout << "Las cadenas de caracteres son exactamente iguales." << endl; 
    }  
    else if (evaluacion < 0) { 
        cout << "La cadena \"" << cadena1 << "\" es menor que \"" << cadena2 << "\"." << endl; 
    }  
    else { 
        cout << "La cadena \"" << cadena1 << "\" es mayor que \"" << cadena2 << "\"." << endl; 
    } 
    cout << "=====================================================" << endl; 
 
    return 0; 
} 
