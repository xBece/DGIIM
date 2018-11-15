/* Un n�mero perfecto es aquel que es igual a la suma de todos sus divisores positivos excepto
�l mismo. El primer n�mero perfecto es el 6, ya que sus divisores son 1, 2 y 3 y 6 = 1 + 2 + 3.
Escribir un programa que muestre el mayor n�mero perfecto que sea menor a un n�mero dado por el usuario. */

#include <iostream>

using namespace std;

int main () {
	
	int numero, posible_perfecto = 0;
	bool numero_perfecto;
	
	cout << "Introduce un n�mero entero positivo : \n\n\t";
	cin >> numero;
	
	while ( numero < 0 ) {
		
		cout << "\nERROR : Se ha introducido un n�mero negativo. Siga las intrucciones por favor.\n\nN�mero = ";
		cin >> numero;
		
	}
	
	if ( numero <= 6 ) 
	
		cout << "\nNo existe ning�n n�mero perfecto menor que " << numero;
		
	else { 
	
		do {
	
		numero -= 1;
	
		for ( int i=1; i <= numero/2; i++ )
		
			if ( numero % i == 0 ) 
			
				posible_perfecto += i;
	
		numero_perfecto = ( numero == posible_perfecto );
	
		if ( numero_perfecto )
	
			cout << "\n\nEl mayor n�mero perfecto menor al n�mero introducido es " << posible_perfecto << ".";
		
		else
			
			posible_perfecto = 0;
		
		} while ( numero_perfecto == false );
	
		cout << "\n\n";
	
		system ("PAUSE");
		return 0;
		
	}
	
}
