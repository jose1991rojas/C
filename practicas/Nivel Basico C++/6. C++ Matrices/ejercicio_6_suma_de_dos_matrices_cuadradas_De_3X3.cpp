/*Ejercicio 6:

Realice un programa que calcule la suma de dos matrices cuadradas de 3X3.
*/

#include<iostream>
//#include<stdlib.h>
//#include<conio.h>

using namespace std;

int main(){
    int matriz_1[3][3]={{2,0,1},{3,0,0},{5,1,1}};
    int matriz_2[3][3]={{1,0,1},{1,2,1},{1,1,0}};
    
    // Mostrando las 2 matrices
    cout << "\nMatriz 1\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz_1[i][j] << " ";
        }
        cout << "\n";
    }

     cout << "\nMatriz 2\n";
   for(int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
           cout << matriz_2[i][j] << " ";
       }
       cout << "\n";
   }

    // Sumando matrices
    cout << "\nSumando matrices\n";
    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < 3; j++){
            cout << matriz_1[i][j] + matriz_2[i][j] << " ";
       }
        cout << "\n";
   }

    //system("pause");
   // getch();
    return 0;
}

