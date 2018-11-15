/* Escribir un programa que lea una secuencia de números enteros en el rango de 0 a 100 ter-
minada en un número mayor que 100 o menor que 0 y encuentre la subsecuencia de números
ordenada, de menor a mayor, de mayor longitud. El programa nos debe decir la posición
donde comienza la subsecuencia y su longitud */

#include <iostream>

using namespace std;

int main () {
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	int numero, inicio, contador_posicion = 1, longitud = 1, posicion = 1, longitud_mayor = 0, posicion_mayor = 1;
	
	
	// ENTRADA
	
	cout << "Introduzca una secuencia de números enteros en el rango de 0 a 100.";
	cout << "\n\nNOTA : Se utilizará como terminador cualquier número menor que 0 o mayor que 100.\n\n\t";
	
	cin >> numero;
	
	
	// BUCLE DE ERROR
	
	while ( numero < 0 || numero > 100 ) {
		
			cout << "\n\nERROR : Ha introducido directamente un terminador, por lo que no ha realizado ninguna secuencia. Por favor, vuévalo a intentar introduciendo los datos de forma correcta.";
			cout << "\n\n\t";
			cin >> numero;
			
	}
	
	
	// BUCLE DE SECUENCIA
	
	while ( numero >= 0 && numero <= 100 ) {
		
		inicio = numero;
		
		cout << "\n\t";
		cin >> numero;
		
		contador_posicion++;
		
		if ( numero >= inicio )				// Subsecuencia
			
			longitud++;
		
		else {									// Se rompe la subsecuencia
			
			longitud = 1;
			posicion = contador_posicion;
			
		}
		
		if ( posicion_mayor <= posicion && longitud_mayor <= longitud ) {					// Guardamos la posición y longitud
			
			posicion_mayor = posicion;
			longitud_mayor = longitud;
			
		}
		
	}
	
	
	// SALIDA
	
	cout << "\n\nLa subsecuencia de números ordenada de menor a mayor longitud comienza en la posición " << posicion_mayor << " y tiene de longitud " << longitud_mayor << ".";
	
	
	// FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	
	return 0;
	
}

