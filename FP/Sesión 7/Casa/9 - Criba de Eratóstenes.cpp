/* Para obtener una lista de todos los numeros primos menores que un determinado n�mero n,
se puede utilizar la Criba de Erat�stenes. Ese m�todo consiste en hacer una lista de todos
los n�meros desde 2 hasta n - 1. Tomamos el 2 y tachamos todos los m�ltiplos de 2. Luego
tomamos el siguiente n�mero que se encuentra despu�s de 2 y que est� sin tachar, tachando
de nuevo todos sus m�ltiplos. Repetimos este paso hasta que se acaben los n�meros. Los
n�meros que quedaron sin tachar son los que no tienen divisores (salvo el 1 y �l mismo),
o sea, los primos. Escribir un programa que obtenga los n�meros primos menores que un
determinado n�mero n utilizando el m�todo anterior */

#include <iostream>

using namespace std;

int ErrorComp(bool numero_erroneo, int & numero_util);				// Funci�n para n�mero �til de componentes inv�lido
void MostrarVec(int numero_util, int vector[]);							// Funci�n para mostrar por pantalla las componentes del vector

int main () {
	
	const int MAX_COMP = 10000;
	int vector [MAX_COMP];
	int numero_util, numero, j = 0;
	bool numero_erroneo;
	
	cout << "Este programa le proporcionar� todos los n�meros primos menores que el n�mero introducido.";
	cout << "\n\nIntroduzca un n�mero (m�x.1000) : ";

	cin >> numero_util;
	numero_erroneo = ( numero_util > 1000 ) || ( numero_util <= 0 );
	numero_util = ErrorComp ( numero_erroneo, numero_util);
	
	numero = numero_util;
	numero_util--;
	
	for ( int i = 0; i < numero_util; i++ )					// Guardamos en un vector todos los n�meros menores que el introducido ( y �l mismo ) menos el 1
	
		vector [i] = i + 2;
		
	numero_util--;
	
	for ( int i = 0; i < numero_util; i++ ) {
		
		j = i + 1;
		
		while ( j < numero_util ) {								// Bucle para mirar todos los m�ltiplos de una componente, esto no se hace si la componente es el n�mero introducido
			
			if ( vector [j] % vector [i] == 0 ) {
				
				for ( int z = j; z < numero_util; z++ )		// Quitamos del vector la componente si es m�ltiplo
					
					vector [z] = vector [z + 1];
					
				numero_util--;
				
			}
				
			else
				
				j++;														// Si la componente no es m�ltiplo la dejamos y miramos la siguiente
					
		}
				
	}
		
	cout << "\nLos n�meros primos menores que " << numero << " son : \n\n";
	MostrarVec(numero_util, vector);
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;

}
	
int ErrorComp(bool numero_erroneo, int & numero_util) {
	
	while ( numero_erroneo ) {		
		
	cout << "\nERROR : Ha introducido un n�mero de componentes mayor que el permitido.\n\n\t";
	cout << "N�MERO DE COMPONENETES : ";
	cin >> numero_util;
		
	numero_erroneo = ( numero_util > 1000 ) || ( numero_util <= 0 );
		
	} 
	
	return numero_util;
	
}


void MostrarVec(int numero_util, int vector[]) {
	
	for ( int i = 0; i < numero_util; i++ )
	
		cout << vector [i] << " ";
		
}
