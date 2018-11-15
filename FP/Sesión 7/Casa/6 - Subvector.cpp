/* Dados dos vectores de enteros, construid un programa que devuelva las veces que el segundo
aparece en el primero. Por ejemplo, para los vectores (1,4,2,3,4,1,2,4,5) y (1,4,2), el programa
devolvería el valor 2. Amplía el programa para que tambien devuelva la posición donde empiezan
las coincidencias. */

#include <iostream>

using namespace std;

int ErrorComp(bool numero_erroneo, int & numero_util);		// Función para número útil de componentes inválido
void CompVector(int numero_util, int vector []);				// Función para introducir las componentes del vector
void MostrarVec(int numero_util, int vector[]);					// Función para mostrar por pantalla las componentes del vector


int main () {
	
	const int MAX_COMP = 100;
	int vector_1[MAX_COMP], vector_2[MAX_COMP];
	int numero_util_1, numero_util_2, j = 0, contador_repeticiones = 0;
	bool numero_erroneo_1, numero_erroneo_2;
	
	cout << "Introduce el número de componentes (máx. 100) que quiere que tenga el : ";
	
	cout << "\n\n\tVECTOR 1: ";
	cin >> numero_util_1;
	
	numero_erroneo_1 = ( numero_util_1 > 100 ) || ( numero_util_1 <= 0 );
	
	numero_util_1 = ErrorComp ( numero_erroneo_1, numero_util_1 );
	
	cout << "\n\tVECTOR 2: ";
	cin >> numero_util_2;
	
	numero_erroneo_2 = ( numero_util_2 > 100 ) || ( numero_util_2 <= 0 );
	numero_util_2 = ErrorComp ( numero_erroneo_2, numero_util_2 );
	
	cout << "\nA continuación, introduzca las componentes de los vectores : ";
	
	cout << "\n\n\tVECTOR 1: \n";
	CompVector(numero_util_1, vector_1);
	
	cout << "\n\n\tVECTOR 2: \n";
	CompVector(numero_util_2, vector_2);
	
	for ( int i = 0; i < numero_util_1; i++ ) {			// Recorremos el primer vector
	
		if ( vector_1 [i] == vector_2 [j] ) {				// Cuando se encuentre una componente del vector 2 en el 1, se empieza a ver si está la siguiente
				
			j++;
		
			if ( j == numero_util_2 ) {						// Si se encuentra el vector 2 contenido en 1, se aumenta 1 repetición y se sigue buscando si hay más
			
				contador_repeticiones++;
				j = 0;
				
			}
			
		}

		else															// Se empieza a buscar otra vez la componente inicial del vector 2
		
			j = 0;
		
	}
	
	cout << "\nEl vector "; 
	MostrarVec(numero_util_2, vector_2); 
	cout << " está contenido " << contador_repeticiones << " veces en el vector "; 
	MostrarVec (numero_util_1, vector_1);
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

int ErrorComp(bool numero_erroneo, int & numero_util) {
	
	while ( numero_erroneo ) {		
		
	cout << "\nERROR : Ha introducido un número de componentes mayor que el permitido.\n\n\t";
	cout << "NÚMERO DE COMPONENETES : ";
	cin >> numero_util;
		
	numero_erroneo_1 = ( numero_util_1 > 100 ) || ( numero_util_1 <= 0 );
		
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
