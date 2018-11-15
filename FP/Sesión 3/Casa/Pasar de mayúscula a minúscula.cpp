/* Dise�ar un programa que lea un car�cter (supondremos que el usuario introduce una may�uscula),
lo pase a min�scula y lo imprima en pantalla. Hacedlo sin usar las funciones "toupper" ni
"tolower" de la biblioteca cctype. Para ello, debe considerarse la equivalencia en C++ entre
los tipos enteros y caracteres. */

#include <iostream>			// Inclusi�n de los recursos de E/S

using namespace std;

int main () {					// Programa principal
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	char caracter;
	
	// ENTRADA
	
	cout << "Bienvenido, este programa pasar� un car�cter de tu elecci�n de may�scula a min�scula.";
	
	cout << "\n\nIntroduzca un car�cter cualquiera en may�scula: ";
	cin >> caracter;
	
	// CONDICIONAL 
	
	if ( caracter >= 65 && caracter <= 90 ) {				// si el car�cter es may�scula (tabla ASCII), lo convertimos en min�scula ( 65 = A y 90 = Z; 97 = a y 122 = z )
	
		caracter += 32;
		
	}
	
	// SALIDA
	
	cout << "\nSu car�cter en min�scula es : " << caracter << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}
	
	


