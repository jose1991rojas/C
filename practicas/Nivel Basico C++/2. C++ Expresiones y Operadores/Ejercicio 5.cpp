/*
5. Escriba un fragmento de programa que intercambie los valores de dos
variables
*/

#include<iostream>

using namespace std;

int main(){
	int x, y, aux;
	
	cout << "Escribe el valor de x: "; cin >> x;
	cout << "Escribe el valor de y: "; cin >> y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout << "\nImprime el valor de x: " << x << endl;
	cout << "Imprime el valor de y: " << y;
	
	return 0;
}
