/*
Ejercicio 4.
Comprobar si un numero digitado por el usuario es positivo o negativo.
*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout << "Digita un numero: "; cin >> numero;
	
	if(numero < 0){
		cout << "El numero es negativo.";
	}
	else{
		cout << "El numero es positivo.";
	}
	
	return 0;
}
