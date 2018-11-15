/* Un n�mero entero n se dice que es desgarrable (torn) si al dividirlo en dos partes izda y dcha,
el cuadrado de la suma de ambas partes es igual a n. Por ejemplo, 88209 es desgarrable ya que
(88+209)2 = 88209. Cread un programa que lea un entero n e indique si es o no desgarrable. */

#include <iostream>	

using namespace std;

int main () {	
	
	// DECLARACI�N DE LAS VARIABLES
	
	int numero, cifra, copia_numero, potencia = 1;
	int contador_cifras = 1;
	int desgarrable;
	
	bool no_desgarrable = true;

	
	// ENTRADA
	
	cout << "Este programa le dir� si el entero introducido es deporable o no.";
	
	cout << "\n\nDigite el entero que desee : ";
	cin >> numero;
	
	copia_numero = numero;
	
	
	// BUCLE
	
	// Bucle para calcular el n�mero de cifras del n�mero introducido
	
	while ( copia_numero >= 10 ) {
		
		copia_numero = copia_numero / 10;
		contador_cifras++;
		
	}
	
	// Bucle para calcular si el n�mero es desgarrable
	
	for ( int i=1; i <= contador_cifras; i++ ) {
		
		potencia = potencia * 10;
		cifra = numero % potencia;
		copia_numero = numero / potencia;
		
		desgarrable = ( copia_numero + cifra ) * ( copia_numero + cifra );
		
		// Condicional para salida de entero desgarrable
			
		if ( desgarrable == numero ) {
			
			cout << "\nEl n�mero " << numero << " es desgarrable pues ( " << copia_numero << " + " << cifra << " )� = " << numero;
			no_desgarrable = false;
			
		}	
	}
	
	// Condicional para la salida de entero no desgarrable

	if ( no_desgarrable == true )
		
		cout << "\nEl n�mero " << numero << " no es desgarrable.";
		
	
	// FINALIZACI�N DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
	
	
	
