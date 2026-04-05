/*
	do{
		conjunto de instrucciones;
	}while(expresion logica);
*/

#include<iostream>

using namespace std;

int main(){
	int i;
	
	i = 1;
	
	//Si quieres hacer lo opuesto
	//i = 10;
	
	do{
		cout << i << endl;
		i++;
		
	}while(i <= 10);
	
	//Si quieres hacer lo opuesto
	/*
		do{
		cout << i << endl;
		i--;
		
	}while(i >= 1);
	*/
	return 0;
}
