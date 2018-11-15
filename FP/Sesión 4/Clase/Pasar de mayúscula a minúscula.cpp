/* Se quiere leer un carácter letra_original desde teclado, y comprobar con una estructura
condicional si es una letra mayúscula. En dicho caso, hay que calcular la minúscula
correspondiente en una variable llamada letra_convertida. En cualquier otro caso, le
asignaremos a letra_convertida el valor que tenga letra_original. Finalmente,
imprimiremos en pantalla el valor de letra_convertida. No pueden usarse las funciones
tolower ni toupper de la biblioteca cctype. */

#include <iostream>

using namespace std;

int main () {
	
	
	// DECLARACIÓN DE LAS VARIABLES
	
	char letra_original, letra_convertida;
	const int DISTANCIA_MAY_MIN = 'a' - 'A';
	bool es_mayuscula;
	
	
	// ENTRADA
	
	cout << "\nIntroduzca una letra --> ";
	cin >> letra_original;

	
	// CONDICIONAL 
	
	if ( ( letra_original >= 'A' ) && ( letra_original <= 'Z' ) )
	
		es_mayuscula = true;
	
	if ( es_mayuscula )
	
		letra_convertida = letra_original + DISTANCIA_MAY_MIN;
	
	else 
		
		letra_convertida = letra_original;

		cout << "\nEl carácter " << letra_original << " una vez convertido es: " << letra_convertida;
		
		cout << "\n\n";
		
		system ("PAUSE");
		return 0;
		
	}
