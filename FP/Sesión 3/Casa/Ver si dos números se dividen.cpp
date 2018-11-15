/*

Realizar un programa en C++ que lea dos valores enteros desde teclado y diga si cualquiera de
ellos divide o no (de forma entera) al otro. En este problema no hace falta decir quién divide
a quién. Supondremos que los valores leídos desde teclado son ambos distintos de cero.

*/

#include <iostream>		// Inlcusión de los recursos de E/S

using namespace std;

int main () {
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	int valor1, valor2;
	
	// ENTRADA
	
	cout << "Introduza dos valores : ";

	cout << "\n\n\tValor 1 : ";
	cin >> valor1;
	
	cout << "\n\tValor 2 : ";
	cin >> valor2;
	
	// CONDICIONAL
	
	if ( valor1 % valor2 == 0 || valor2 % valor1 == 0 )
		
		cout << "\n" << valor1 << " y " << valor2 << " se pueden dividir entre ellos de forma entera.";
		
	else 
	
		cout << "\n\n" << valor1 << " y " << valor2 << " no se pueden dividir entre ellos de forma entera.";
		
		
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

