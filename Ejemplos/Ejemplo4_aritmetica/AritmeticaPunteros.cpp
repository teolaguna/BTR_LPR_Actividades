#include <iostream> 
 
using namespace std; 
 
int main() { 
    int miArreglo[3] = {10, 20, 30}; // El arreglo contiene posiciones consecutivas en memoria 
    int* punteroIndex = miArreglo;   // Inicializa apuntando a miArreglo[0] 
 
    cout << "=====================================================" << endl; 
    cout << "     EJEMPLO 4: ARITMETICA DE DIRECCIONES DE MEMORIA  " << endl; 
    cout << "=====================================================" << endl; 
 
    for (int i = 0; i < 3; ++i) { 
        cout << "[Elemento " << i << "]" << endl; 
        cout << "  -> Por Indice: miArreglo[" << i << "] = " << miArreglo[i] << endl; 
        cout << "  -> Direccion RAM de este indice: " << &miArreglo[i] << endl; 
         
        // Aritmética de punteros: Al sumar 'i', el compilador desplaza i * sizeof(int) bytes 
        cout << "  -> Por Puntero desreferenciado *(ptrIndex + " << i << "): " << *(punteroIndex + i) << endl; 
        cout << "-----------------------------------------------------" << endl; 
    } 
    cout << "=====================================================" << endl; 
 
    return 0; 
}