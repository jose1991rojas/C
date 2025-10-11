/*Bloque 3. Estructura condiciones.
Ejercicio 8.

Escribe un programa que lea de la
entrada estandar tres numeros. Despues
debe leer un cuarto numero e indicar si
el numero coincide con alguno de los
introducidos con anterioridad.*/

#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3, n4;
	
	cout<<"Digite 4 numeros: "; cin>>n1>>n2>>n3>>n4;
	
	if(n4==n1 || n4==n2 || n4==n3){
		cout<<"\nSi conincide con uno de los numeros digitados."<<endl;
	}
	else{
		cout<<"\nNo coincide con los numeros digitados."<<endl;
	}
	
	return 0;
}
