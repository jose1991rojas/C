/*
Ejercicio 1:

Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar
la longitud de la cadena, y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario
no mostrarla.
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char cadena[100];
    int largo = 0;

    cout << "Digita una cadena de caracteres: " << endl;
    cin.getline(cadena, 100); 

    largo = strlen(cadena);

    //cout <<"\nLa longitud de la cadena es: \n" << largo;

    if(largo > 10 ){
        cout << "\nEl largo de la cadena es mayor a  10, es: " <<largo;    
    }
    else{
        cout << "\nNo es mayor a 10 el largo de la cadena.";
    }

 
    //getch();
    //system("pause");
    return 0;
}
