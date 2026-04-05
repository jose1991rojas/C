/*
Ejercicio 8:
Escriba un programa que lea de la entrada estandar los dos catetos de un
triangulo rectangulo
y escriba en la salida estandar su hipotenusa.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float co = 0, ca = 0, h = 0;
	
	cout << "Cateto opuesto asigne valor: "; cin >> co;
	cout << "Cateto adyacente asigne valor: "; cin >> ca;
	
	//Resultado de la operacion.
	h = sqrt( pow(co , 2) + pow(ca , 2) );
	
	cout.precision(2);
	cout << "\nResultado de la hipotenusa: " << h;
	return 0;
}
