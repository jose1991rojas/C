/*
Ejercicio 2:

Escriba un programa que lea tres numeros y determine cual de ellos es el mayor.
*/

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	
	cout << "Digite 3 numeros: " << endl; cin >> n1 >> n2 >> n3;
	
	if(n1 >= n2 && n1 >= n3 ){
		cout << "El mayor es: " << n1;
	}
	else if(n2 >= n1 && n2 >= n3){
		cout << "El mayor es: " << n2;
	}
	else{
		cout << "Es mayor: "<< n3;
	}
	
	return 0;
}
