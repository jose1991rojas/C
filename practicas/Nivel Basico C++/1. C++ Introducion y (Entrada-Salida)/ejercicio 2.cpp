/*Escribe un programa que lea de la entrada el
precio de un producto y muestre en la salida
estandar el precio del producto al aplicarle el IVA.*/

#include <iostream>;

using namespace std;

int main(){
	float psiniva,iva,pconiva;

	cout<<"Precio sin IVA: "; cin>>psiniva;
	cout<<"\nValor del IVA: "; cin>>iva;
	
	pconiva = psiniva * iva;
	
	cout<<"\nPrecio con IVA: "<<pconiva<<endl;	
	
	return 0;
}
