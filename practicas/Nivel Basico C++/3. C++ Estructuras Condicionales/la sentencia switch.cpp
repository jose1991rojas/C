/*La sentencia switch
	
	switch(expresion){
		case literal 1: conjunto de instrucciones; break;
		case literal 2: conjunto de instrucciones; break;
		case literal n: conjunto de instrucciones n; break;
		default: conjunto de instrucciones por defecto; break;
	}
	
	Otra forma de hacerlo legible:
	
	La sentencia switch
	
	switch(expresion){
		case literal 1: 
			conjunto de instrucciones; 
			break;
		case literal 2: 
			conjunto de instrucciones; 
			break;
		case literal n: 
			conjunto de instrucciones n; 
			break;
		default: 
			conjunto de instrucciones por defecto; 
			break;
	}
	*/
	
#include <iostream> //Biblioteca para las entradas y salidas de datos de cout y cin.

using namespace std; /*	Esto evita que en cada palabra dedicada de c++ 
						evitemos colocar "std::", lo importante  es evitar
						hacer variables con nombre de palabras dedicas en c++.*/
						

int main(){	//Funcion principal int main() {}
	int numero=0; //variable
	
	cout<<"\n Opciones de caso validos: "<<endl; //Opciones de casos.
	cout<<"\n Caso 1."<<endl;
	cout<<"\n Caso 2."<<endl;
	cout<<"\n Caso 3."<<endl;
	cout<<"\n Caso 4."<<endl;
	cout<<"\n Caso 5."<<endl;
	
	//Caso a digitar:
	cout<<"\nDigite un numero entre 1-5 de la lista de casos: "; cin>>numero; //Guardado del valor de la variable numero
	
	//Casos de salida de la funcion switch(){}:
	switch(numero){
		case 1: cout<<"\nEs el caso 1."<<endl;break;
		case 2: cout<<"\nEs el caso 2."<<endl;break;
		case 3: cout<<"\nEs el caso 3."<<endl;break;
		case 4: cout<<"\nEs el caso 4."<<endl;break;
		case 5: cout<<"\nEs el caso 5."<<endl;break;
		default: cout<<"\nEste caso no existente, entre 1-5 de las opciones de casos."<<endl;break;
	}	
	
	return 0; /*Nos indica que el programa termino satisfactoriamente,
			    y es una buena practica*/.
}
	

