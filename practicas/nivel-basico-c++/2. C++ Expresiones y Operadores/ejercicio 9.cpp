/*
9. Realice un programa que calcule el valor que toma la siguiente funcion
para unos valores dados de x e y:

f( x , y ) = sqrt( x ) / ( pow( y , 2 ) - 1 )
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	float f, x, y;
	
	cout << "Asigna valor de x: "; cin >> x;
	cout << "Asigna valor de y: "; cin >> y;
	
	//Resultado de la operacion.
	f = sqrt( x ) / ( pow( y , 2 ) - 1 );
	cout << "Resultado de la funcion: " << f;
	
	return 0;
}
