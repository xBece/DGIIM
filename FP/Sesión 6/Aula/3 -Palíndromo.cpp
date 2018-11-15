/* Implementar un programa que nos diga si una secuencia de caracteres es un pal�ndromo,
es decir, que se lee igual de izquierda a derecha que de derecha a izquierda. Por ejemplo,
�a�,�b�,�b�,�a� ser�a un pal�ndromo, pero �a�,�c�,�b�,�a� no lo ser�a. Si la secuencia tiene un
numero impar de componentes, la que ocupa la posici�n central es descartada, por lo que �
�a�,�b�,�j�,�b�,�a� ser�a un pal�ndromo. El programa debe leer una serie de caracteres hasta
llegar al terminador �#� y diga si es un pal�ndromo. Se puede suponer que la secuencia no
contiene espacios en blanco, ya que para poder leer un espacio en blanco no se puede emplear
cin >> caracter;. Si se quiere tambi�n considerar los espacios en blanco, se puede
utilizar la sentencia caracter = cin.get();. Cada vez que se ejecute cin.get()
el compilador lee un car�cter (incluido el espacio en blanco) desde la entrada de datos por
defecto. */

#include <iostream>

using namespace std;

int main () {
	
	int posicion_inicial, posicion_final;
	const int MAX_COMPONENTE = 30;
	char palabra [MAX_COMPONENTE], caracter;
	int i = 0, contador_caracteres = 1;
	
	bool palindromo;
	
	
	cout << "Introduzca una secuencia de caracteres : ";
	cout << "\n\nNOTA : La secuencia finalizar� cuando se introduzca el car�cter '#'.\n";
	
	
	// Bucle para la secuencia de caracteres
	
	do {
	
	cout << "\nCar�cter " << contador_caracteres << " : ";
	cin >> caracter;
	
	if ( caracter != '#' ) {			// Condicional para guardar los caracteres como componente de un vector excluyendo al terminador
	
		palabra [i] = caracter;
		i++;
		
		contador_caracteres++;
		
	}
	
	} while ( caracter != '#' );
	
	posicion_inicial = 0;
	posicion_final = i - 1;
	
	while ( posicion_inicial < posicion_final && palabra [posicion_inicial] == palabra [posicion_final] ) {			// Bucle para saber si la palabra es pal�ndroma o no
		
		posicion_inicial++;
		posicion_final--;
		
	}
	
	palindromo = posicion_inicial >= posicion_final;
	
	
	// Condicional para la salida de palindromo o no palindromo
	
	if ( palindromo ) {  
	
		cout << "\nLa palabra ";
		
		for ( int x = 0; x < i; x++ )
		
			cout << palabra [x];
			
		cout << " es pal�ndroma.\n\n";
		
	}
	
	else {
		
		cout << "\nLa palabra ";
		
		for ( int x = 0; x < i; x++ )
		
			cout << palabra [x];
			
		cout << " no es pal�ndroma.\n\n";
		
	}
	
	
	// Finalizaci�n del programa
	
	system ("PAUSE");
	return 0;
	
}
