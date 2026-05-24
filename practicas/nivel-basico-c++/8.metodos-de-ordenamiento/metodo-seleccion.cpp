/*
Metodo de ordenamiento por seleccion.
*/

#include<iostream>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    int numeros [] = {3,2,1,5,4};
    int i, j, aux, min;

    // Algoritmo del ordenamiento por Selección
    for(i = 0; i < 5; i++){
        min = i;
        for(j = i + 1; j < 5; j++){
            if(numeros[j] < numeros [min]){
                    min = j;
            }
            
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }

    cout << "\nOrden ascendente: ";
    for(i = 0; i < 5; i++){
        cout << numeros[i] << " ";
    }

    cout << "\nOrden descendente: ";
    for(i = 4; i >= 0; i--){
        cout << numeros[i] << " ";
        }

    //getch();
    //system("pause");
    return 0;
}
