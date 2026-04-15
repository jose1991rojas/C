/*
Ejercicio 4:
Escriba un programa que tome cada 4 horas la temperatura exterior,
leyendola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del dia, la temperatura mas alta y la mas baja.
*/

#include<iostream>

using namespace std;

int main(){
    float temperatura, suma = 0, mayor = -999, menor = 999;
    
    for(i = 1; i <= 6; i++){
    	cout << i << ". Digita una temperatura: " << i*4;
    	
    	// Suma para el calculo del promedio.
    	suma += temperatura;
    	
    	// Condicional para encontrar la temperatura mayor.
	    if(temperatura > mayor){
    		mayor = temperatura; 
   		 }
    	
    	// Condicional para encontrar la temperatura menor.
    	if(temperatura < menor){
    		menor = temperatura;
    	}

    }
    
    // Salida estandar de los resultados de las variables.
    cout << "\n-----Resultados-----"<< endl;
	cout << "Temperatura medias es: "<< suma/6 << °C << endl;
    cout << "Temperatura mayor es: "<< mayor << °C << endl;
    cout << "Temperatura menor es: "<< menor << °C << endl;
    
        


    return 0;
}

