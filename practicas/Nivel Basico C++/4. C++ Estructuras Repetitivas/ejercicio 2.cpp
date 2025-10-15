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
    int numero;          // Almacena el n�mero introducido por el usuario
    int contador = 0;    // Inicializa el contador de n�meros > 0

    // 1. Usamos un bucle 'do-while' para asegurar que el c�digo se ejecuta al menos una vez.
    do {
        cout << "Digite un numero (0 para terminar): "; cin >> numero;

        // 2. Comprobamos si el n�mero es mayor que cero.
        //    La condici�n numero != 0 asegura que el cero de salida no se cuente.
        if (numero > 0) {
            contador++; // Incrementa el contador si el n�mero es positivo
        }

    // 3. La condici�n de salida: el bucle se repite mientras el n�mero NO sea cero.
    } while (numero != 0);

    // 4. Mostrar el resultado final
    cout << "\n---------------------------------------------------" << endl;
    cout << "El programa ha terminado." << endl;
    cout << "Numeros mayores que cero leidos: " << contador << endl;
    cout << "---------------------------------------------------" << endl;
    
    return 0;
}

