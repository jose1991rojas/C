/*
Ejercicio 2:

Escribe un programa que lea de la entrada estandar el precio de
un producto y muestre en la salida estandar el precio del 
producto al aplicarle el iva.
*/

#include<iostream>

using namespace std;

int main(){
	
	float precio, iva, operacion, valor; 
	
	// Salidas y entradas
	cout <<" Producto introduce su precio: "; cin >> precio;
	
	cout <<" Introduce el valor del iva: "; cin >> iva; 
	
	// Operaciones aritmeticas
	operacion = precio * ((iva/100));
	 
	valor = precio + operacion; 
	
	cout << "\n iva: " << operacion << endl;

	// Mostrando en patalla lo solicitado producto con iva.
	cout << "\n Precio del producto + iva: " << valor << endl; 
	
	return 0;
}
