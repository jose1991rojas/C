/*
Escriba un programa que calcule el valor 
de: 
1! + 2! + 3!+...+n!
(Suma de factoriales)
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, factorial = 1, suma = 0;
	
	cout << "Digite un numero: "; 
	cin >> numero;
	
	for(int i = 1; i <= numero; i++){
		factorial *= i;
		suma += factorial;
	}
	
	cout << "\nLa suma de factorial es: "<< suma << endl;
	
	
	
	
	
	getch();
	system("Pause");
	return 0;
}
