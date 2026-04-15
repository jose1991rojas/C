/*
1. Esccribe la siguiente expresion como expresion en C++:

(a/b) + 1
*/

#include<iostream>

using namespace std;

int main(){
	float a, b, x;
	const int C = 1;
	
	//Pidiendo informacion en pantalla y solicitando ingreso de datos.
	cout << "\nIngresa valor de a: "; cin >> a;
	cout << "\nIngresa valor de b: "; cin >> b;
	
	//Operacion y salida de resultados.
	cout.precision(2);
	cout <<"\nResultado de la operacion: ";
	x = (a/b) + C;
	cout << x;
	
	return 0;
}
