#include <iostream>

using namespace std;

int main () {
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	int numero_primo, numero_decodificado = 1, divisores;
	
	cerr << "Introduzca una secuencia de n�meros primos.\n";
	
	
	// BUCLE DE SECUENCIA 
	
	do {
		
		// BUCLE DE N�MEROS PRIMOS
		
		do {
		
		divisores = 0;
		cerr << "\n\t";
		cin >> numero_primo;
			
		for ( int i=1; i <= numero_primo; i++ )		// BUCLE PARA CALCULAR EL N�MERO DE DIVISORES
		
			if ( numero_primo % i == 0 )
			
				divisores++;
		
		if ( numero_primo == 0 || numero_primo == 1 || numero_primo < -1 ) 			// EXCLUIMOS AL 0, 1 Y N�MEROS NEGATIVOS DE LOS N�MEROS PRIMOS
			
			 divisores = 3;
					
		if ( divisores > 2 )																			// CONDICIONAL PARA N�MEROS NO PRIMOS
			
			cerr << "\nERROR : Ha introducido un n�mero que no es primo.\n";
	
		} while ( divisores > 2 );
		
		if ( numero_primo != -1 )																	// EXCLUIMOS EL TERMINADOR DEL PRODUCTO PARA HALLAR EL N�MERO DECODIFICADO
		
			numero_decodificado *= numero_primo;
			
		if ( numero_decodificado == 1 ) {														// REPETIMOS EL BUCLE SI EL PRIMER D�GITO INTRODUCIDO ES EL TERMINADOR
				
			cerr << "\nERROR : Ha introducido el terminador -1 como primer d�gito de la secuencia. Inserte n�meros primos por favor.\n";
			numero_primo = 1;
		
		}
				
	} while ( numero_primo != -1 );
	
	
	// SALIDA
	
	cerr << "\n\nEl n�mero decodificado es ";
	cout << numero_decodificado;
	
	
	// FINALIZACI�N DEL PROGRAMA
	
	cout << "\n\n";
	
}
	
	
			
	
