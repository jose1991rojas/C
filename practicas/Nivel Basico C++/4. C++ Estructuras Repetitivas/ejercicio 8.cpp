/*
Ejercicio 8.
Escriba un programa que calcule el valor de: 1+3+5+...+2n-1
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int n, suma = 0;
    
    cout << "Digite el numero de elementos: "; 
    cin >> n;
    
    // El bucle inicia en 1, llega hasta la fórmula 2n-1, 
    // e incrementa de 2 en 2 para saltar los pares.
    for(int i = 1; i <= (2 * n - 1); i += 2){
        suma += i;
    }
    
    cout << "\nLa suma es: " << suma << endl;
	
	getch();
	system("pause");
	return 0;
}
