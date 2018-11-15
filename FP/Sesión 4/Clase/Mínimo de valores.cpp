/* Realizar un programa que lea enteros desde teclado y calcule cuántos se han introducido y	
cual es el mínimo de dichos valores (pueden ser positivos o negativos). Se dejará de leer datos
cuando el usuario introduzca el valor 0. Realizad la lectura de los enteros dentro de un bucle
sobre una única variable llamada dato. Es importante controlar los casos extremos, como por
ejemplo, que el primer valor leído fuese ya el terminador de entrada (en este caso, el cero). */

#include <iostream>					// Inclusión de los recursos de E/S

using namespace std;

int main () {							// Programa principal
	
	
	// DECLARACIÓN DE LAS VARIABLES
	
	int contador = 0;
	int minimo;
	int dato;
	
	
	// ENTRADA
	
	
	cout << "Introduzca todos los valores que desee hasta llegar al 0: ";
	
	cout << "\n\n\t";
	
	cin >> dato;
	
	minimo = dato;
	
	
		// CONDICIONAL CON BUCLE Y SALIDA
		
		if ( dato == 0 )
		
			cout << "\nNo se ha introducido ningún número antes que el terminador 0.";
		
		else {
			
			while ( dato != 0 ) {
			
			cout << "\t";
			
			cin >> dato;
		
			if ( dato != 0 && minimo > dato ) 
			
				minimo = dato;
		
			contador++;
		
			} 
		
		cout << "\nSe han introducido " << contador << " números hasta llegar al 0 y el mínimo de dichos números es el " << minimo << ".";
		
		}

	
	// FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
