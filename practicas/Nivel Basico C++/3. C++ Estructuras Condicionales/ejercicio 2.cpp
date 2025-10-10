/*2. Escriba un programa que lea tres numeros
 y determine cual de ellos es el mayor*/


#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	
	cout<<"Digite 3 numeros: ";
	cin>> n1>> n2 >> n3;
	
	if(n1>n2 && n1>n3){
		cout<<"El numero mayor es: "<<n1;
	}
	else if (n2>n1 && n2>n3){
		cout<<"El numero mayor es: "<<n2;
	}
	else{
		cout<<"El numero mayor es: "<<n3;
	}
	
	return 0;
}


//Programa para N variables:

/*
int main(){
	int n1, n2, n3, n4, n5;
	
	cout<<"Digite 5 numeros: ";
	cin>> n1>> n2>> n3 >>n4 >> n5;
	
	if(n1>n2 && n1>n3 && n1>n4 && n1>n5){
		cout<<"El numero mayor es: "<<n1;
	}
	else if (n2>n1 && n2>n3 && n2>n4 && n2>n5){
		cout<<"El numero mayor es: "<<n2;
	}
	else if (n3>n1 && n3>n2 && n3>n4 && n3>n5){
		cout<<"El numero mayor es: "<<n3;
	}
	else{
		cout<<"El numero mayor es: "<<n5;
	}
	
	return 0;
} 
*/
