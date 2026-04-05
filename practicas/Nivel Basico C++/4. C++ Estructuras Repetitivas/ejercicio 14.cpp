#include <iostream>

using namespace std;

int main() {
    float nota1, nota2, nota3;
    int todos = 0, al_menos_uno = 0, solo_ultimo = 0;
    int p1, p2, p3; // Banderas booleanas (1 o 0)

    for (int i = 1; i <= 5; i++) {
        cout << "\n--- Alumno " << i << " ---" << endl;
        cout << "Nota Examen 1: "; cin >> nota1;
        cout << "Nota Examen 2: "; cin >> nota2;
        cout << "Nota Examen 3: "; cin >> nota3;

        // 1 si aprobo (>=10), 0 si reprobo
        p1 = (nota1 >= 10);
        p2 = (nota2 >= 10);
        p3 = (nota3 >= 10);

        // a) Aprobaron todos: Solo suma 1 si p1, p2 y p3 son 1 (1*1*1 = 1)
        todos += (p1 * p2 * p3);

        // b) Aprobaron al menos uno: La suma p1+p2+p3 sera > 0 si paso alguno.
        // La expresion (...) > 0 devuelve 1 si es cierto.
        al_menos_uno += ((p1 + p2 + p3) > 0);

        // c) Aprobaron unicamente el ultimo:
        // (1 - p1) y (1 - p2) invierten el resultado (1 si reprobo, 0 si aprobo).
        // Solo sumara 1 si reprobo los dos primeros y aprobo el ultimo (1*1*1 = 1).
        solo_ultimo += ((1 - p1) * (1 - p2) * p3);
    }

    cout << "\n===== RESULTADOS =====" << endl;
    cout << "a) Alumnos que aprobaron todos los examenes: " << todos << endl;
    cout << "b) Alumnos que aprobaron al menos un examen: " << al_menos_uno << endl;
    cout << "c) Alumnos que aprobaron unicamente el ultimo examen: " << solo_ultimo << endl;

    return 0;
}
