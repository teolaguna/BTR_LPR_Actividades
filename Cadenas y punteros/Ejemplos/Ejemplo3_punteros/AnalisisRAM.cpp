#include <iostream> 
 
using namespace std; 
 
int main() { 
    int variableEntera = 10;                // Declaración de variable de tipo int 
    int* punteroAEntero = &variableEntera;  // Usamos '&' para capturar la posicion de memoria de la variable 
 
    cout << "=====================================================" << endl; 
    cout << "       EJEMPLO 3: CONTROL DIRECTO DE LA MEMORIA      " << endl; 
    cout << "=====================================================" << endl; 
 
    // 1. Mostrar valor directo 
    cout << "1. El valor de variableEntera es: " << variableEntera << endl; 
 
    // 2. Extraer dirección física 
    cout << "2. Su direccion fisica en la RAM es: " << &variableEntera << endl; 
 
    // 3. Inspeccionar el interior del puntero 
    cout << "3. El valor almacenado dentro de punteroAEntero es: " << punteroAEntero << endl; 
 
    // 4. Leer el valor del destino apuntado usando desreferencia (*) 
    cout << "4. El valor apuntado por el puntero (*) es: " << *punteroAEntero << endl; 
    cout << "=====================================================" << endl; 
 
    return 0; 
}
