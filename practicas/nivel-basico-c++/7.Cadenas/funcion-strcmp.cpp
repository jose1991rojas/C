/*
Comparar cadenas - Funcion strcmp();
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char palabra1[] = "Zola";
    char palabra2[] = "Hola";

    if(strcmp(palabra1, palabra2) > 0){
        cout << palabra1 << " esta despues alfabeticamnete";
    }

    //getch();
    //system("pause");
    return 0;
}
