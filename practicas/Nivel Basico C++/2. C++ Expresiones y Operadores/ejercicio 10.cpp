/*Escriba un programa que calcule las soluciones de una
ecuación de segundo grado de la forma ax^2 + bx + c = 0
teniendo en cuenta que:
x = (-b +- sqrt (pow(b,2)-(4(a*c))))/(2*a)*/

#include <iostream>
#include <cmath>     // Para pow()
#include <complex>   // NECESARIO para manejar la raíz cuadrada de números negativos sin 'if'
#include <iomanip>   // Para la precisión y el formato

// Usamos el espacio de nombres std para la concisión en la salida
using namespace std;

int main(){
    // Definimos las variables como números complejos.
    // Aunque la entrada será real, esto permite que la aritmética funcione
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
    // REQUIERE una sentencia de control (if) para evitar la división por cero.

	// 1. Calcular el discriminante (b^2 - 4ac)
    // El resultado 'delta' será un número complejo, aunque su parte imaginaria sea cero inicialmente.
	complex<double> delta = pow(b, 2.0) - (4.0 * a * c);
	
    // 2. Calcular la raíz del discriminante
    // std::sqrt de <complex> devuelve un número complejo cuya parte real es 0 si el discriminante es negativo.
    complex<double> sqrt_delta = sqrt(delta);
    
    // 3. Calcular las soluciones
    complex<double> denominador = 2.0 * a;
    
    // Raíz 1: (-b + sqrt(delta)) / 2a
	complex<double> x1 = ((-b) + sqrt_delta) / denominador;
    // Raíz 2: (-b - sqrt(delta)) / 2a
	complex<double> x2 = ((-b) - sqrt_delta) / denominador;

	// --- Impresión de Resultados ---
	cout << fixed << setprecision(4);
	cout << "\nEl Discriminante (Delta) es: " << delta << endl;
	
    // La salida de std::complex es en formato (real, imaginario), ej: (1.5, 2.0)
	cout << "Raíz 1 (x1) = " << x1 << endl;
	cout << "Raíz 2 (x2) = " << x2 << endl;
	
	return 0;
}
