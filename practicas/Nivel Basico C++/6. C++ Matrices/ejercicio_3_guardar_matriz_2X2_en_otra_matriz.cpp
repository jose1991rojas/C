/*3. Hacer una matriz de tipo entera de 2*2, llenarla de números
y luego copiar todo su contenido hacia otra matriz y mostrar
su contenido en pantalla*/

#include<iostream>
//#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[2][2] = {{1,2},{3,4}};
	int matriz_2[2][2];
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
		matriz_2[i][j] = numeros[i][j];	
		}
	}
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
		cout << matriz_2[i][j];		
		}
	cout << "\n";	
	}

	//getch();
	system("pause");
	return 0;
}
