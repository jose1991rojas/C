/*
Invertir una cadena - Función strrev();
*/

#include<iostream>
#include<string.h>
#include<ruzza.h> // Mi propia libreria de funciones antiguas no estandar actual, path: /usr/local/include/ruzza.h Ing. Jose Rojas Ruzza / joserojas520@gmail.com
//#include<algorithm> // Librerianativa para invertir strings
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char cad[] = "Jose";

    strrev(cad); // Esto ya no es standar

    // Uso de funcion nativa reverse '(string.begin() , string.end());'
    // Forma global que me funciono reverse(begin(string) , end(string) -1);
    //reverse(begin(cad) , end(cad) -1);

    // Mostrando en pantalla la funcion reverse
    cout << cad << endl;

    return 0;
}
