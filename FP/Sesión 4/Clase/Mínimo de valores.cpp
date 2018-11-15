/* Realizar un programa que lea enteros desde teclado y calcule cu�ntos se han introducido y	
cual es el m�nimo de dichos valores (pueden ser positivos o negativos). Se dejar� de leer datos
cuando el usuario introduzca el valor 0. Realizad la lectura de los enteros dentro de un bucle
sobre una �nica variable llamada dato. Es importante controlar los casos extremos, como por
ejemplo, que el primer valor le�do fuese ya el terminador de entrada (en este caso, el cero). */

#include <iostream>					// Inclusi�n de los recursos de E/S

using namespace std;

int main () {							// Programa principal
	
	
	// DECLARACI�N DE LAS VARIABLES
	
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
		
			cout << "\nNo se ha introducido ning�n n�mero antes que el terminador 0.";
		
		else {
			
			while ( dato != 0 ) {
			
			cout << "\t";
			
			cin >> dato;
		
			if ( dato != 0 && minimo > dato ) 
			
				minimo = dato;
		
			contador++;
		
			} 
		
		cout << "\nSe han introducido " << contador << " n�meros hasta llegar al 0 y el m�nimo de dichos n�meros es el " << minimo << ".";
		
		}

	
	// FINALIZACI�N DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
