/*Bloque 4. Estructuras Repetitivas
Ejercicio 4:

Escriba un programa que tome cada 4 horas
la temperatur exterior, leyendola durante un periodo de 24 horas. Es
decir, debe leer 6 temperaturas.
Calcule la temperatura media del dia, la temperatura mas alta y la mas baja.*/

#include <iostream>
#include <conio.h>
#include <limits> // Para inicializar correctamente (opcional, pero buena práctica)

using namespace std;

int main(){
    float temperatura; // Variable para la lectura actual
    float suma_temperaturas = 0;
    // Inicializamos temp_max/min con límites seguros
    float temp_max = -9999.0; 
    float temp_min = 9999.0;  
    float temp_media;
    
    cout << "\t--- Lectura de Temperaturas (6 tomas) ---\n";
    
    // El bucle 'for' itera 6 veces, una por cada toma de temperatura (cada 4 horas)
    for(int i = 1; i <= 6; i++){
        
        // 1. Pedir la temperatura
        cout << "\nToma #" << i << " (Hora " << i * 4 << "): ";
        cout << "Digite la temperatura: ";
        cin >> temperatura;
        
        // 2. Acumular la suma
        suma_temperaturas += temperatura;
        
        // 3. Encontrar la más alta (Max)
        if(temperatura > temp_max){
            temp_max = temperatura;
        }
        
        // 4. Encontrar la más baja (Min)
        if(temperatura < temp_min){
            temp_min = temperatura;
        }
    }
    
    // --- CÁLCULOS FINALES ---
    
    // Calculamos la media (suma total / 6 lecturas)
    temp_media = suma_temperaturas / 6;
    
    cout << "\n\n\t--- RESULTADOS DEL DIA ---\n";
    cout << "Temperatura Media del Dia: " << temp_media << " Grados.\n";
    cout << "Temperatura Mas Alta: " << temp_max << " Grados.\n";
    cout << "Temperatura Mas Baja: " << temp_min << " Grados.\n";
    cout << "--------------------------------\n";
    
    getch(); // Para pausar la consola (si usas <conio.h>)
    return 0;
}
