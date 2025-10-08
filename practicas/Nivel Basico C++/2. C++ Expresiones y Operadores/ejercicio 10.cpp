/*Escriba un programa que calcule las soluciones de una
ecuaci�n de segundo grado de la forma ax^2 + bx + c = 0
teniendo en cuenta que:
x = (-b +- sqrt (pow(b,2)-(4(a*c))))/(2*a)*/

#include <iostream>
#include <cmath>     // Para pow()
#include <complex>   // NECESARIO para manejar la ra�z cuadrada de n�meros negativos sin 'if'
#include <iomanip>   // Para la precisi�n y el formato

// Usamos el espacio de nombres std para la concisi�n en la salida
using namespace std;

int main(){
    // Definimos las variables como n�meros complejos.
    // Aunque la entrada ser� real, esto permite que la aritm�tica funcione
    // correctamente en el dominio complejo para todos los casos de discriminante.
	complex<double> a, b, c;
	
	// Variables auxiliares para la entrada real
	double real_a, real_b, real_c;
	
	cout << "--- Solucion de Ecuacion Cuadratica (Sin IF) ---" << endl;
	cout << "Digite el valor de a: "; cin >> real_a;
	cout << "Digite el valor de b: "; cin >> real_b;
	cout << "Digite el valor de c: "; cin >> real_c;
	
    // Asignamos los valores reales a las variables complejas
    a = real_a;
    b = real_b;
    c = real_c;
    
    // NOTA: Se asume que 'a' no es cero, ya que el manejo del caso 'a=0'
    // REQUIERE una sentencia de control (if) para evitar la divisi�n por cero.

	// 1. Calcular el discriminante (b^2 - 4ac)
    // El resultado 'delta' ser� un n�mero complejo, aunque su parte imaginaria sea cero inicialmente.
	complex<double> delta = pow(b, 2.0) - (4.0 * a * c);
	
    // 2. Calcular la ra�z del discriminante
    // std::sqrt de <complex> devuelve un n�mero complejo cuya parte real es 0 si el discriminante es negativo.
    complex<double> sqrt_delta = sqrt(delta);
    
    // 3. Calcular las soluciones
    complex<double> denominador = 2.0 * a;
    
    // Ra�z 1: (-b + sqrt(delta)) / 2a
	complex<double> x1 = ((-b) + sqrt_delta) / denominador;
    // Ra�z 2: (-b - sqrt(delta)) / 2a
	complex<double> x2 = ((-b) - sqrt_delta) / denominador;

	// --- Impresi�n de Resultados ---
	cout << fixed << setprecision(4);
	cout << "\nEl Discriminante (Delta) es: " << delta << endl;
	
    // La salida de std::complex es en formato (real, imaginario), ej: (1.5, 2.0)
	cout << "Ra�z 1 (x1) = " << x1 << endl;
	cout << "Ra�z 2 (x2) = " << x2 << endl;
	
	return 0;
}
