/*
Invertir una cadena - Función strrev();
*/

#include<iostream>
#include<string.h>
#include<algorithm> // Librerianativa para invertir strings
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char cad[] = "Jose";

    //strrev(cad); esto ya no es standar

    // Uso de funcion nativa reverse '(string.begin() , string.end());'
    // Forma global que me funciono reverse(begin(string) , end(string) -1);
    reverse(begin(cad) , end(cad) -1);

    // Mostrando en pantalla la funcion reverse
    cout << cad << endl;

    return 0;
}
