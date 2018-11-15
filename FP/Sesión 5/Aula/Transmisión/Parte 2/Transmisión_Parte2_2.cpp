#include <iostream>

using namespace std;

int main () {
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	int numero_primo, numero_decodificado = 1, divisores;
	
	cerr << "Introduzca una secuencia de números primos.\n";
	
	
	// BUCLE DE SECUENCIA 
	
	do {
		
		// BUCLE DE NÚMEROS PRIMOS
		
		do {
		
		divisores = 0;
		cerr << "\n\t";
		cin >> numero_primo;
			
		for ( int i=1; i <= numero_primo; i++ )		// BUCLE PARA CALCULAR EL NÚMERO DE DIVISORES
		
			if ( numero_primo % i == 0 )
			
				divisores++;
		
		if ( numero_primo == 0 || numero_primo == 1 || numero_primo < -1 ) 			// EXCLUIMOS AL 0, 1 Y NÚMEROS NEGATIVOS DE LOS NÚMEROS PRIMOS
			
			 divisores = 3;
					
		if ( divisores > 2 )																			// CONDICIONAL PARA NÚMEROS NO PRIMOS
			
			cerr << "\nERROR : Ha introducido un número que no es primo.\n";
	
		} while ( divisores > 2 );
		
		if ( numero_primo != -1 )																	// EXCLUIMOS EL TERMINADOR DEL PRODUCTO PARA HALLAR EL NÚMERO DECODIFICADO
		
			numero_decodificado *= numero_primo;
			
		if ( numero_decodificado == 1 ) {														// REPETIMOS EL BUCLE SI EL PRIMER DÍGITO INTRODUCIDO ES EL TERMINADOR
				
			cerr << "\nERROR : Ha introducido el terminador -1 como primer dígito de la secuencia. Inserte números primos por favor.\n";
			numero_primo = 1;
		
		}
				
	} while ( numero_primo != -1 );
	
	
	// SALIDA
	
	cerr << "\n\nEl número decodificado es ";
	cout << numero_decodificado;
	
	
	// FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";
	
}
	
	
			
	
