/* Implementar un programa que calcule el número de secuencias ascendentes de un vector de
enteros. Por ejemplo, el vector {2, 4, 1, 1, 7, 2, 1} tiene 4 secuencias que son {2, 4}, {1, 1, 7},
{2}, {1}. */ 

#include <iostream>

int ErrorComp(bool numero_erroneo, int & numero_util);				// Función para número útil de componentes inválido
void CompVector(int numero_util, int vector []);						// Función para introducir las componentes del vector
void MostrarVec(int numero_util, int vector[]);							// Función para mostrar por pantalla las componentes del vector

using namespace std;

int main () {
	
	const int MAX_COMP = 100;
	int vector [MAX_COMP];
	int numero_util, j = 0, z = 0, componentes = 0;
	bool numero_erroneo, end = false;
	
	cout << "Introduce el número de componentes (máx. 100) que quiere que tenga el vector : ";
	cin >> numero_util;
	
	numero_erroneo = ( numero_util > 100 ) || ( numero_util <= 0 );
	numero_util = ErrorComp ( numero_erroneo, numero_util);
	
	cout << "\nA continuación, introduzca las componentes del vector : \n";
	CompVector(numero_util, vector);
	
	cout << "\nLas subsecuencias ascendentes son : ";
	
	for ( int i = 0; i < numero_util; i++ ) {
		
		j = i + 1;
		
		if ( j == numero_util ) 	// Condicional para que no se de el siguiente condicional cuando la componente j se encuentra indeterminada
		
			end = true;
			
		if ( vector [i] <= vector [j] && end == false ) {			// Condicional que va guardando la subsecuencia ascendente
			
				vector [z] = vector [i];
				z++;
				componentes++;
			
		}
		
		else {																	// Salida de la subsecuencia y reinicio para empezar a contar otra
				
			vector [z] = vector [i];
			componentes++;		
			MostrarVec(componentes, vector);
			
			z = 0;
			componentes = 0;
		
			cout << "  ";
		
		}
	
	}
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

int ErrorComp(bool numero_erroneo, int & numero_util) {
	
	while ( numero_erroneo ) {		
		
	cout << "\nERROR : Ha introducido un número de componentes mayor que el permitido.\n\n\t";
	cout << "NÚMERO DE COMPONENETES : ";
	cin >> numero_util;
		
	numero_erroneo = ( numero_util > 100 ) || ( numero_util <= 0 );
		
	} 
	
	return numero_util;
	
}

void CompVector(int numero_util, int vector []) {
	
	for ( int i = 0; i < numero_util; i++ ) {
		
		cout << "\nIntroduce la componenente " << i << " del vector : ";
		cin >> vector [i];
	
	}
	
}

void MostrarVec(int numero_util, int vector[]) {
	
	for ( int i = 0; i < numero_util; i++ )
	
		cout << vector [i] << " ";
		
}
	
