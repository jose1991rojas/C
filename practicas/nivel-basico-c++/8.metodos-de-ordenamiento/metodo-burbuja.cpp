/*
Método burbuja
*/

#include<iostream>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    int numero[] ={5, 1, 4, 2, 3};
    int i, j, aux;

    // Algoritmo del metodo burbuja
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(numero[j] > numero[j + 1]){
                aux = numero[j];
                numero[j] = numero[j + 1];
                numero[j + 1] = aux;
            }
        }
    }
    
   // Orden Ascendente
   cout << "\nOrden ascendente: ";
   for(i = 0; i < 5; i++){
       cout << numero[i] <<" ";
   }

   cout << "\n";

   // Orden descendente
   cout << "\nOrden descendente: ";
   for(i = 4; i >= 0; i--){
       cout << numero[i] <<" ";
   }

    cout << "\n";

    //getch();
    //system("pause");
    return 0;
}
