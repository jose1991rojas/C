/*
Ejercicio 5:

Hacer un programa que determine si una 
palabra es políndroma
*/

#include<iostream>
#include<string.h>
#include<algorithm>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char cad[100];
    char polindroma[100];

    cout << "Digita una palabra: ";
    cin.getline(cad , 100);
    
    strcpy(polindroma, cad);

    reverse(polindroma , polindroma + strlen(polindroma));

    if(strcmp(cad , polindroma ) == 0){
        cout << "\nLa palabra es polindroma: " << cad << endl;
    }
    else{
        cout << "La palabra no es polindroma: " << cad << endl;
    }

    //getch();
    //system("pause");
    return 0;
}
