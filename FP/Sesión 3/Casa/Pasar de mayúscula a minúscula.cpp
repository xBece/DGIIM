/* Diseñar un programa que lea un carácter (supondremos que el usuario introduce una mayúuscula),
lo pase a minúscula y lo imprima en pantalla. Hacedlo sin usar las funciones "toupper" ni
"tolower" de la biblioteca cctype. Para ello, debe considerarse la equivalencia en C++ entre
los tipos enteros y caracteres. */

#include <iostream>			// Inclusión de los recursos de E/S

using namespace std;

int main () {					// Programa principal
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	char caracter;
	
	// ENTRADA
	
	cout << "Bienvenido, este programa pasará un carácter de tu elección de mayúscula a minúscula.";
	
	cout << "\n\nIntroduzca un carácter cualquiera en mayúscula: ";
	cin >> caracter;
	
	// CONDICIONAL 
	
	if ( caracter >= 65 && caracter <= 90 ) {				// si el carácter es mayúscula (tabla ASCII), lo convertimos en minúscula ( 65 = A y 90 = Z; 97 = a y 122 = z )
	
		caracter += 32;
		
	}
	
	// SALIDA
	
	cout << "\nSu carácter en minúscula es : " << caracter << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}
	
	


