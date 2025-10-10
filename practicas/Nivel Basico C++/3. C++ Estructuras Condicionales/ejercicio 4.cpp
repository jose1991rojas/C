/*Bloque 3. Ejercicio 4.
Estructura condicionales.

Comprobar si un numero digitado
por el usuario es positivo o negativo.
*/

#include <iostream>

using namespace std;
	
int main(){
	int numero;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero==0){
		cout<<"\nEl numero es igual a 0.";
	}
	else if(numero < 0){
		cout<<"\nEl numero es negativo.";
	}
	else{
		cout<<"\nEl numero es positivo.";
	}
	
	return 0;
}
