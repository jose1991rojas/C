/*Bloque 4. Estructuras Repetitivas
Ejercicio 4:

Escriba un programa que tome cada 4 horas
la temperatur exterior, leyendola durante un periodo de 24 horas. Es
decir, debe leer 6 temperaturas.
Calcule la temperatura media del dia, la temperatura mas alta y la mas baja.*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int t1_4,t2_8, t3_12, t4_16, t5_20, t6_24,t_media, t_alta, t_baja;
	
	//24 horas tienen 86400 s.
	/*4h = 14400, 8h = 28800, 12h = 43200, 16h = 57600, 20h = 72000, 24h = 86400   */
	
	for(int i=1; i<=86400; i++){
		cout<<i<<endl; 
		
		if(i==14400){
			float t1_4=19.00;
			cout<<"\nTemperatura t1 es:  "<< t1_4;	
			
		}
		
		if(i==28800){
			float t2_8=21.00;
		cout<<"\nTemperatura t2 es:  "<< t2_8;
		}
		
		if(i==48300){
			float t3_12=18.00;
		cout<<"\nTemperatura t3 es:  "<< t3_12;
		}
		
			if(i==57600){
			float t4_16=17.00;
		cout<<"\nTemperatura t4 es:  "<< t4_16;
		}
		
			if(i==72000){
			float t5_20=16.00;
		cout<<"\nTemperatura t5 es:  "<< t5_20;
		break;
		}
		
			if(i==86400){
			float t6_24=15.00;
		cout<<"\nTemperatura t6 es:  "<< t6_24;
		}
		
		
	}
	
	cout<<"\n\t Temperaturas:"<<endl;
	cout<<t1_4<<endl;
	cout<<t2_8<<endl;
	cout<<t3_12<<endl;
	cout<<t4_16<<endl;
	cout<<t5_20<<endl;
	cout<<t6_24<<endl;
	
	
	
	getch();
	return 0;
}
