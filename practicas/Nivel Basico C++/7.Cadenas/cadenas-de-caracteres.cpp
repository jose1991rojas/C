/*
Cadenas de caracteres
*/

#include<iostream>
#include<string.h>
//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
   // char palabra[] = "Alejandro";
   // char palabra2[] = {'A','l','e','j','a','n','d','r','o', '\0'};
  // char palabra3[20];
  char palabra4[30];

   // cout << palabra << endl;
    cout << "\n";
   // cout << palabra2 << endl;

   // cin no es bueno para guardar strings, luego de un espacio se pieder lo demas.
  // cout << "Digita tu nombre: "; cin >> palabra3;
  // cout << palabra3;

  // La siguiente opcion es gets(array) pero toma memoria que no le pertenece
 // cout << "Digita tu nombre: "; 
  // gets(palabra3);
   
  // cout << palabra3 << endl;


  // La major opcion en la actualidad es cin.getline()
  // Use mi nombre Jose ALberto Rojas Ruzza funciona perfecto
    cout << "Digita tu nombre: ";
    cin.getline(palabra4, 30, '\n');

    cout << "\n";

    cout << palabra4 << endl;

    //getch();
    //system("pause");
    return 0;
}
