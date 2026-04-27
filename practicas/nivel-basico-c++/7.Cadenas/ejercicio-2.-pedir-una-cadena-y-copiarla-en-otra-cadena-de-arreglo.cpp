/*
Ejercicio 2:

Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres.
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char arreglo[100];
    char arreglo_2[100];

    cout << "Digita una cadena de caracteres: "; 
    cin.getline(arreglo, 100);

    strcpy(arreglo_2, arreglo);
    
    cout << "\n";

    cout << arreglo_2 << endl;

    //getch();
    //system("pause");
    return 0;
}
