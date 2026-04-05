/*
3. Ejercicio. 
Escribe la siguiente expresion como expresion en C++:

x = (a + (b / c) ) / (d + (e / f) )
*/

#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, e, f, x = 0;
	
	cout << "Ingresa el valor de a: "; cin >> a;
	cout << "Ingresa el valor de b: "; cin >> b;
	cout << "Ingresa el valor de c: "; cin >> c;
	cout << "Ingresa el valor de d: "; cin >> d;
	cout << "Ingresa el valor de e: "; cin >> e;
	cout << "Ingresa el valor de f: "; cin >> f;
	
	//Resultado de la operacion.
	cout.precision(2);
	x = (a + (b / c) ) / (d + (e / f) ); 
	cout << "\nResultados de la Operacion: " << x;
	
	
	
	return 0;
}
