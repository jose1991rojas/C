/*
Ejercicio 3:

Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso 
de no serlo, indicar cual es mayor alfabeticamente.
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char string1[100];
    char string2[100];

    cout << "Digita la primera cadena de caracteres: " << endl;
    cin.getline(string1, 100);
    cout << "\nDigita la segunda cadena de caracteres: " << endl;
    cin.getline(string2, 100);

    if(strcmp(string1, string2) == 0){
        cout << "\nAmbas cadenas son iguales.";
    }
    else if(strcmp(string1, string2) > 0){
        cout << string1 << " es mayor alfabeticamente." << endl;
    }

    else{
        cout << string2 << " es mayor alfabeticamente." << endl;
    }
    
    //getch();
    //system("pause");
    return 0;
}
