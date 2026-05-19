/*
Ordenamiento por Insercion
*/

#include<iostream>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
   int numeros[] ={5,3,4,1,2};
   int i, pos, aux;

   for(i = 0; i < 5; i++){
       pos = i;
       aux = numeros[i];

       while((pos > 0) && (numeros[pos - 1] > aux)){
           numeros[pos] = numeros[pos - 1];
           pos--;
       }
       numeros[pos] = aux;
   }
    cout << "\nOrden ascenso: ";
    for(i = 0; i < 5; i++){
        cout << numeros[i];
    }

    cout << "\n";

    cout << "\nOrden descenso: ";
    for(i = 4; i >= 0; i--){
        cout << numeros[i];
    }
    
    cout << "\n";

    //getch();
    //system("pause");
    return 0;
}
