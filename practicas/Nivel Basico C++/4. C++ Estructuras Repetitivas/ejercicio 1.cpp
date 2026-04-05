/*
1. Realice un programa que solicite de la entrada estandar un entero del
1 al 10 y muestre en la salida estandar su tabla de multiplicar
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int numero;
	
	do{
		cout << "Digita un numero del 1 al 10: " << endl;
		cin >> numero;
		
	}while( numero < 1 || numero >   10);
	
	for(int i = 1; i <= 20; i++){
		
		cout<< "Tabla de multiplicar del: " << endl;
		cout << numero << " * " << i << " = " << numero * i << endl; 
	}
	
	return 0;
}
