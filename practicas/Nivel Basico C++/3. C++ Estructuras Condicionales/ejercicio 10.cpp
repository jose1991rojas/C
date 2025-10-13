/*
Bloque 3. Estructuras Condicionales
Ejercicio 10:

Mostrar los meses del año, pidiendole
al usuario un numero entre (1-12),
y mostrar el mes al que corresponde.
*/

#include <iostream>

using namespace std;

int main(){
	int meses=0;
	
	cout<<"Digite un mes en numeros del 1-12.: "; cin>>meses;
	
	switch(meses){
		case 1: cout<<"\nEnero."<<endl; break;
		case 2: cout<<"\nFebrero."; break;
		case 3: cout<<"\nMarzo."; break;
		case 4: cout<<"\nAbril."; break;
		case 5: cout<<"\nMayo."; break;
		case 6: cout<<"\nJunio."; break;
		case 7: cout<<"\nJulio."; break;
		case 8: cout<<"\nAgosto."; break;
		case 9: cout<<"\nSeptiembre."; break;
		case 10: cout<<"\nOctubre."; break;
		case 11: cout<<"\nNoviembre."; break;
		case 12: cout<<"\nDiciembre."; break;
		default: cout<<"\nNo es un valor de un mes entre el 1-12."; break;
	}
		
	return 0;
}
