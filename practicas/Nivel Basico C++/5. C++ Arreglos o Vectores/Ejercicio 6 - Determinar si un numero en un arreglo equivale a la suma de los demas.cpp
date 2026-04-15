/*
Ejercicios 6:
Escribe un programa que defina un vector de
numeros y calcule si existe algun numero en el vector cuyo valor
equivale a la suma del resto de numeros del vector.
*/

#include<iostream>
//#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[100], n, suma = 0, mayor = 0;
	
	//Una combinacion de 5 elementos: numeros[5] = {1,2,3,4,10}
	cout << "Digita el numero de elementos del vector unidimensional o el arreglo: " ;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cout << "\n" << i + 1 << ". Digite un numero: ";
		cin >> numeros[i];
		suma += numeros[i];
		
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
			
	}
	
	// Se hace el resto del mayor con la suma de los elementos del vector.
	if(mayor == (suma - mayor) ){
		cout << "\nEl mayor " << mayor << " es la suma de los demas elementos del vector." << endl;
	}
	else{
		cout << "\nNo existe ningun numero que sea la suma de los elementos del vector." << endl;
	}
	
	//getch();
	system("Pause");
	return 0;
}
