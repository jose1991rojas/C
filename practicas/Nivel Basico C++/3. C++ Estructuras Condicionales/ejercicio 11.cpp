/*
11. Hacer un programa que simule un cajero automatico con un saldo 
inicial de 1000 Dólares.
*/

#include<iostream>

using namespace std;

int main(){
	int saldo_inicial = 1000, opc;
	float extra, saldo = 0, retiro;
	
	cout << "\tBienvenido a tu cajero virtual." << endl;
	cout << "1. Ingresar dinero en la cuenta." << endl;
	cout << "2. Retirar dinero de la cuenta." << endl;
	cout << "3. Salir" << endl;
	cout << "Seleccione Opcion: ";
	cin >> opc;
	
	switch(opc){
		case 1: cout << "Digite la cantidad a ingresar: "; 
				cin >> extra;
				saldo = saldo_inicial + extra;
				cout << "Dinero en cuenta: " << saldo; break;
		
		case 2: cout << "Digite la cantidad de dinero que retirara: "; 
				cin >> retiro;
				
				if(retiro > saldo_inicial){
					cout << "No tienes esa cantidad.";
				}
				else{
					saldo = saldo_inicial - retiro;
					cout << "Dinero en cuenta: " << saldo;
				}	
				
		case 3:	break;
		
	}
	
	return 0;
}
