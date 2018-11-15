/* Suponiendo que disponemos de dos vectores ya ordenados ascendentemente, realizar un programa
que muestre un nuevo vector ordenador con las componentes de los otros dos vectores.
Por ejemplo, para los vectores de entrada (1,3,5,9,10) y (1,2,4,6,8), el vector resultante sería
(1,1,2,3,4,5,6,8,9,10). */

#include <iostream>

using namespace std;

int main () {

	const int MAY_COMPONENTE = 100;
	int vector1 [MAY_COMPONENTE], vector2 [MAY_COMPONENTE], vector3 [MAY_COMPONENTE];
	int numero_util_1, numero_util_2, numero_util_3;
	bool numero1_erroneo, numero2_erroneo;
	int z = 0, j = 0, x = 0;
	
	cout << "Introduce el número de componentes (máx. 100) que quiere que tenga el : ";	
	
	cout << "\n\n\tVECTOR 1: ";
	cin >> numero_util_1;
	
	numero1_erroneo = numero_util_1 > 100;			// Variable booleana por si el número de componentes del vector es mayor que 100
	
	while ( numero1_erroneo ) {						// Bucle para que introduzca nuevo nº de componentes si el anterior era erróneo
		
		cout << "\nERROR : Ha introducido un número de componentes mayor que el permitido.\n\n\t";
		cout << "NÚMERO DE COMPONENETES : ";
		cin >> numero_util_1;
		
		numero1_erroneo = numero_util_1 > 100;
		
	}
		
	cout << "\n\tVECTOR 2: ";
	cin >> numero_util_2;
	
	numero2_erroneo = numero_util_2 > 100;			// Variable booleana por si el número de componentes del vector es mayor que 100
	
	while ( numero2_erroneo ) {						// Bucle para que introduzca nuevo nº de componentes si el anterior era erróneo
	
		cout << "\nERROR : Ha introducido un número de componentes mayor que el permitido.\n\n\t";
		cout << "NÚMERO DE COMPONENETES : ";
		cin >> numero_util_2;
		
	numero2_erroneo = numero_util_2 > 100;
	
	}
	
	cout << "\n\nNOTA: Introduzca las componentes de los vectores ordenadas de forma ascendente.\n\n";
	
	
	// Bucles para guardar los componentes de cada vector 
	
	for ( int i = 0; i < numero_util_1; i++ ) {
		
		cout << "\nIntroduce la componenente " << i << " del vector 1 : ";
		cin >> vector1 [i];
		
	}
	
	cout << "\n\n";
	
	for ( int i = 0; i < numero_util_2; i++ ) {
	
		cout << "\nIntroduce la componenente " << i << " del vector 2 : ";
		cin >> vector2 [i];
		
	}
	
	numero_util_3 = numero_util_1 + numero_util_2;					// Hallamos el nº de componentes útiles de nuestro vector final
	
	
	// Bucle para hallar las componentes del vector final
	
	while ( x < numero_util_3 ) { 
	
		while ( ( vector1 [z] <= vector2 [j] && x < numero_util_3 && z < numero_util_1 ) || ( j == numero_util_2 && z < numero_util_1 ) ) {
			
			vector3 [x] = vector1 [z];
			z++;
			x++;

		}
	
		while ( ( vector1 [z] > vector2 [j] && x < numero_util_3 && j < numero_util_2 ) || ( z == numero_util_1 && j < numero_util_2 ) ) {
			
			vector3 [x] = vector2 [j];
			j++;
			x++;
			
		}
		
	}
	
	cout << "\n\nEl vector ordenado que contiene los componentes de ambos vectores es: ";
	
	// Bucle para la salida de componentes del vector final
	
	for ( x = 0; x < numero_util_3; x++ )
	
		cout << vector3 [x] << " ";
	
	
	// Finalización del programa
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

