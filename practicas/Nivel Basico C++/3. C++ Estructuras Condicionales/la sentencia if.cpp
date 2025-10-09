/* La sentencia if
		
		if(condicion){
			instruccion 1;
		}
		else{
			instruccion 2;
		}
		
		*/
		
#include <iostream>
	
using namespace std;

int main(){
	int numero, dato=5;
	
	cout<<"Digite und numero: "; cin>>numero;
	
	/* Operadores de Comparación Estos símbolos comparan 
	dos valores y el resultado es siempre un valor booleano 
	(true o false):
	 
	1.	> : Mayor que (ej: a > b)
	2.	< : Menor que (ej: a < b)
	3.	>= : Mayor o igual que (ej: a >= b)
	4.	<= : Menor o igual que (ej: a <= b)
	5.	== : Igual que (ej: a == b)
	6.	!= : Distinto que (ej: a != b)
	*/	
	
	// 1. Condicional ==
/*	if(numero == 5){
		cout<<"El numero es 5";
	}
	else{
		cout<<"El numero no es 5";
	}
	
		cout<<"Digite und numero: "; cin>>numero;
*/
	
	// 2. Condicional !=
/*	if(numero != 5){
		cout<<"\nEl numero es distinto de 5";
	}
	else{
		cout<<"\nEl numero es 5";
	}
*/
	
	// 3. Condicional <
/*	if(numero < 5){
		cout<<"\nEl numero es menor que 5";
	}
	else{
		cout<<"\nEl numero es mayor a 5";
	}
*/	
	// 4. Condicional <=
/*	if(numero <= 5){
		cout<<"\nEl numero es menor o igual a 5";
	}
	else{
		cout<<"\nEl numero es mayor a 5";
	}
*/
	
	// 5. Condicional >
/*	if(numero > 5){
		cout<<"\nEl numero es mayor a 5";
	}
	else{
		cout<<"\nEl numero es menor a 5";
	}
*/	
			
	// 6. Condicional >=
	if(numero >= 5){
		cout<<"\nEl numero es mayor o igual a 5";
	}
	else{
		cout<<"\nEl numero es menor a 5";
	}
	
	return 0;
}
	
		
