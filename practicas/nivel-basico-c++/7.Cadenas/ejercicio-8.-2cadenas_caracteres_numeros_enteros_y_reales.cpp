/*
Ejercicio 8:

Pedir al usuario 2 cadenas de caracteres de numeros,
uno entero y el otro real, convertirlos a sus respectivos valores y 
por ultimo sumarlos.
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    char cad1[100];
    char cad2[100];
    int num1;
    float num2;
    float suma;

    cout << "\nDigita una cadena de caracteres de numeros enteros: " << endl;
    cin.getline(cad1 , 100);
    cout <<  "\nDigita una cadena de caracteres de numeros reales: " << endl;
    cin.getline(cad2 , 100);

    num1 = atoi(cad1);
    num2 = atof(cad2);

    suma = num1 + num2;

    cout << "\nResultado de la suma de las cadenas: " << suma;
    
    //system("pause");
   //getch(); 
   return 0;
}
