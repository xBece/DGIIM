/* El m�todo RLE (Run Length Encoding) codifica una secuencia de datos formada por series
de valores id�nticos consecutivos como una secuencia de parejas de n�meros ( valor de la
secuencia y n�mero de veces que se repite ). Realizar un programa que lea una secuencia de
n�meros naturales terminada con un n�mero negativo y la codifique mediante el m�todo RLE. */

#include <iostream>

using namespace std;

int main () {
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	int numero, veces_repetido = 1, numero_anterior;
	
	
	// ENTRADA
	
	cout << "Introduzca una secuencia de n�meros naturales formada por series de valores id�nticos consecutivos.";
	cout << "\n\nNOTA : La secuencia finalizar� cuando se introduzca el valor -1.\n\n";
	cout << "NOTA 2 : El programa est� dise�ado para que se introduzca la secuencia entera desde el principio, separando los enteros con un espacio.\n\n";
	cin >> numero;
	
	
	// BUCLE PARA D�GITO ERR�NEO ( NO NATURAL )
	
	while ( numero < 0 ) {
		
		cout << "\n\nERROR : Ha introducido un n�mero no natural. Por favor, introduzca la secuencia indicada.";
		cin >> numero;
		
	}
	
	
	// BUCLE DE LA SUCESI�N
	
	while ( numero >= 0 ) {
		
		numero_anterior = numero;
		
		cin >> numero;
		
		if ( numero != -1 )						// Error n�meor no natural excluyendo el terminador
			
			while ( numero < 0 ) {
		
				cout << "\n\nERROR : Ha introducido un n�mero no natural. Por favor, introduzca la secuencia indicada.";
				cin >> numero;
		
			}
			
		if ( numero_anterior == numero )		// C�lculo de las repeticiones
		
			veces_repetido++;
			
		else {
			
			if ( numero != -1 ) {				// Salida de la subsecuencia
				
				cout << veces_repetido << " " << numero_anterior << " ";
				veces_repetido = 1;
				
			}
			
		}
		
	}
	
	cout << veces_repetido << " " << numero_anterior;				// Salida del �ltimo n�mero
	
	
	// FINALIZACI�N DEL PROGRAMA 
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

