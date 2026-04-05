/*
Ejercicio 4:

Escribe la siguiente expresion como expresion en C++:

a + (b / (c-d))
*/

#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, x;
	
	cout <<"Tenemos la siguiente expresion: a + (b / (c-d))" << endl;
	cout << "\nIngresa el valor de a: "; cin >> a;
	cout << "\nIngresa el valor de b: "; cin >> b;
	cout << "\nIngresa el valor de c: "; cin >> c;
	cout << "\nIngresa el valor de d: "; cin >> d;
	
	cout << "\nResultado de la operacion: ";
	x = a + ( b / ( c - d ) );
	cout << x;  
	
	return 0;
}
