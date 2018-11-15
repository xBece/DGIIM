/* Cread un programa que incluya una variable edad en la que guardamos la edad de una persona
(como una variable entera) y otra variable ingresos, en la que almacenamos sus ingresos
(como un real). Subid el salario un 5% si es un jubilado con unos ingresos inferiores
a 300 euros e imprimid el resultado por pantalla. En caso contrario imprimid el mensaje
"No es aplicable la subida". En ambos casos imprimid el salario resultante. Resolved
el ejercicio de dos formas:

	• En primer lugar, mezclando E/S (entradas y salidas) con computos dentro de la misma
estructura condicional.

	• En segundo lugar, separándolos en bloques distintos.
	
Realizad el mismo ejercicio pero subiendo el salario un 4% si es mayor de 65 o menor de 35
años. Además, si también tiene un salario inferior a 300 euros, se le subirá otro 3%. */

#include <iostream>				// Inclusión de los recursos de E/S

using namespace std;

int main () {						// Programa principal

	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	int edad;
	double ingresos;
	bool edad_ingresos_requeridos;
	
	
	// ENTRADA
	
	cout << "Este programa hallará la subida de sus ingresos en su jubilación. Para ello necesitaremos su edad y sus ingresos";
	
	cout << "\n\n\tEdad: ";
	cin >> edad;
	
	cout << "\n\tIngresos: ";
	cin >> ingresos;
	
	
	// CONDICIONAL Y SALIDA
	
	if ( edad >= 65 && ingresos < 300 ) {
	
		ingresos += ingresos * 0.05;
		edad_ingresos_requeridos = true;
		
	}
		
	if ( edad_ingresos_requeridos == true ) 
	
		cout << "\nSus ingresos serán de " << ingresos << " €.";
		
		
	else 
		
		cout << "\nNo es aplicable la subida, por lo que sus ingresos son de " << ingresos << " €.";
	
	
	// FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
