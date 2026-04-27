/*
Ejercicio 2:
 Realice un programa que lea de la entrada estandar numeros hasta que se introduzca
 un cero. En ese momento el programa debe terminar y mostrar en la salida estandar el 
 numero de valores mayores que cero leidos.
*/

#include<iostream>
//#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
int numero, contador = 0;

do{
	cout << "\nIngresa un numero: " << endl;
	cin >> numero;
	
	if( numero > 0 ){
		cout << "\nHas digitado un numero mayor a cero, si deseas salir del programa digita 0." << endl;
		cout << "\nO" << endl;
		contador ++;
		
	}
	else if( numero < 0){
		cout << "\nHas digitado un numero negativo no se contara." << endl;
	}
			
}while(numero != 0 );

	cout << "\nNumero de veces que se introdujeron numeros mayores a cero 0: " << endl;
	cout << contador << " veces." << endl;
	
//	getch();
	system("pause");
	return 0;
}
