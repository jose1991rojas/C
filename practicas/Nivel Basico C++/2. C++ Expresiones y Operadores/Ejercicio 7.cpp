/*7. La calificacion final de un estudiante es la media ponderada de tes notas
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un 60% 
y la nota de participacion que cuenta el 10% restante. Escriba un programa
que lea de la entrada estandar las tres notas de un alumno y escriba en la salida
 estandar su nota final.*/

#include <iostream>

using namespace std;
int main(){
	float practicas, teorica, participacion, nota_final;
	
	cout<<"Digite la nota de practicas: "; cin>>practicas;
	cout<<"Digite la nota de teorica: "; cin>>teorica;
	cout<<"Digite la nota de participacion: "; cin>>participacion;
	
	practicas *= 0.30; //practicas = practicas * 0.30
	teorica *= 0.60;
	participacion *= 0.10;
	
	nota_final= (practicas + teorica + participacion)/3;
	
	cout.precision(3);
	cout<<"\nNota final del alumno: "<<nota_final<<endl;
	
	return 0;
}


