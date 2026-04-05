/*
Ejercicio 2:
Escribe un programa que defina un vector de numeros y calcule la 
multiplicacion acumulada de sus elementos.
*/

#include<iostream>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5};
	int multiplicacion = 1 ;
	
	for(int i =0; i <5; i++){
		multiplicacion *= numeros[i];
	}
	
	cout <<"\nLa multiplicacion es: "<< multiplicacion << endl;
	
	//getch();
	//system("pause");
	return 0;
}
