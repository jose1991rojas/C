/*
Ejercicio 6:
Escriba un programa que calcule x^y,
donde tanto x como y son enteros positivos, sin utilizar la funcion pow.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int x, y;
    long resultado = 1; // Usamos long por si el número crece mucho
    
    // Validación: Pedir datos hasta que sean positivos
    do{
        cout << "Ingrese la base (x) positiva: "; cin >> x;
        cout << "Ingrese el exponente (y) positivo: "; cin >> y;
        
        if(x <= 0 || y <= 0){
            cout << "\nPor favor, ingrese solo enteros positivos.\n";
        }
    } while(x <= 0 || y <= 0);
    
    // Estructura repetitiva para calcular la potencia
    for(int i = 1; i <= y; i++){
        resultado = resultado * x;
    }
    
    cout << "\nEl resultado de " << x << "^" << y << " es: " << resultado << endl;
    
    return 0;
}
