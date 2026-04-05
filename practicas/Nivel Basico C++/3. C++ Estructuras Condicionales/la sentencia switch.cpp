/*
Condicional switch...
*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout << "Digita un numero del 1 al 5: "; cin >> numero;
	
	switch(numero){
		case 1: cout << "\nEs el numero 1"; break;
		case 2: cout << "\nEs el numero 2"; break;
		case 3: cout << "\nEs el numero 3"; break;
		case 4: cout << "\nEs el numero 4"; break;
		case 5: cout << "\nEs el numero 5"; break;
		default: cout << "\nNo es ninguno de los casos."; break;
	}
	
	return 0;
}
