/*Escriba un programa que lea la nota
final de cuatro alumnos y calcule
la nota final media de los cuatro
alumnos.*/

#include <iostream>

using namespace std;

int main(){
	float a1, b2, c3, d4, media=0;
	
	cout<<"Digite el valor de a1: "; cin>>a1;
	cout<<"Digite el valor de b2: "; cin>>b2;
	cout<<"Digite el valor de c3: "; cin>>c3;
	cout<<"Digite el valor de d4: "; cin>>d4;
	
	media = ((a1+b2+c3+d4)/4);
	
	cout<<"\nNota final media de los 4 alumnos: "<< media<<endl;
	
	return 0;
}
