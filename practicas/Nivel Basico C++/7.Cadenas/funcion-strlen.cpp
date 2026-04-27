/*
Longitud de una cadenas de caracteres - Función strlen()
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char palabra[] = "Jose";
    int numero = 0;

    numero = strlen(palabra);

    cout << "\nLongitud de la cadena es: " << numero << endl;
    
    //getch();
    //system("pause");
    return 0;
}
