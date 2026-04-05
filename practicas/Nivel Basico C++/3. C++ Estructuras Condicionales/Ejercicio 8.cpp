/*
Ejercicio 8:
Escribe un programa que lea de la entrada estandar tres numeros.
Despues debe leer un cuarto numero e indicar si el
numero coincide con alguno de los 
introducidos con anterioridad.
*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3, numero;
	
	
	cout << "\nIntroduce 3 numeros: " << endl; cin >> n1;
	cout << "\nIntroduce 3 numeros: " << endl; cin >> n2;
	cout << "\nIntroduce 3 numeros: " << endl; cin >> n3;
	cout << "\nIntroduce un 4to numero: " << endl; cin >> numero;
	
	
	if( (n1 == numero) || (n2 == numero) || (n3 == numero) ){
		cout << "\nCoincide con un numero es el: " << numero;
	}
	else{
		cout << "\nNo coincide con ningun numero el: " << numero << endl; 
	}
		
	return 0;
}
