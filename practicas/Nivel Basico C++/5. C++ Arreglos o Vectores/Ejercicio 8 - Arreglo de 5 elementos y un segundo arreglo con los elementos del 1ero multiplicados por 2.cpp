/*
Ejercicio 8:
Hacer un programa que lea 5 numeros en un
 arreglo, los copie a otro arreglo
 multiplicador por 2 y muestre el segundo
 arreglo.
*/

#include<iostream>
#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
	int arreglo1[5] = {1,2,3,4,5,};
	int arreglo2[5];
	const int MULTIPLICADOR = 2;
	
	//* Si se desea se puede dejar todo esto comentado y funciona de forma no interactiva
	
	// Aqui primero se solicita los 5 elementos si lo queremos hacer interactivo
	for(int i = 0; i < 5; i++){
		cout << i + 1 << ". Digite 5 numeros: ";
		cin >> arreglo1[i];
	}
	//* Si se desea se puede dejar todo esto comentado y funciona de forma no interactiva/
	
	
	cout << "\nEl arreglo, array o vector 2 multiplicado por 2 los elementos: " << endl;
	
	// Multiplicar por 2 los elementos del 2do arreglo.
	for(int i = 0; i < 5; i++){
		arreglo2[i] = arreglo1[i] * MULTIPLICADOR;
	
	// Mostrar los elementos del 2do arreglo.	
		cout << "\n" << arreglo2[i] << endl;
	}
	
	getch();
	//system("Pause");
	return 0;
}
