/*
3. Realice un programa que lea de la entrada estandar los siguientes datos de 
una persona:

	Edad: dato de tipo entero.
	Sexo: dato de tipo caracter.
	Altura en metros: dato de tipo real.
	
Tras leer los datos, el programa debe mostrarlos en la salida estandar.
*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo [10];
	float altura;
	
	//Solicitando datos de entrada y salida.
	cout << "\nIndica tu edad: "; cin >> edad;
	cout << "\nIndica tu sexo Masculino o Femenino: "; cin >> sexo;
	cout << "\nIndica tu altura en metros (0.00 m): "; cin >> altura;
	
	//Salida de los datos solicitados...
	cout << "\nMostrando datos ingresados: "<< endl; 
	cout << "\n";
	cout << "Edad ingresada es: " << edad << endl; 
	cout << "Sexo ingresado es: " << sexo << endl; 
	cout << "Altura ingresada en metro es: " << altura << endl; 
		
	return 0;
}
