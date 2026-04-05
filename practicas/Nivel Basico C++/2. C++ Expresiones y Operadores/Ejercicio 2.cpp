/*
Ejercicio 2:
Escribe la siguiente expresión
matematica como expresión en C++:

resultado = x

x = (a+b)/(c+d)
*/

#include<iostream>

using namespace std;

int main(){
	/* En vez de la variable "x" puedes usar "resultado" si asi lo deseas, solo cambia
	las variables...*/
	float a, b, c, d, x; 
	
	//Salida y entrada de datos.
	cout << "Dame el valor para la variable a: "; cin >> a;
	cout << "Dame el valor para la variable b: "; cin >> b;
	cout << "Dame el valor para la variable c: "; cin >> c;
	cout << "Dame el valor para la variable d: "; cin >> d;
	
	//Resultado
	cout.precision(2);
	cout << "\nResultado de la operacion: ";
	x = (a + b) / (c + d);
	cout << x;
	return 0;
}
