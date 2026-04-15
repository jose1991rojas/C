/*
3. Realice un programa que calcule y muestre en la salida estandar la suma
de los cuadrados de los 10 primeros enteros mayores que cero.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
//Ten en cuenta que las librerias hacen mas lento un software...
//#include<cmath> 

using namespace std;

int main(){
	int cuadrado = 0, suma = 0;
	
	for(int i = 1; i <= 10; i++){
		cuadrado = i * i;
		suma += cuadrado; // suma = suma + cuadrado;
	} 
	
	cout << "\nLa suma total de los cuadrados es: " << suma << endl;
	
	getch();
	system("pause");
	return 0;
}
