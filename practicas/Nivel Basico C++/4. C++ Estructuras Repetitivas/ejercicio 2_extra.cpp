/*Ejercicio 2:
Realice un programa que lea de la entrada
estandar numeros hasta que se 
introduzca un cero. En ese momento el
programa debe terminar y mostrar en la 
salida estandar el numero de valores 
mayores que cero leidos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero;          
    int contador = 0;
	
	do{
		cout<<"Digite un numero: "; cin>> numero;
		
		
		
		if(numero>0){
			contador++;
		}
		
	}while(numero!=0);   
	
	
    cout<<"\nEl numero de valores leidos mayores a cero es: "<< contador<<endl;
    
    system("pause");
    return 0;
}

