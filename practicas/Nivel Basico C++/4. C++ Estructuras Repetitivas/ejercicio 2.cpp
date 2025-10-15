/*Ejercicio 2:
Realice un programa que lea de la entrada
estandar numeros hasta que se 
introduzca un cero. En ese momento el
programa debe terminar y mostrar en la 
salida estandar el numero de valores 
mayores que cero leidos.
*/

#include <iostream>


using namespace std;

int main(){
    int numero;          // Almacena el número introducido por el usuario
    int contador = 0;    // Inicializa el contador de números > 0

    // 1. Usamos un bucle 'do-while' para asegurar que el código se ejecuta al menos una vez.
    do {
        cout << "Digite un numero (0 para terminar): "; cin >> numero;

        // 2. Comprobamos si el número es mayor que cero.
        //    La condición numero != 0 asegura que el cero de salida no se cuente.
        if (numero > 0) {
            contador++; // Incrementa el contador si el número es positivo
        }

    // 3. La condición de salida: el bucle se repite mientras el número NO sea cero.
    } while (numero != 0);

    // 4. Mostrar el resultado final
    cout << "\n---------------------------------------------------" << endl;
    cout << "El programa ha terminado." << endl;
    cout << "Numeros mayores que cero leidos: " << contador << endl;
    cout << "---------------------------------------------------" << endl;
    
    return 0;
}

