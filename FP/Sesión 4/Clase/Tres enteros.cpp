/* Escribid un programa en C++ para que lea tres enteros desde teclado y nos diga si están
ordenados (da igual si es de forma ascendente o descendente) o no lo están. */

#include <iostream>			// Inclusión de los recursos de E/S

using namespace std;

int main () {					// Programa principal
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	int entero1, entero2, entero3;
	
	
	// ENTRADA
	
	cout << "Introduzca tres números enteros: ";
	
	cout << "\n\n\tEntero 1: ";
	cin >> entero1;
	
	cout << "\n\tEntero 2: ";
	cin >> entero2;
	
	cout << "\n\tEntero 3: ";
	cin >> entero3;
	
	
	// CONDICIONAL
	
	if ( entero1 > entero2 ) {
		
		if ( entero2 > entero3 ) 
	
		cout << "\nLos números introducidos se encuentran ordenados de mayor a menor.";
		
		else 
		
		cout << "\nLos números introducidos se encuentran desordenados.";
		
	}
	
	else {
	
		if ( entero2 < entero3 )
		
		cout << "\nLos números introducidos se encuentran ordenados de menor a mayor.";
		
		else 
		
		cout << "\nLos números introducidos se encuentran desordenados.";
		
	}
	
	
	//	FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
