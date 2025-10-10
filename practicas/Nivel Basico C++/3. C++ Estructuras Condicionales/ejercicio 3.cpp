/*3. Realice un programa que lea un valor
 entero y determine si se trata de
 un numero par o impar.*/
 
 #include <iostream>
 
 using namespace std;
 
 int main(){
 	int numero;
 	
 	cout<<"Digite un numero: "; cin>>numero;
 	
 	
 	if(numero==0){
 		cout<<"El numero es igual a 0.";
 	}
 	else if(numero%2==0){
 		cout<<"EL numero es par.";
 	}
 	else{
 		cout<<"Si no el numero es inpar.";
 	}
 	
 	return 0;
 }
