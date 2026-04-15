/*
Ejercicio 12:
Hacer un programa que calcule el resultado de la siguiente expresion:
1-2+3-4+5-6...n
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
int main(){
	int n;
    int suma = 0;
    int signo = 1; // Esta variable controlará la suma o resta
    
    cout << "Digite el valor de n: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        // Multiplicamos 'i' por el signo actual (1 o -1)
        suma += (i * signo); 
        
        // Invertimos el signo para el siguiente ciclo
        signo *= -1; 
    }
    
    cout << "\nEl resultado de la expresion es: " << suma << endl;
	return 0;
}
