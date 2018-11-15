/* Cread un programa que lea el numero de un año e indique si es bisiesto o no. Un año es bisiesto
si es multiplo de cuatro, pero no de cien. Excepción a la regla anterior son los múltiplos de
cuatrocientos que siempre son bisiestos. Por ejemplo, son bisiestos: 1600,1996, 2000, 2004.
No son bisiestos: 1700, 1800, 1900, 1998, 2002. */

#include <iostream>			// Inclusión de los recursos de E/S

using namespace std;

int main () {					// Programa principal
	
	int anio;					// Declaramos la variable año
	
	
	// ENTRADA
	
	cout << "Bienvenido, este programa le dirá si el año introducido es bisiesto o no.";
	
	cout << "\n\nIntroduzca el año deseado: ";
	cin >> anio;
	
	
	// CONDICIONAL Y SALIDA
	
	if ( anio % 4 != 0 || ( anio % 100 == 0 && anio % 400 != 0 ) ) 
	
		cout << "\nEl año no es bisiesto";
		
	else 
	
		cout << "\nEl año es bisiesto";
	
	
	// FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";

	system ("PAUSE");
	return 0;

}
