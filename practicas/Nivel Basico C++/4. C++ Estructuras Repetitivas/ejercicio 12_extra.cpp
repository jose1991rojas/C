/*
Bloque 4. Estructuras Repetitivas
Ejercicio 12:

Hacer un programa que calcule el
resultado de la siguiente expresion: 
1-2+3-4+5-6...n
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int n, suma = 0; 
    
    do{
    	cout<<"\nIngresa un numero de elementos: ";cin>>n;
    	
    	if(n<0){
    		cout<<"\nIngresa un valor positivo entero, intenta de nuveo: "<<endl;
    	}
    	
    }while(n<0);
    
    cout<<"\nSerie: "<<endl;
    
    for(int i=1; i<=n; i++){
    	
    	if(i % 2 != 0){ //si es numero impar.
    		suma += i; 	//entonces suma.
    		
    		if(i>1){ //si no es el primer termino coloca el simbolo +.
    			cout<< "+" <<i;
    		}else{
    			cout<<i; //si es el primer termino solo el imprime su valor
    		}
    	}else{ //si el numero es par entonces resta.
    		suma -=i;
    		cout<< "-" <<i; //imprime el simbolo "-" y imprime su valor "i" del iterador.
    	}
			
    }
 
 	//Aqui solo unos arreglos para mostrar el resultado de la suma   
    cout<<"\n------------------------------------------------"<<endl;
    cout<<"\nEL resultado final de la suma es: "<<suma<<endl;
   	cout<<"\n------------------------------------------------"<<endl;
   	
    system("pause");
    return 0;
   
   
   
   
   
   
   
   
   
   
   
   
   
   /* 
    // CORRECCIÓN: La validación do-while
    do {
        // La lectura de 'n' debe ir dentro del 'do' para permitir la corrección
        cout << "Ingrese el valor limite (n) para calcular la serie 1-2+3-4+...+n (n >= 0): "; cin >> n;
        
        // Mensaje de error solo se muestra si la entrada es inválida
        if (n < 0) {
             cout << "\nERROR: El limite debe ser un numero positivo (n >= 0). Intente de nuevo: \n" << endl;
        }

    // El bucle se repite MIENTRAS 'n' sea menor a 1 (Inválido).
    } while (n < 0);
    
    
    cout << "\nSerie: "<<endl;
    
    // Paso 2: Usar el bucle for para iterar desde 1 hasta 'n'.
    for(int i = 1; i <= n; i++){
        
        // Paso 3: Usar el operador módulo (%) para alternar el signo.
        if (i % 2 != 0) { // Si 'i' es IMPAR (1, 3, 5...), SUMAR
            suma += i;
            // Solo muestra el signo '+' si no es el primer término
            if (i > 1) { 
                cout << "+" << i;
            } else {
                cout << i;
            }
        } else {        // Si 'i' es PAR (2, 4, 6...), RESTAR
            suma -= i;
            cout << "-" << i; 
        }
    }
    
    cout << "\n----------------------------------------------------" << endl;
    cout << "El resultado final es: " << suma << endl;
    cout << "----------------------------------------------------" << endl;

    
    system("pause");
    return 0;
    */
    
}
