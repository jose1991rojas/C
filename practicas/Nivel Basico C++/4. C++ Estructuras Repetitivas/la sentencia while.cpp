/*La sentencia while:
			
	while (expresion logica){
		conjunto de instrucciones;
	}		
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int i;
	
	/*
	i= 1;
	
	while(i<=10){
		cout<<"\nEl valor de i es: "<<i;
		i++;
	}
	*/
	
	//While() con iteracion negativa i:
	
		i= 10;
	
	while(i>=1){
		cout<<"\nEl valor de i es: "<<i;
		i--;
	}
	
	getch();
	return 0;
}



