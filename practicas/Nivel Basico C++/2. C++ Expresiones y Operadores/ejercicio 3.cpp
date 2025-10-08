/* 3. Escribe la siguiente expresion como expresion en C++: (a+(b/c))/(d+(c/f))*/

#include <iostream>; // Son las librerias para poder generar entradas y salidas

using namespace std; //Me ayuda en la agilizacion de las entradas y salidas

int main(){ //Int main() declaracion de la funcion principal
	float a, b, c, d, f, e, resultado = 0; // Tipos de variables flotantes
	
	cout<<"Digite el valor de a: "; cin>>a; //Salida y entrada de datos con cout y cin y guardado de datos en variables
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	cout<<"Digite el valor de d: "; cin>>d;
	cout<<"Digite el valor de e: "; cin>>e;
	cout<<"Digite el valor de f: "; cin>>f;
	
	resultado = (a+ (b/c))/(d+(e/f)); //Calculo de la interrogante
	cout.precision(2); // Funcionalidad para tener mas o menos decimales
	cout<<"\nEl resultado es: "<<resultado<<endl;		//imprimiendo el resultado con saltos de lineas
	
	return 0;
}
