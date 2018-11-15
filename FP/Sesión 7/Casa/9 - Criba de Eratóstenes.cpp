/* Para obtener una lista de todos los numeros primos menores que un determinado número n,
se puede utilizar la Criba de Eratóstenes. Ese método consiste en hacer una lista de todos
los números desde 2 hasta n - 1. Tomamos el 2 y tachamos todos los múltiplos de 2. Luego
tomamos el siguiente número que se encuentra después de 2 y que esté sin tachar, tachando
de nuevo todos sus múltiplos. Repetimos este paso hasta que se acaben los números. Los
números que quedaron sin tachar son los que no tienen divisores (salvo el 1 y él mismo),
o sea, los primos. Escribir un programa que obtenga los números primos menores que un
determinado número n utilizando el método anterior */

#include <iostream>

using namespace std;

int ErrorComp(bool numero_erroneo, int & numero_util);				// Función para número útil de componentes inválido
void MostrarVec(int numero_util, int vector[]);							// Función para mostrar por pantalla las componentes del vector

int main () {
	
	const int MAX_COMP = 10000;
	int vector [MAX_COMP];
	int numero_util, numero, j = 0;
	bool numero_erroneo;
	
	cout << "Este programa le proporcionará todos los números primos menores que el número introducido.";
	cout << "\n\nIntroduzca un número (máx.1000) : ";

	cin >> numero_util;
	numero_erroneo = ( numero_util > 1000 ) || ( numero_util <= 0 );
	numero_util = ErrorComp ( numero_erroneo, numero_util);
	
	numero = numero_util;
	numero_util--;
	
	for ( int i = 0; i < numero_util; i++ )					// Guardamos en un vector todos los números menores que el introducido ( y él mismo ) menos el 1
	
		vector [i] = i + 2;
		
	numero_util--;
	
	for ( int i = 0; i < numero_util; i++ ) {
		
		j = i + 1;
		
		while ( j < numero_util ) {								// Bucle para mirar todos los múltiplos de una componente, esto no se hace si la componente es el número introducido
			
			if ( vector [j] % vector [i] == 0 ) {
				
				for ( int z = j; z < numero_util; z++ )		// Quitamos del vector la componente si es múltiplo
					
					vector [z] = vector [z + 1];
					
				numero_util--;
				
			}
				
			else
				
				j++;														// Si la componente no es múltiplo la dejamos y miramos la siguiente
					
		}
				
	}
		
	cout << "\nLos números primos menores que " << numero << " son : \n\n";
	MostrarVec(numero_util, vector);
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;

}
	
int ErrorComp(bool numero_erroneo, int & numero_util) {
	
	while ( numero_erroneo ) {		
		
	cout << "\nERROR : Ha introducido un número de componentes mayor que el permitido.\n\n\t";
	cout << "NÚMERO DE COMPONENETES : ";
	cin >> numero_util;
		
	numero_erroneo = ( numero_util > 1000 ) || ( numero_util <= 0 );
		
	} 
	
	return numero_util;
	
}


void MostrarVec(int numero_util, int vector[]) {
	
	for ( int i = 0; i < numero_util; i++ )
	
		cout << vector [i] << " ";
		
}
