/* Cread un programa que lea el numero de un a�o e indique si es bisiesto o no. Un a�o es bisiesto
si es multiplo de cuatro, pero no de cien. Excepci�n a la regla anterior son los m�ltiplos de
cuatrocientos que siempre son bisiestos. Por ejemplo, son bisiestos: 1600,1996, 2000, 2004.
No son bisiestos: 1700, 1800, 1900, 1998, 2002. */

#include <iostream>			// Inclusi�n de los recursos de E/S

using namespace std;

int main () {					// Programa principal
	
	int anio;					// Declaramos la variable a�o
	
	
	// ENTRADA
	
	cout << "Bienvenido, este programa le dir� si el a�o introducido es bisiesto o no.";
	
	cout << "\n\nIntroduzca el a�o deseado: ";
	cin >> anio;
	
	
	// CONDICIONAL Y SALIDA
	
	if ( anio % 4 != 0 || ( anio % 100 == 0 && anio % 400 != 0 ) ) 
	
		cout << "\nEl a�o no es bisiesto";
		
	else 
	
		cout << "\nEl a�o es bisiesto";
	
	
	// FINALIZACI�N DEL PROGRAMA
	
	cout << "\n\n";

	system ("PAUSE");
	return 0;

}
