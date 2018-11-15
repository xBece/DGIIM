#include <iostream>
 
 using namespace std;
 
 int main () {

	// DECLARACI�N DE LAS VARIABLES A GUARDAR
 	
	int numero, contador_ceros = 0, contador_unos = 0, contador_primos = 1;
	int terminador_2parte = -1;


	// ENTRADA
 	
	cerr << "Introduzca una secuencia de ceros y unos.";
	cerr << "\n\nNOTA : La secuencia finalizar� cuando se introduzcan 5 ceros seguidos." << "\n\n\t";
	cin >> numero;


	// BUCLE POR SI EL N�MERO INTRODUCIDO NO ES NI 0 NI 1
		
	while ( numero != 0 && numero != 1 ) {
		
		cerr << "\nERROR : El d�gito introducido no es 0 ni 1, por favor introduzca el dato pedido." << "\n\n\t";
		cin >> numero;

	}


	// CONDICIONAL PARA TENER EN CUENTA EL AUMENTO DEL CONTADOR DE UNOS SI EL PRIMER N�MERO INTRODUCIDO FUERA DEL BUCLE ES UN 1
	 	
	if ( numero == 1 ) 
	
		contador_unos++;


	// BUCLE DE SECUENCIA
			
	while ( ( numero == 0 || numero == 1 ) && contador_ceros < 5 ) {
		
		cin >> numero;
	
		// BUCLE QUE CALCULA EL N�MERO PRIMO
			
		while ( numero == 1 ) {
			
			cerr << "\t";
			cin >> numero;
			contador_ceros = 0;
			contador_unos++;
			
		}
		
		// SALIDA DE PRIMOS
		
		if ( contador_unos > 0 ) {
		
			cerr << "\nPrimo " << contador_primos << " = ";
			cout << contador_unos << "\t";
			cerr << "\n\n";
			contador_primos++;
			
		}
		
		// BUCLE PARA EL TERMINADOR
		
		if ( numero == 0 )
			
			contador_ceros++;
			contador_unos = 0;
		
		// BUCLE POR SI SE INTRODUCE UN N�MERO ERR�NEO 
		
		while ( numero != 1 && numero != 0 ) {
			
			cerr << "\nERROR : Has metido en la sucesi�n un d�gito no v�lido. Introduzca un 0 o 1 por favor\n\n\t";
			cin >> numero;
			
			if ( numero == 1 ) {							// Condicional por si el n�mero es 1 lo contamos para hallar el n�mero primo
			
				contador_unos++;
				contador_ceros = 0;
			
			}
			
			if ( numero == 0 ) {							// Condicional por si el n�mero es 0 lo contamos para la aproximaci�n del posible terminador
				
				contador_ceros++;
				contador_unos = 0;
				
			}
			
		}
	
	}
	
	
	// FINALIZACI�N DEL PROGRAMA
	
	cout << terminador_2parte;
	cerr << "\n\n";
	
}
