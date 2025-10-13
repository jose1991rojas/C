/*Ejercicio 12:

Hacer un menu que considere las siguientes opciones:
Caso 1: Cubo de un numero.
Caso 2: Numero par o impar.
Case 3: Salir.
*/

#include <iostream>

using namespace std;

int main(){
	int numero, opc, cubo, n_par_impar;
	
	cout<<"\t Bienvenido al menu de un numero cubico, par o impar";
	cout<<"\n1. Cubo de un numero.";
	cout<<"\n2. Numero par o impar.";
	cout<<"\n3. Salir.";
	cout<<"\nOpcion: ";
	cin>>opc;
	
	switch(opc){
		case 1: 
			cout<<"\nDigite un numero: "; cin>> cubo;
			cout<<"\nEl cubo de este numero es: "<< cubo * cubo * cubo<<endl;
			break;
		case 2: 
			cout<<"\nDigite un numero: "; cin>>n_par_impar;
			if(n_par_impar %2 == 0){
				cout<<"\nEl numero es par."<<endl;
			}
			else{
				cout<<"\nEl numero es impar."<<endl;
			}
			break;
		case 3: break;
	}

	return 0;
}
