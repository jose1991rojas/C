/*
Ejercicio 6:

Escriba un programa que lea la nota final de cuatro alumnos y calcule la
nota final media de los cuatro alumnos.
*/

#include<iostream>

using namespace std;

int main(){
	float alumno_1 = 0, alumno_2 = 0, alumno_3 = 0, alumno_4 = 0, media = 0;
	
	cout <<"Nota del alumno 1: "; cin >> alumno_1;
	cout <<"Nota del alumno 2: "; cin >> alumno_2;
	cout <<"Nota del alumno 3: "; cin >> alumno_3;
	cout <<"Nota del alumno 4: "; cin >> alumno_4;
	
	//Resultados de la operacion
	cout.precision(2);
	media = ( alumno_1 + alumno_2 + alumno_3 + alumno_4 ) / 4;
	cout << "\nNota final media de los 4 alumnos: "<< media;
	
	return 0;
}
