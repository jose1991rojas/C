/*
Ejercicio 7:

Pedir su nombre al usuario en MAYÚSCULA,
si su nombre comienza por la letra A,
convertir su nombre a minusculas, caso
contrario no convertirlo.
*/

#include<iostream>
#include<string.h>
#include<ruzza.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char nombre[100];

    cout << "Digite su nombre en MAYÚSCULAS: ";
    cin.getline(nombre , 100);

    if(nombre[0] == 'A'){
        strlwr(nombre);
        cout << "\n";
        cout << nombre<< endl;
    }
    else{
        cout << "\nSu nombre no comienza con 'A': " << nombre << endl;
    }

    //getch();
    //system("pause");
    return 0;
}
