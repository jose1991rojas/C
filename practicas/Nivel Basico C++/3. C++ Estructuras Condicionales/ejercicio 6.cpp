/*
Ejercicio 6:
Escriba un programa que lea de la entrada estandar un caracter e indique en la salida
estandar si el caracter es una vocal minuscula, es una vocal mayuscula o no es una vocal.
*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout << "Digite una letra: "; cin >> letra;
	
	switch(letra){
		case 'a': cout << "Es una vocal minuscula"; break;
		case 'e': cout << "Es una vocal minuscula"; break;
		case 'i': cout << "Es una vocal minuscula"; break;
		case 'o': cout << "Es una vocal minuscula"; break;
		case 'u': cout << "Es una vocal minuscula"; break;
		case 'A': cout << "Es una vocal mayuscula"; break;
		case 'E': cout << "Es una vocal mayuscula"; break;
		case 'I': cout << "Es una vocal mayuscula"; break;
		case 'O': cout << "Es una vocal mayuscula"; break;
		case 'U': cout << "Es una vocal mayuscula"; break;
		default: cout << "No es una vocal."; break;
	}
	
	return 0;
}
