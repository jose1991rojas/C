/*Escriba un programa que lea 
de la entrada estandar 
los dos catetos de un triangulo
rectangulo y escriba en la salida
estandar su hipotenusa.*/

#include <iostream>
#include <cmath> // libreria de matematicas para poder usar la funcion sqrt() para calculo de raiz cuadrada.
	

using namespace std;

int main(){
	float cop, cad, hipotenusa =0;
	
	cout<<"Digite el valor del cateto opuesto: "; cin>>cop;
	cout<<"Digite el valor del cateto adyacente: "; cin>>cad;
	
	hipotenusa = (cop)*(cop)+(cad)*(cad);
	hipotenusa = sqrt(hipotenusa); // Usa la función sqrt() para sacar la raíz cuadrada
	
	cout.precision(5);
	cout<<"\nValor de la hipotenusa: "<<hipotenusa<<endl;
	
	return 0;
}
