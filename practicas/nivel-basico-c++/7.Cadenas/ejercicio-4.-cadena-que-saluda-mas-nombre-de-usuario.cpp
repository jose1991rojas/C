/*
Ejercicio 4:

Crea una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para
preguntar al usuario su nombre, por ultimo añadir el nombre al final de la primera cadena
y mostrar el mensaje completo "Hola que tal (NombreDelUsuario)."
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char cad1[] = "Hola que tal ";
    char cad2[100];
    char cad3[100];

    cout << "\nDigita tu nombre: ";
    cin.getline(cad2,100);

    strcpy(cad3 , cad1); // cad3 = "Hola que tal"

    strcat(cad3 , cad2);

    cout <<"\n";
    cout << cad3 << endl ;

    //getch();
    //system("pause");
    return 0;
}
