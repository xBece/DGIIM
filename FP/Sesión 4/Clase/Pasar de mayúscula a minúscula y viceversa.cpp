/* Queremos modificar el ejercicio 5 para leer un carácter letra_original desde teclado y
hacer lo siguiente:

- Si es una letra mayúscula, almacenaremos en la variable letra_convertida la correspondiente
letra minúscula.

- Si es una letra minúscula, almacenaremos en la variable letra_convertida la correspondiente
letra mayúscula.

Si es un carácter no alfabético, almacenaremos el mismo carácter en la variable letra_convertida.
Para ello, añadimos una variable nueva es_minuscula para detectar el caso en el que la letra
sea una minúscula. */

#include <iostream>

using namespace std;

int main () {
	
	
	// DECLARACIÓN DE LAS VARIABLES
	
	char letra_original, letra_convertida;
	bool es_mayuscula, es_minuscula;
	const int DISTANCIA_MAY_MIN = 'a'-'A';
	
	
	// ENTRADA
	
	cout << "\nIntroduzca una letra --> ";
	cin >> letra_original;
	
	
	// EXPRESIONES BOOLEANAS
	
	es_mayuscula = (letra_original >= 'A') && (letra_original <= 'Z');
	es_minuscula = (letra_original >= 'a') && (letra_original <= 'z');
	
	
	// CONDICIONAL
	
	
	if ( es_mayuscula == true || es_minuscula == true ) {
		
		if ( es_mayuscula == true )
	
			letra_convertida = letra_original + DISTANCIA_MAY_MIN;
	
		else
		
			letra_convertida = letra_original - DISTANCIA_MAY_MIN;
			
	}
	
	else 
	
		letra_convertida = letra_original;
		
	
	// SALIDA
	
	cout << "\nEl carácter " << letra_original << " una vez convertido es: " << letra_convertida;
	
	
	// FINALIZACIÓN DEL PROGRAMA
		
	cout << "\n\n";
		
	system ("PAUSE");
	return 0;
	
}
