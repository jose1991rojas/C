/*
7. Escriba un programa que solicite una edad (Un entero) e indique 
en la salida estandar si la edad introducida esta en el rango [18-25].
*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout << "Digita tu edad: "; cin >> edad;
	
	//Dos formas de solucionar el ejercicio ambas resuelven el ejercicio.
	
	// Tambien se puede hacer de esta forma
	if(edad >= 18 && edad <= 24){
		cout << "\nEsta en el rango de [18-25]: " << edad << endl;
	}
	else{
		cout << "\nNo esta en el rango: " << edad <<endl;
	}
	
	
	
	/* Se puede hacer de esta manera
	switch(edad){
		case 18: cout << "\nEsta en el rango de [18-25]: " << edad << endl; break;
		case 19: cout << "\nEsta en el rango de [18-25]: " << edad << endl; break;
		case 20: cout << "\nEsta en el rango de [18-25]: " << edad << endl; break;
		case 21: cout << "\nEsta en el rango de [18-25]: " << edad << endl; break;
		case 22: cout << "\nEsta en el rango de [18-25]: " << edad << endl; break;
		case 23: cout << "\nEsta en el rango de [18-25]: " << edad << endl; break;
		case 24: cout << "\nEsta en el rango de [18-25]: " << edad << endl; break;
		case 25: cout << "\nEsta en el rango de [18-25]: " << edad << endl; break;
		default: cout << "\nNo esta em el rango [18-25]: " << edad << endl; break;
	}
	*/
	return 0;
}
