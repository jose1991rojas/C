/*
5. Desarrolle un programa que lea de la entrada estandar un vector de enteros
y determine el mayor elemento del vector.
*/

#include<iostream>
#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
	int numeros[100], n, mayor = 0;
	
	cout << "Digite el numero de elementos del arreglo o vector unidimensional: ";
	cin >> n;
	
	for(int i = 0 ; i < n; i++ ){
		cout<< "\n" << i + 1 << ". Digita un numero: "; //1. Digite un numero: ...
		cin >> numeros[i];
		
		//Para determinar el elemento mayor hago lo siguiente:
		//1 2 4 10 5
		if(numeros[i] > mayor){
			mayor = numeros[i]; //El 10 seria el mayor.
		}
	}
	
	cout << "\nEl elemento mayor del vector es: " << mayor<< endl;
	
	getch();
	//system("pause");
	return 0;
}
