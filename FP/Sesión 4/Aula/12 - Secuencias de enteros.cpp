/* Realizar un programa que lea dos secuencias de enteros desde teclado y nos diga si todos los
valores de la primera secuencia son mayores que todos los valores de la segunda secuencia.
Realizad la lectura de los enteros dentro de sendos bucles sobre una única variable llamada
dato. El final de cada secuencia viene marcado cuando se lee el 0. */

#include <iostream>

using namespace std;

int main () {							// Programa principal
	
	
	// DECLARACIÓN DE LAS VARIABLES
	
	int maximo;
	int minimo;
	int dato;
	
	
	// ENTRADA
	
	cout << "Este programa leerá dos secuencias de enteros desde teclado y dirá si todos los valores de la primera secuencia son mayores que los de la segunda.";
	cout << "\n\nNOTA: Las secuencias finalizarán una vez introducido el valor 0.";
	
	
	// PRIMERA SECUENCIA
	
	cout << "\n\n\t-> Introduzca la primera secuencia : ";
	cout << "\n\n\t\t";
	
	cin >> dato;
	minimo = dato;
	
	
		// CONDICIONAL CON BUCLE Y SALIDA
		
		while ( dato == 0 ) {
		
			cout << "\nERROR : Se ha introducido el terminador 0, vuelva a intentar introducir la secuencia.";
			cout << "\n\n\t\t";
			cin >> dato;
			
		}
	
		while ( dato != 0 ) {
			
			cout << "\t\t";
			
			cin >> dato;
		
			if ( dato != 0 && minimo > dato ) 
			
				minimo = dato;
		
		}
		
		
	// SEGUNDA SECUENCIA
	
	cout << "\n\n\t-> Introduzca la segunda secuencia : ";
	cout << "\n\n\t\t";
	
	cin >> dato;
	maximo = dato;
	
	
	// CONDICIONAL CON BUCLE Y SALIDA
		
		while ( dato == 0 ) {
		
			cout << "\nERROR : Se ha introducido el terminador 0, vuelva a intentar introducir la secuencia.";
			cout << "\n\n\t\t";
			cin >> dato;
			
		}
	
		while ( dato != 0 ) {
			
			cout << "\t\t";
			
			cin >> dato;
		
			if ( dato != 0 && maximo < dato ) 
			
				maximo = dato;
		
		}
		
		
		if ( minimo > maximo )
		
			cout << "\nTodos los valores de la primera secuencia son mayores que los de la segunda.";
			
		else 
		
			cout << "\nNo todos los valores de la primera secuencia son mayores que los de la segunda.";
	

	
	// FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
