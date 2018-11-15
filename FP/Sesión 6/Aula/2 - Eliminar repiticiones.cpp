/* Realizar un programa que modifique un vector, eliminando todas las repeticiones de un mismo
valor. Ejemplo: Para el vector (1, 1, 2, 3, 4, 3, 2), el vector resultante sería (1, 2, 3, 4). */

#include <iostream>

using namespace std;

int main () {
	
	const int MAX_COMPONENTE = 100;
	int vector [MAX_COMPONENTE], vector_aux [MAX_COMPONENTE], vector_final [MAX_COMPONENTE];
	int numero_util, contador = 0, j = 0, z = 0, componente;
	bool numero_erroneo;
	
	cout << "Introduzca el número de componentes que quiere que tenga su vector : ";
	cin >> numero_util;
	
	numero_erroneo = numero_util > 100;				// Variable booleana por si el número de componentes del vector es mayor que 100
	
	while ( numero_erroneo ) {							// Bucle para que introduzca nuevo nº de componentes si el anterior era erróneo
		
		cout << "\nERROR : Ha introducido un número de componentes mayor que el permitido.\n\n\t";
		cout << "NÚMERO DE COMPONENETES : ";
		cin >> numero_util;
		
		numero_erroneo = numero_util > 100;
		
	}
	
	// Bucle para guardar los componentes del vector
	
	for ( int i = 0; i < numero_util; i++ ) {
		
		cout << "\nIntroduce la componenente " << i << " del vector : ";
		cin >> vector [i];
		
	}
	
	
	// Bucle para eliminar las repeticiones
	
	for ( int i = 0; i < numero_util; i++ ) {
		
		componente = vector [i];
		
		vector_aux [j] = componente;
		
		j++;
		
		for ( int k = 0; k < numero_util; k++ )
			
			if ( vector_aux [k] == componente )
			
				contador++;
				
		if ( contador == 1 ) {
			
			vector_final [z] = componente;
			z++;
			
		}
		
		contador = 0;
		
	}
	
	cout << "\nEl vector final sin repeticiones es : ";
	
	
	// Bucle para la salida de componentes del vector final
		
	for ( int i = 0; i < z; i++ )
		
		cout << vector_final [i] << " ";
	
	
	// Finalización del programa
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}		
	
