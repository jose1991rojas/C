/*
Pasar una palabra a Mayuscula - Función strupr(); 
*/

//#include<iostream>
//#include<string> // Clase string moderna
//#include<algorithm> // Para std::transform
//#include<cctype> // Para toupper


// Estandard viejo
#include<iostream>
#include<string.h>
#include<ruzza.h> // Ahora usamos < > porque está en /usr/local/include/ruzza.h , path: /usr/local/include/ruzza.h  Libreria creada por mi Ing. Jose Rojas Ruzza. / joserojas520@gmail.com

//#include<conio.h>
//#include<stdlib.h>

using namespace std;

int main(){
    // Estandard moderno.

    // En el estándar actual, preferimos 'string' sobre 'char[]'
    //string palabra = "Jose";

    // std::transform aplica una función (toupper) a todo el rango
    //transform(palabra.begin(), palabra.end(), palabra.begin(), ::toupper);

    //cout << "Resultado: " << palabra << endl;

    // Estandard viejo
    char palabra[] = "Jose alberto";

    strupr(palabra);

    cout << palabra << endl;

    //getch();
    //system("pause");
    return 0;
}
