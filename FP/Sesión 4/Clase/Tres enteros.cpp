/* Escribid un programa en C++ para que lea tres enteros desde teclado y nos diga si est�n
ordenados (da igual si es de forma ascendente o descendente) o no lo est�n. */

#include <iostream>			// Inclusi�n de los recursos de E/S

using namespace std;

int main () {					// Programa principal
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	int entero1, entero2, entero3;
	
	
	// ENTRADA
	
	cout << "Introduzca tres n�meros enteros: ";
	
	cout << "\n\n\tEntero 1: ";
	cin >> entero1;
	
	cout << "\n\tEntero 2: ";
	cin >> entero2;
	
	cout << "\n\tEntero 3: ";
	cin >> entero3;
	
	
	// CONDICIONAL
	
	if ( entero1 > entero2 ) {
		
		if ( entero2 > entero3 ) 
	
		cout << "\nLos n�meros introducidos se encuentran ordenados de mayor a menor.";
		
		else 
		
		cout << "\nLos n�meros introducidos se encuentran desordenados.";
		
	}
	
	else {
	
		if ( entero2 < entero3 )
		
		cout << "\nLos n�meros introducidos se encuentran ordenados de menor a mayor.";
		
		else 
		
		cout << "\nLos n�meros introducidos se encuentran desordenados.";
		
	}
	
	
	//	FINALIZACI�N DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
