/*
La sentencia for

for(expr1; expresion logica; expr2){
	conjunto de instrucciones;
}
*/

#include<iostream>
#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
	int i;
	
	// Ejemplo #1.
	for(i = 1; i <= 10; i++){
		cout << i << endl;
	}
	
	cout <<"\n";
	cout << "\tOtra operacion con el for" << endl;
	cout <<"\n";
	
	// Ejemplo #2.
	for(i = 10; i >= 1; i--){
		cout << i << endl;
	}

	
	getch();
	//systemp("pause");
	return 0;
}


