/*Escriba un programa que calcule las soluciones de una
ecuación de segundo grado de la forma ax^2 + bx + c = 0
teniendo en cuenta que:
x = (-b +- sqrt (pow(b,2)-(4(a*c))))/(2*a)*/

#include <iostream>
#include <math.h>

using namespace std;
int main(){
	float a, b, c, x1=0, x2=0, delta=0; //Variables para la solucion
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	cout<<"Digite el valor de c: "; cin>>c;
	
	// 1. Calcular el discriminante (b^2 - 4ac)
	delta = pow(b,2) - (4*a*c);
	
	// NOTA IMPORTANTE: Si delta es negativo, las funciones sqrt()
    // y pow() fallarán o devolverán NaN si no usamos std::complex.
	
	// Si delta >= 0, las soluciones son reales
	x1= ( (-b) + sqrt(delta) ) /  (2 * a);
	x2= ( (-b) - sqrt(delta) ) /  (2 * a);
	
	// Si delta < 0, esta salida sera NaN.
	cout.precision(3);
	cout<<"El valor de X1 es: "<<x1<<endl;
	cout<<"El valor de X2 es: "<<x2<<endl;
	
	//Mas adelante implementare otra solucion para poder calcular numeros reales y imaginarios...
	
	return 0;
}
