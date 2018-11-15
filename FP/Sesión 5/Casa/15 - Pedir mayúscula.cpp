/* Se pide leer un car�cter desde teclado, obligando al usuario a que sea una letra may�scula.
Para ello, habr� que usar una estructura repetitiva do while, de forma que si el usuario
introduce un car�cter que no sea una letra may�scula, se le volver� a pedir otro car�cter. 
Calculad la min�scula correspondiente e imprimidla en pantalla. No pueden usarse las funciones
tolower ni toupper de la biblioteca cctype. Si se quiere, se puede usar como base el
proyecto que resolvi� el ejercicio 15 de la relaci�n 1. */

#include <iostream>

using namespace std;


int main () {
	
	
	// DECLARACI�N DE LAS VARIABLES
	
	char letra_original, letra_convertida;
	const int DISTANCIA_MAY_MIN = 'a' - 'A';
	bool no_mayuscula;
	
	
	// ENTRADA CON BUCLE

	do {
		
	cout << "\nIntroduzca una letra may�scula --> ";
	cin >> letra_original;
	
	no_mayuscula = letra_original < 'A' || letra_original > 'Z';
	
	} while ( no_mayuscula );
	
	
	// TRANSFORMACI�N DE LA LETRA MAY�SCULA EN MIN�SCULA
	
	letra_convertida = letra_original + DISTANCIA_MAY_MIN;

	
	// SALIDA
	
	cout << "\nEl car�cter " << letra_original << " una vez convertido a min�scula es: " << letra_convertida;
		
	cout << "\n\n";
		
	system ("PAUSE");
	return 0;
		
	}
