/* Implementar un programa que modifique un vector de caracteres eliminando la may�sculas.
Por ejemplo, si el vector es {�S�,�o�,�Y�,� �,�y�,�O�}, este debe quedarse con � {�o�,� �,�y�}.
Utiliza dos bucles anidados */

#include <iostream>

using namespace std;

int ErrorComp(bool numero_erroneo, int & numero_util);		// Funci�n para n�mero �til de componentes inv�lido
void CompVector(int numero_util, char vector []);				// Funci�n para introducir las componentes del vector
void MostrarVec(int numero_util, char vector[]);				// Funci�n para mostrar por pantalla las componentes del vector

int main () {
	
	const int MAX_COMP = 100;
	char vector [MAX_COMP];
	int numero_util, componentes = 0;
	bool numero_erroneo, es_minuscula;
	
	cout << "Introduce el n�mero de componentes (m�x. 100) que quiere que tenga el vector : ";
	cin >> numero_util;
	
	numero_erroneo = ( numero_util > 100 ) || ( numero_util <= 0 );
	numero_util = ErrorComp ( numero_erroneo, numero_util);
	
	cout << "\nA continuaci�n, introduzca las componentes del vector : \n";
	CompVector(numero_util, vector);
	
	
	for ( int i = 0; i < numero_util; i++ ) {
	
	es_minuscula = vector[i] < 'A' || vector[i] > 'Z';	
	
		for ( int j = 0; es_minuscula == true; j++ ) {					// Guardamos todas las min�sculas consecutivas
			
			vector [j] = vector [i];
			componentes++;
			
			i++;
			es_minuscula = vector[i] < 'A' || vector[i] > 'Z';
		
		}
	
	}
	
	cout << "\n";
	MostrarVec(componentes, vector);
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;	
	
}

int ErrorComp(bool numero_erroneo, int & numero_util) {
	
	while ( numero_erroneo ) {		
		
	cout << "\nERROR : Ha introducido un n�mero de componentes mayor que el permitido.\n\n\t";
	cout << "N�MERO DE COMPONENETES : ";
	cin >> numero_util;
		
	numero_erroneo = numero_util > 100;
		
	} 
	
	return numero_util;
	
}

void CompVector(int numero_util, char vector []) {
	
	for ( int i = 0; i < numero_util; i++ ) {
		
		cout << "\nIntroduce la componenente " << i << " del vector : ";
		cin >> vector [i];
	
	}
	
}

void MostrarVec(int numero_util, char vector[]) {
	
	for ( int i = 0; i < numero_util; i++ )
	
		cout << vector [i] << " ";
		
}

// REQUIERE MODIFICACI�N, MAL HECHO
	
	

