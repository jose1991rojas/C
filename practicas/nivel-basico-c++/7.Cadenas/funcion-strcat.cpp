/*
Añadir o concatenar una cadena con otra - función strcat()
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char cad1[] = "Esto es una cadea";
    char cad2[] = " de ejemplo";
    char cad3[30];

    strcpy(cad3, cad1); //cad3 = "Esto es una cadena"
    
    strcat(cad3, cad2);
    
    cout <<"\n";
    cout << cad3 << endl;
    return 0;
}
