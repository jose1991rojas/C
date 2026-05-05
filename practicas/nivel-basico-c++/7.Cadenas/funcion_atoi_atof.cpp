/*
Transformar una cadena a numeros - Funcion atoi() y atof()
string = "123" -> 123
string = "123.43" -> 123.34
*/

#include<iostream>
//#include<coni.h>
#include<stdlib.h> // Para que funcionen las funciones atoi(); y atof();

using namespace std;

int main(){
    char cad[] = "123";
    int numero;
    //float numero; // Para flotantes

    numero = atoi(cad);

  //numero = atof(cad); // Para flotantes

    cout << cad << endl;

    //getch();
    //system("pause");
    return 0;
}
