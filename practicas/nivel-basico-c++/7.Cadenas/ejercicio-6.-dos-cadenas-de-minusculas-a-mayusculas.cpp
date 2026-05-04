/*
Ejercicio 6:

Convertir dos cadena de minusculas a MASYUSCULAS. Compararlas, y decir si son iguales o no.
*/

#include<iostream>
#include<string.h>
#include<ruzza.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char cad1[100];
    char cad2[100];

    cout << "\nDigite la cadena uno: " << endl;
    cin.getline(cad1 , 100);
    cout << "\nDigite la cadena dos: " << endl;
    cin.getline(cad2 , 100);

    strupr(cad1);
    strupr(cad2);

    if(strcmp(cad1 , cad2) == 0 ){
        cout << "\n Las cadenas son iguales: " << cad1 << " y" << " " << cad2 << endl;
    }
    else{
        cout <<"\n No son iguales las cadenas: " << cad1 << " y" << " " << cad2 << endl;
    }
        
    //getch();
    //system("pause");
    return 0;
}
