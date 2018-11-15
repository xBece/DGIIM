/* Modifiquemos el ejercicio 2 del capital y los intereses de la primera relación. Supongamos
ahora que se quiere reinvertir todo el dinero obtenido (el original C más los intereses producidos) en 
otro plazo fijo a un año. Y así, sucesivamente. Construid un programa para que lea el capital, el interés
y un número de años N, y calcule e imprima todo el dinero obtenido durante cada uno de los N años, suponiendo 
que todo lo ganado (incluido el capital original C) se reinvierte a plazo fijo durante el siguiente año. */

#include <iostream>

using namespace std;

int main(){							//Programa Principal	
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	double capital, interes;			
	int anio;

	// ENTRADA
	
	cout << "Este programa hallará el dinero total que obtendrá tras ingresar en nuestro banco una cantidad de dinero a un interés x durante un determinado número de años.";
	cout << "\n\nDigite a continuación los datos pedidos: ";
	
	cout << "\n\n\tCapital inicial: ";
	cin >> capital;
	
	cout << "\n\tInterés: ";
	cin >> interes;
	
	cout << "\n\tAños: ";
	cin >> anio;
	
	
	// BUCLE Y SALIDA
	
	for ( int i=1; i <= anio; i++ ) {
	
		capital = capital + capital * (interes/100);	
	
		cout << "\nTras el " << i << "º año el capital total será de " << capital << " €.";
		
	}
	
	// FINALIZACÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
	
