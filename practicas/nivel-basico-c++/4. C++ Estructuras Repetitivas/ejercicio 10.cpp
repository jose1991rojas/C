/*
Bloque 4. Estructuras Repetitivas
Ejercicio 10:

Escriba un programa que calcule el
valor de: 1!+2!+3!+...+n!
(suma de factoriales)
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(){
	//optimice las variables que tendran mayor cantidad de datos con long long
	//para evitar el Overflow en variables del tipo int.
	long factorial = 1;  long suma = 0; int numero; 
	
	cout<<"\nDigite un numero: "; cin>> numero;
	
	for(int i=1; i<=numero; i++){
		factorial *=  i;
		suma += factorial;
	}

	cout<<"\nEl valor de la suma factorial es: "<<suma<<endl;	
	
	system("pause");
	return 0;
}


