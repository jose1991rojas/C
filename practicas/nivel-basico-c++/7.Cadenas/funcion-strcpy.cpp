/*
Copiar el contenido de una cadena a otra - Funcion strcpy();
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char nombre[] = "Jose";
    char nombre_2[20];

    // strcpy(); how work?, 1 st put the array empty in position 1 (one) next, put the 2 sd array full in position 2 (two).
    strcpy(nombre_2, nombre);

    cout << nombre_2 << endl;

    //getch();
    //system("pause");
    return 0;
}
