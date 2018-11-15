/* El método RLE (Run Length Encoding) codifica una secuencia de datos formada por series
de valores idénticos consecutivos como una secuencia de parejas de números ( valor de la
secuencia y número de veces que se repite ). Realizar un programa que lea una secuencia de
números naturales terminada con un número negativo y la codifique mediante el método RLE. */

#include <iostream>

using namespace std;

int main () {
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	int numero, veces_repetido = 1, numero_anterior;
	
	
	// ENTRADA
	
	cout << "Introduzca una secuencia de números naturales formada por series de valores idénticos consecutivos.";
	cout << "\n\nNOTA : La secuencia finalizará cuando se introduzca el valor -1.\n\n";
	cout << "NOTA 2 : El programa está diseñado para que se introduzca la secuencia entera desde el principio, separando los enteros con un espacio.\n\n";
	cin >> numero;
	
	
	// BUCLE PARA DÍGITO ERRÓNEO ( NO NATURAL )
	
	while ( numero < 0 ) {
		
		cout << "\n\nERROR : Ha introducido un número no natural. Por favor, introduzca la secuencia indicada.";
		cin >> numero;
		
	}
	
	
	// BUCLE DE LA SUCESIÓN
	
	while ( numero >= 0 ) {
		
		numero_anterior = numero;
		
		cin >> numero;
		
		if ( numero != -1 )						// Error númeor no natural excluyendo el terminador
			
			while ( numero < 0 ) {
		
				cout << "\n\nERROR : Ha introducido un número no natural. Por favor, introduzca la secuencia indicada.";
				cin >> numero;
		
			}
			
		if ( numero_anterior == numero )		// Cálculo de las repeticiones
		
			veces_repetido++;
			
		else {
			
			if ( numero != -1 ) {				// Salida de la subsecuencia
				
				cout << veces_repetido << " " << numero_anterior << " ";
				veces_repetido = 1;
				
			}
			
		}
		
	}
	
	cout << veces_repetido << " " << numero_anterior;				// Salida del último número
	
	
	// FINALIZACIÓN DEL PROGRAMA 
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

