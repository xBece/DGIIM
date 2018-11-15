/* Implementar un programa que intercambie dos componentes de un vector de enteros. Por
ejemplo, si el vector es (1,2,5,3), y el usuario intercambia las componentes 1 y 3, se quedaría 
como (5,2,1,3). El programa debe comprobar si las componentes son correctas. */

#include <iostream>

using namespace std;

int main () {
	
	const int MAX_COMPONENTE = 100;
	int vector[MAX_COMPONENTE];
	int numero_util, componente_1, componente_2, intercambiar;
	bool numero_erroneo;
	
	cout << "Introduce el número de componentes (máx. 100) que quiere que tenga el vector : ";	
	cin >> numero_util;
	
	numero_erroneo = ( numero_util > 100 ) || ( numero_util <= 0 );			// Variable booleana por si el número de componentes del vector es mayor que 100
	
	while ( numero_erroneo ) {																// Bucle para que introduzca nuevo nº de componentes si el anterior era erróneo
		
		cout << "\nERROR : Ha introducido un número de componentes mayor que el permitido.\n\n\t";
		cout << "NÚMERO DE COMPONENETES : ";
		cin >> numero_util;
		
		numero_erroneo = ( numero_util > 100 ) || ( numero_util <= 0 );
		
	}
	
	for ( int i = 0; i < numero_util; i++ ) {		// Bucle para guardar las componentes del vector
		
		cout << "\nIntroduce la componenente " << i << " del vector : ";
		cin >> vector [i];
		
	}
	
	cout << "\nIntroduzca los componentes que desea intercambiar : ";
	
	cout << "\n\n\tCOMPONENTE : ";
	cin >> componente_1;
	
	cout << "\n\tCOMPONENTE : ";
	cin >> componente_2;
	
	// Utilizamos una variable auxiliar para intercambiar los valores de las componentes 
	
	intercambiar = vector [componente_1];
	vector [componente_1] = vector [componente_2];
	vector [componente_2] = intercambiar;
	
	cout << "\n\nEl vector con las componentes intercambiadas es : ";
	
	// Bucle para la salida de componentes del vector final
	
	for ( int i = 0; i < numero_util; i++ )
	
		cout << vector [i] << " ";
	
	
	// Finalización del programa
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}	


