/* Un número perfecto es aquel que es igual a la suma de todos sus divisores positivos excepto
él mismo. El primer número perfecto es el 6, ya que sus divisores son 1, 2 y 3 y 6 = 1 + 2 + 3.
Escribir un programa que muestre el mayor número perfecto que sea menor a un número dado por el usuario. */

#include <iostream>

using namespace std;

int main () {
	
	int numero, posible_perfecto = 0;
	bool numero_perfecto;
	
	cout << "Introduce un número entero positivo : \n\n\t";
	cin >> numero;
	
	while ( numero < 0 ) {
		
		cout << "\nERROR : Se ha introducido un número negativo. Siga las intrucciones por favor.\n\nNúmero = ";
		cin >> numero;
		
	}
	
	if ( numero <= 6 ) 
	
		cout << "\nNo existe ningún número perfecto menor que " << numero;
		
	else { 
	
		do {
	
		numero -= 1;
	
		for ( int i=1; i <= numero/2; i++ )
		
			if ( numero % i == 0 ) 
			
				posible_perfecto += i;
	
		numero_perfecto = ( numero == posible_perfecto );
	
		if ( numero_perfecto )
	
			cout << "\n\nEl mayor número perfecto menor al número introducido es " << posible_perfecto << ".";
		
		else
			
			posible_perfecto = 0;
		
		} while ( numero_perfecto == false );
	
		cout << "\n\n";
	
		system ("PAUSE");
		return 0;
		
	}
	
}
