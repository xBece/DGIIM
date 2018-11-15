/* Realizar un programa que lea desde teclado un entero tope e imprima en pantalla todos sus
divisores propios. Para obtener los divisores, basta recorrer todos los enteros menores que el
valor introducido y comprobar si lo dividen. A continuación, mejorar el ejercicio obligando al
usuario a introducir un entero positivo, usando un filtro con un bucle post test (do while). */

#include <iostream>					// Inclusión de los recursos de E/S

using namespace std;

int main () {							// Programa principal
	
	
	// DECLARACIÓN DE LAS VARIABLES
	
	int tope;
	int entero = 1;
	
	
	// ENTRADA CON FILTRO
	
	do {
		
	cout << "Introduzca un número entero : ";
	cin >> tope;
	
	} while ( tope <= 0 );
		
	cout << "\nLos divisores propios de " << tope << " son : ";


	// BUCLE
	
	while ( entero < tope ) {
	
		if ( tope % entero == 0 )
			
			cout << entero << ", ";
			
		entero++;
		
	}
	
	cout << entero << ".";						// No incluimos el entero dentro del while para poder poner el punto de finalización
	
	
	// FINALIZACIÓN
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
