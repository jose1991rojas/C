/*Bloque 3. Estructuras condicionales
Ejercicio 6.

Escriba un programa que lea de la
entrada estandar un caracter e indique en la
salida estandar si el caracter es una
vocal minuscula, es una vocal 
mayuscula o no es una vocal.
*/

#include <iostream>

using namespace std;

int main(){
	char letra; //Variable del tipo caracter.
	
	cout<<"Digite un caracter: "; cin>>letra; //Entrada de datos de la variable del tipo caracter
	
	switch(letra){ //Solucion
		case 'a': 
		case 'e':
		case 'i':
		case 'o': 
		case 'u': cout<<"\nEs una vocal minuscula"; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"\nEs una vocal mayuscula."; break;
		default:  cout<<"\nNo es una vocal."; break;				
	}
	
	return 0;
}
