/*
Ejercicio 10:

Mostrar los meses del año, pidiendole al usuario
un numero entre (1-12),
y mostrar el mes al que corresponde.
*/

#include<iostream>

using namespace std;

int main(){
	int mes;
	
	cout << "Coloca un mes del 1 al 12: "; cin >> mes;
	
	switch(mes){
		case 1: cout << "\nEs el mes Enero. " << mes << endl; break;
		case 2: cout << "\nEs el mes Febrero. " << mes << endl; break;
		case 3: cout << "\nEs el mes Marzo. " << mes << endl; break;
		case 4: cout << "\nEs el mes Abril. " << mes << endl; break;
		case 5: cout << "\nEs el mes Mayo. " << mes << endl; break;
		case 6: cout << "\nEs el mes Junio. " << mes << endl; break;
		case 7: cout << "\nEs el mes Julio. " << mes << endl; break;
		case 8: cout << "\nEs el mes Agosto. " << mes << endl; break;
		case 9: cout << "\nEs el mes Septiembre. " << mes << endl; break;
		case 10: cout << "\nEs el mes Octubre. " << mes << endl; break;
		case 11: cout << "\nEs el mes Noviembre. " << mes << endl; break;
		case 12: cout << "\nEs el mes Diciembre. " << mes << endl; break;
		Default: cout << "\nNo es un mes> " << mes << endl; break;
	}
	
	return 0;
}
