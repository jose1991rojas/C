/*5. Escriba un programa que lea valores enteros hasta que se introduzca un
valor en el rango 20-30 o se introduzaca el valor 0. EL programa debe
entregar la suma de los valores mayores a 0 introducidos.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numero, suma;
	
	do{
		cout<<"Introduce un numero: "; cin>>numero;
		suma+= numero;
		
	}while( ( (numero < 20) || (numero > 30) ) && (numero != 0) ); 
	
	cout<<"\nLa suma es: "<<suma<<endl;

	system("pause");
	return 0;	
}

