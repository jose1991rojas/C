/*5. Escriba un fragmento de programa que intercambie los valores de dos
variables.*/

#include <iostream>

using namespace std;

int main(){
	int x, y, aux;
	
	cout<<"Digita los valores de x: "; cin>>x;
	cout<<"Digita los valores de y: "; cin>>y;
	
	aux=x;
	x=y;
	y=aux;
	
	cout<<"\nEl valor de x es: "<<x;
	cout<<"\nEl valor de y es: "<<y<<endl;
	
	return 0;
} 
