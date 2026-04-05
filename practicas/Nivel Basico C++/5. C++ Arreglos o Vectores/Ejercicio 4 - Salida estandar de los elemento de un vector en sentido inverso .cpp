/*
Ejercicio 4:
Escribe un programa que defina un vector de numeros y muestre en la salida
estandar el vector en orden inverso - del ultimo al primer elemento.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[100], n;
	
	cout << "Digite el numero de elementos que va a tener el arreglo: ";
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "Digite un numero: ";
		cin >> numeros[i]; // Guardando todos los elementos del vector
	}
	
	//Ahora, vamos a mostrar los elementos del mayor al menor
	for(int i = n-1; i >= 0; i--){
		cout << numeros[i] << endl;
	}
	
		
	getch();
	system("Pause");
	return 0;
}
