/*
Ejercicio 8:
Escriba un programa que calcule el valor de: 1+3+5+...+2n-1
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n; 
    int suma = 0; // CORRECCIÓN: Inicializar la suma a cero.
    
    cout << "Digite el número de elementos impares a sumar (n): "; 
    cin >> n;
    
    cout << "\nSerie a sumar: ";
    
    // El bucle for itera 'n' veces para obtener los 'n' términos impares.
    for(int i = 1 ; i <= n ; i++){
        
        // El i-ésimo término impar es (2 * i - 1)
        int termino_impar = (2 * i) - 1;
        
        // 1. Acumular la suma (suma += termino)
        suma += termino_impar;
        
        // 2. Mostrar la serie (opcional, para verificación)
        cout << termino_impar;
        if (i < n) {
            cout << " + ";
        }
    }
    
    cout << "\n----------------------------------------------------\n";
    cout << "La suma de los primeros " << n << " elementos impares es: " << suma << endl;
    cout << "----------------------------------------------------\n";
    
    getch();
    return 0;
}
