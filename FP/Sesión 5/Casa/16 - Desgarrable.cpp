/* Un número entero n se dice que es desgarrable (torn) si al dividirlo en dos partes izda y dcha,
el cuadrado de la suma de ambas partes es igual a n. Por ejemplo, 88209 es desgarrable ya que
(88+209)2 = 88209. Cread un programa que lea un entero n e indique si es o no desgarrable. */

#include <iostream>	

using namespace std;

int main () {	
	
	// DECLARACIÓN DE LAS VARIABLES
	
	int numero, cifra, copia_numero, potencia = 1;
	int contador_cifras = 1;
	int desgarrable;
	
	bool no_desgarrable = true;

	
	// ENTRADA
	
	cout << "Este programa le dirá si el entero introducido es deporable o no.";
	
	cout << "\n\nDigite el entero que desee : ";
	cin >> numero;
	
	copia_numero = numero;
	
	
	// BUCLE
	
	// Bucle para calcular el número de cifras del número introducido
	
	while ( copia_numero >= 10 ) {
		
		copia_numero = copia_numero / 10;
		contador_cifras++;
		
	}
	
	// Bucle para calcular si el número es desgarrable
	
	for ( int i=1; i <= contador_cifras; i++ ) {
		
		potencia = potencia * 10;
		cifra = numero % potencia;
		copia_numero = numero / potencia;
		
		desgarrable = ( copia_numero + cifra ) * ( copia_numero + cifra );
		
		// Condicional para salida de entero desgarrable
			
		if ( desgarrable == numero ) {
			
			cout << "\nEl número " << numero << " es desgarrable pues ( " << copia_numero << " + " << cifra << " )² = " << numero;
			no_desgarrable = false;
			
		}	
	}
	
	// Condicional para la salida de entero no desgarrable

	if ( no_desgarrable == true )
		
		cout << "\nEl número " << numero << " no es desgarrable.";
		
	
	// FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
	
	
	
