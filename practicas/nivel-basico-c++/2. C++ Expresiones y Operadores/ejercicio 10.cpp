/*
Ejercicio 10:
Escriba un programa que calcule las soluciones de una
ecuacion de segundo grado de la forma  "(a)pow(x,2) + bx + c = 0"
teniendo en cuenta que:

x = -b +- sqrt( (pow(b,2) - (4*(a*c))) ) / (2*a)
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float x1, x2, a, b, c;
	
	cout << "x = -b +- sqrt((pow(b,2) - 4ac)) / 2a"<<endl;
	cout << "Ingresa a: "; cin >> a;
	cout << "Ingresa b: "; cin >> b;
	cout << "Ingresa c: "; cin >> c;
	
	//Resultado de operacion importante dentro de la raiz que sea un numero positivo.
	x1 = -b + sqrt( (pow(b,2) - (4*(a*c))) ) / (2*a);
	x2 = -b - sqrt( (pow(b,2) - (4*(a*c))) ) / (2*a);
	
	cout << "\nResultado de la raiz positiva: " << x1 << endl;
	cout << "Resultado de la raiz negativa: " << x2;

	
	return 0;
}
