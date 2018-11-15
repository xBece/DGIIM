/* Realizar un programa que permita saber si dos vectores de enteros son iguales. Se asume que
dos vectores de caracteres son iguales si el numero de componentes útiles de ambos vectores
es el mismo, y el valor de sus componentes coincide uno a uno. */

#include <iostream>

using namespace std;

int main () {
	
	const int MAY_COMPONENTE = 100;
	int vector1 [MAY_COMPONENTE], vector2 [MAY_COMPONENTE];
	int numero_util_1, numero_util_2, contador = 1;
	bool numero1_erroneo, numero2_erroneo, vectores_iguales;
	
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
	
	
	// Condicional para ver si el nº de componentes son distintos, si es así decimos que los vectores no pueden ser iguales y finalizamos el programa
	
	if ( numero_util_1 != numero_util_2 )
		
		cout << "\nLos vectores 1 y 2 son distintos pues el número de componentes útiles de cada uno es distinto.";
		
	else {
	
		cout << "\n";
	
		for ( int i = 0; i < numero_util_1; i++ ) {											// Bucle para guardar las componentes de cada vector
		
			cout << "\nIntroduce la componenente " << i << " del vector 1 : ";
			cin >> vector1 [i];
		
			cout << "\nIntroduce la componenente " << i << " del vector 2 : ";
			cin >> vector2 [i];
		
			cout << "\n";
		
		}
		
		do {																								// Bucle para ver si los componentes son iguales
			
			if ( vector1 [contador] == vector2 [contador] )
				
				vectores_iguales = true;
			
			else
				
				vectores_iguales = false;
				
			contador++;
			
		} while ( vectores_iguales && contador <= numero_util_1);

	
	// Condicional para la salida de iguales o no iguales
	
	if ( vectores_iguales == true )
	
		cout << "\n\nLos vectores son iguales.\n\n";
		
	else
		
		cout << "\n\nLos vectores no son iguales.\n\n";
		
	}
		
	
	// Finalización del programa
	
	system ("PAUSE");
	return 0;
	
}
	
	
