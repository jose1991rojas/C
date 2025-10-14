/*La sentencia do while

	do{
		conjunto de instrucciones;
	}while(){
		conjunto de instrucciones;
	}

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int i;
	
	i = 10;
	
	do{
		cout<<i<<endl;
		i--; //decrementa el iterador de una en una
	}while(i>=1);

	system("pause");
	return 0;
}


