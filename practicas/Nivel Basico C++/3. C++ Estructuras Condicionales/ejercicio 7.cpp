/*7. Escriba un programa que solicite
 una edad (un entero) e indique en la
 salida estandar si la edad introducida
esta en el rango [18-25].*/

#include <iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Digite su edad: "; cin>>edad;

/*
	if(edad>=18 && edad<=25){
		cout<<"\nSu edad esta en el rango de 18-25.";
	}
	else{
		cout<<"\nSu edad no esta en el dicho rango.";
	}
*/


	//Otra solucion:
	
	switch(edad){
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25: cout<<"\nEsta en el rango indicado 18-25."; break;
		default: cout<<"\nNo esta en el rango indicado"; break;
	}

	return 0;
}




