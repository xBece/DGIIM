/* Calcular mediante un programa en C++ la función potencia x^n, y la función factorial n! con
"n" un valor entero y ""x un valor real. No pueden usarse las funciones de la biblioteca cmath. */

#include <iostream>

using namespace std;

int main () {
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	double x, aux;
	int n;
	double resultado_fac = 1;
	
	
	// ENTRADA
	
	cout << "Este programa calculará la función x^n y la función factorial n!.";
	
	cout << "\n\n\tIntroduzca el valor deseado para x : ";
	cin >> x;
	
	cout << "\n\tIntroduzca el valor deseado para n : ";
	cin >> n;
	
	aux = x;
	
	// BUCLES - FUNCIÓN POTENCIA Y FACTORIAL
	
	if ( n == 0 )
		
		x = resultado_fac = 1;
	
	else
	
		for ( int i = 1; i < n; i++ ) {
		
			x = x * aux;
			resultado_fac = resultado_fac * (i + 1);
			
		}
	
	cout << "\nEl valor de la función potencia es " << x << " y el de la función factorial " << resultado_fac << ".";
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

