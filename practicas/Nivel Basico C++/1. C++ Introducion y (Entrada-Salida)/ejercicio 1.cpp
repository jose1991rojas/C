/*
1. Escriba un programa que lea de la entrada estandar dos numeros
y muestre en la salida estandar su suma, resta, multiplicacion y 
division.
*/

#include<iostream>

using namespace std;

main(){
	int n1, n2, suma=0, resta=0, multiplicacion=0, division=0;
	
	cout<<"\n Digita un numero: "; cin>>n1;
	cout<<"\n Digita otro numero: "; cin>>n2;
	
	suma= n1 + n2;
	resta= n1 - n2;
	multiplicacion= n1*n2;
	division= n1/n2;
	
	cout<<"\n La suma es: "<<suma<<endl;
	cout<<" La resta es: "<<resta<<endl;
	cout<<" La multiplicacion es: "<<multiplicacion<<endl;
	cout<<" La Division es: "<<division<<endl;
	
	return 0;
}
