/*Bloque 4. Estructuras Repetitivas
Ejercicio 6:

Escriba un programa que calcule x^y,
donde tanto x como y son enteros positivos, sin utilizar 
la funcion pow.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int x, y; // Base y Exponente
    long long resultado = 1; // Usamos long long para evitar desbordamiento en potencias grandes. Inicializar a 1.
    
    // Solicitamos y validamos que x e y sean positivos
    do {
        cout << "Digite un numero base (x): "; 
        cin >> x;
        cout << "Digite un numero potencia (y): "; 
        cin >> y;
        
        if (x <= 0 || y < 0) { // Permitimos y=0, ya que x^0 = 1
            cout << "ERROR: Ambos numeros deben ser enteros positivos (o y=0). Intente de nuevo.\n";
        }
        
    } while (x <= 0 || y < 0);
    
    // La potencia es multiplicar la base (x) por sí misma (y) veces.
    // Usamos un bucle for que repita la multiplicación Y veces.
    
    for(int i = 0; i < y; i++){
        // En cada iteración, multiplicamos el resultado acumulado por la base (x)
        resultado *= x; // Esto es equivalente a: resultado = resultado * x;
    }
    
    cout << "\n-----------------------------------------\n";
    cout << x << " elevado a la potencia " << y << " es: " << resultado << endl;
    cout << "-----------------------------------------\n";

    system("pause");
    return 0;
}
