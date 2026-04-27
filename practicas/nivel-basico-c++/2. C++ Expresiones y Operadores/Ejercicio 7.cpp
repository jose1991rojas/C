/*
7. La calificacion final de un estudiante es la medio ponderada de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participacion que cuenta el 10% restante. Escriba un programa
que lea de la entrada estandar las tres notas  de un alumno y escriba en la salida
estandar su nota final.
*/

#include<iostream>

using namespace std;

int main(){
	float practicas, teorica, participacion, nota_final;
	
	cout << "Nota de practicas: "; cin >> practicas;
	cout << "Nota de teorica: "; cin >> teorica;
	cout << "Nota de participacin: "; cin >> participacion;
	
	practicas *= 0.30;
	teorica *= 0.6;
	participacion *= 0.10;
	
	nota_final = practicas + teorica + participacion;
	
	cout << "\nLa nota final es: " << nota_final;
	
	return 0;
}
