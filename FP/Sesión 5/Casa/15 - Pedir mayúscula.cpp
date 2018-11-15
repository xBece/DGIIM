/* Se pide leer un carácter desde teclado, obligando al usuario a que sea una letra mayúscula.
Para ello, habrá que usar una estructura repetitiva do while, de forma que si el usuario
introduce un carácter que no sea una letra mayúscula, se le volverá a pedir otro carácter. 
Calculad la minúscula correspondiente e imprimidla en pantalla. No pueden usarse las funciones
tolower ni toupper de la biblioteca cctype. Si se quiere, se puede usar como base el
proyecto que resolvió el ejercicio 15 de la relación 1. */

#include <iostream>

using namespace std;


int main () {
	
	
	// DECLARACIÓN DE LAS VARIABLES
	
	char letra_original, letra_convertida;
	const int DISTANCIA_MAY_MIN = 'a' - 'A';
	bool no_mayuscula;
	
	
	// ENTRADA CON BUCLE

	do {
		
	cout << "\nIntroduzca una letra mayúscula --> ";
	cin >> letra_original;
	
	no_mayuscula = letra_original < 'A' || letra_original > 'Z';
	
	} while ( no_mayuscula );
	
	
	// TRANSFORMACIÓN DE LA LETRA MAYÚSCULA EN MINÚSCULA
	
	letra_convertida = letra_original + DISTANCIA_MAY_MIN;

	
	// SALIDA
	
	cout << "\nEl carácter " << letra_original << " una vez convertido a minúscula es: " << letra_convertida;
		
	cout << "\n\n";
		
	system ("PAUSE");
	return 0;
		
	}
