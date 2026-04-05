/*
Ejercicio 12:

Hacer un menu que considere las siguientes opciones:

Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Caso 3: Salir
*/

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int opc;
	int numero, operacion;
	
	cout << "\tBienvenido a tu menu virtual." << endl;
	cout << "1. Cubo de un numero." << endl;
	cout << "2. Numero par o impar" << endl;
	cout << "3. Salir." << endl;
	cout << "Digite una opcion: ";
	cin >> opc;
	
	switch(opc){
		case 1: cout << "\nDigite un numero: "; 
				cin >> numero;
				operacion = pow(numero,3);
				cout << "\nOperacion: " << operacion << endl; break;
		
		case 2: cout << "\nDigite un numero: ";
				cin >> numero;
				
				if(numero %2 == 0){
					cout << "\nEs un numero par el: " << numero << endl;
				}
				else{
					cout << "\nEs un numero inpar el: " << numero << endl;
				} 
		
		case 3: break;
		
		
	}
	
	return 0;
}
