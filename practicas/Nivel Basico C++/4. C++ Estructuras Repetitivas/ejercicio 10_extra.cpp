#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero_1, numero_2;
    // CORRECCIÓN 1: Usar 'long long' para los factoriales y el resultado para evitar desbordamiento 
    // (Overflow), ya que 13! excede el límite de un 'int'.
    long long factorial_1 = 1;
    long long factorial_2 = 1;
    long long resultado;
    
    cout << "\nDigite el primer numero (positivo): "; 
    cin >> numero_1;
    cout << "\nDigite el segundo numero (positivo): "; 
    cin >> numero_2;

    // Bloque 1: Cálculo del factorial del primer número
    // CORRECCIÓN 2: El contador 'i' debe inicializarse (ej. i = 1).
    if (numero_1 >= 0) {
        for(int i = 1; i <= numero_1; i++){
            factorial_1 *= i;
        }
    } else {
        cout << "\nError: El primer numero debe ser no negativo. Factorial 1 se establece en 1." << endl;
    }
    
    // Bloque 2: Cálculo del factorial del segundo número
    // CORRECCIÓN 2: El contador 'i' debe inicializarse (ej. i = 1).
    if (numero_2 >= 0) {
        for(int i = 1; i <= numero_2; i++){
            factorial_2 *= i;
        }
    } else {
        cout << "Error: El segundo numero debe ser no negativo. Factorial 2 se establece en 1." << endl;
    }
    
    // Suma de los factoriales
    resultado = factorial_1 + factorial_2;
    
    cout << "\n------------------------------------------------------" << endl;
    cout << "El factorial de " << numero_1 << " es: " << factorial_1 << endl;
    cout << "El factorial de " << numero_2 << " es: " << factorial_2 << endl;
    cout << "El valor de la suma de factoriales es: " << resultado << endl;
    cout << "------------------------------------------------------" << endl;
        
    system("pause");
    return 0;
}
