/* Implementar un programa que nos diga si una secuencia de caracteres es un palíndromo,
es decir, que se lee igual de izquierda a derecha que de derecha a izquierda. Por ejemplo,
’a’,’b’,’b’,’a’ sería un palíndromo, pero ’a’,’c’,’b’,’a’ no lo sería. Si la secuencia tiene un
numero impar de componentes, la que ocupa la posición central es descartada, por lo que ´
’a’,’b’,’j’,’b’,’a’ sería un palíndromo. El programa debe leer una serie de caracteres hasta
llegar al terminador ’#’ y diga si es un palíndromo. Se puede suponer que la secuencia no
contiene espacios en blanco, ya que para poder leer un espacio en blanco no se puede emplear
cin >> caracter;. Si se quiere también considerar los espacios en blanco, se puede
utilizar la sentencia caracter = cin.get();. Cada vez que se ejecute cin.get()
el compilador lee un carácter (incluido el espacio en blanco) desde la entrada de datos por
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
	cout << "\n\nNOTA : La secuencia finalizará cuando se introduzca el carácter '#'.\n";
	
	
	// Bucle para la secuencia de caracteres
	
	do {
	
	cout << "\nCarácter " << contador_caracteres << " : ";
	cin >> caracter;
	
	if ( caracter != '#' ) {			// Condicional para guardar los caracteres como componente de un vector excluyendo al terminador
	
		palabra [i] = caracter;
		i++;
		
		contador_caracteres++;
		
	}
	
	} while ( caracter != '#' );
	
	posicion_inicial = 0;
	posicion_final = i - 1;
	
	while ( posicion_inicial < posicion_final && palabra [posicion_inicial] == palabra [posicion_final] ) {			// Bucle para saber si la palabra es palíndroma o no
		
		posicion_inicial++;
		posicion_final--;
		
	}
	
	palindromo = posicion_inicial >= posicion_final;
	
	
	// Condicional para la salida de palindromo o no palindromo
	
	if ( palindromo ) {  
	
		cout << "\nLa palabra ";
		
		for ( int x = 0; x < i; x++ )
		
			cout << palabra [x];
			
		cout << " es palíndroma.\n\n";
		
	}
	
	else {
		
		cout << "\nLa palabra ";
		
		for ( int x = 0; x < i; x++ )
		
			cout << palabra [x];
			
		cout << " no es palíndroma.\n\n";
		
	}
	
	
	// Finalización del programa
	
	system ("PAUSE");
	return 0;
	
}
