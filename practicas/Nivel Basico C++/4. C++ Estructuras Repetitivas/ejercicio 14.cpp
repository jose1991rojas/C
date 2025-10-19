/*
Bloque 4. Estructuras Repetitivas
Ejercicio 14:
Calcula las estadísticas de aprobación de 5 alumnos.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    // Inicializar contadores para las estadísticas
    int aprobaron_todos = 0;
    int aprobaron_al_menos_uno = 0;
    int aprobaron_solo_el_ultimo = 0;

    // Constante para el número de alumnos
    const int NUM_ALUMNOS = 5; 
    
    // Asumimos que la nota mínima de aprobación es 6.0
    const float NOTA_APROBACION = 6.0;

    cout << "====================================================\n";
    cout << "      CALCULADORA DE ESTADISTICAS DE EXAMENES       \n";
    cout << "      (Nota minima de aprobacion: " << NOTA_APROBACION << ")         \n";
    cout << "====================================================\n";

    // Bucle FOR para iterar a través de los 5 alumnos
    for (int i = 1; i <= NUM_ALUMNOS; i++) {
        
        float nota1, nota2, nota3;
        bool ex1_aprobado, ex2_aprobado, ex3_aprobado;

        cout << "\n--- Datos del Alumno " << i << " ---\n";
        cout << "Nota Examen 1: "; cin >> nota1;
        cout << "Nota Examen 2: "; cin >> nota2;
        cout << "Nota Examen 3: "; cin >> nota3;
        
        // 1. Determinar si cada examen fue aprobado
        ex1_aprobado = (nota1 >= NOTA_APROBACION);
        ex2_aprobado = (nota2 >= NOTA_APROBACION);
        ex3_aprobado = (nota3 >= NOTA_APROBACION);
        
        // ------------------------------------------------------------------
        // a) Alumnos que aprobaron TODOS los examenes (AND lógico)
        if (ex1_aprobado && ex2_aprobado && ex3_aprobado) {
            aprobaron_todos++;
        }
        
        // ------------------------------------------------------------------
        // b) Alumnos que aprobaron AL MENOS UN examen (OR lógico)
        if (ex1_aprobado || ex2_aprobado || ex3_aprobado) {
            aprobaron_al_menos_uno++;
        }

        // ------------------------------------------------------------------
        // c) Alumnos que aprobaron UNICAMENTE el ultimo examen
        // Debe aprobar el último (ex3_aprobado) Y NO aprobar los dos anteriores
        if (ex3_aprobado && !ex1_aprobado && !ex2_aprobado) {
            aprobaron_solo_el_ultimo++;
        }
    }
    
    cout << "\n====================================================\n";
    cout << "           RESULTADOS DE LAS ESTADISTICAS           \n";
    cout << "====================================================\n";
    
    cout << "a) Alumnos que aprobaron TODOS los examenes: " << aprobaron_todos << endl;
    cout << "b) Alumnos que aprobaron AL MENOS UN examen: " << aprobaron_al_menos_uno << endl;
    cout << "c) Alumnos que aprobaron UNICAMENTE el ultimo: " << aprobaron_solo_el_ultimo << endl;
    
    cout << "====================================================\n";
    
    system("pause");
    return 0;
}
