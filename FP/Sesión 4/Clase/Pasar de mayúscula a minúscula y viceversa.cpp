/* Queremos modificar el ejercicio 5 para leer un car�cter letra_original desde teclado y
hacer lo siguiente:

- Si es una letra may�scula, almacenaremos en la variable letra_convertida la correspondiente
letra min�scula.

- Si es una letra min�scula, almacenaremos en la variable letra_convertida la correspondiente
letra may�scula.

Si es un car�cter no alfab�tico, almacenaremos el mismo car�cter en la variable letra_convertida.
Para ello, a�adimos una variable nueva es_minuscula para detectar el caso en el que la letra
sea una min�scula. */

#include <iostream>

using namespace std;

int main () {
	
	
	// DECLARACI�N DE LAS VARIABLES
	
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
	
	cout << "\nEl car�cter " << letra_original << " una vez convertido es: " << letra_convertida;
	
	
	// FINALIZACI�N DEL PROGRAMA
		
	cout << "\n\n";
		
	system ("PAUSE");
	return 0;
	
}
