/* Sobre el mismo ejercicio del capital y los intereses, construid un programa para calcular cuantos
años han de pasar hasta llegar a doblar, como mínimo, el capital inicial. Los datos que han
de leerse desde teclado son el capital inicial y el interés anual.  */

#include <iostream>

using namespace std;

int main(){							//Programa Principal	
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	double capital, interes;			
	double doble_capital;
	int anios = 0;

	// ENTRADA
	
	cout << "Este programa hallará la cantidad de años que deberá dejar ingresado su dinero a un determinado interes para doblarlo.";
	cout << "\n\nDigite a continuación los datos pedidos: ";
	
	cout << "\n\n\tCapital inicial: ";
	cin >> capital;
	
	cout << "\n\tInterés: ";
	cin >> interes;
	
	doble_capital = 2*capital;
	
	
	// BUCLE Y SALIDA
	
	while ( capital <= doble_capital ) {
	
		capital = capital + capital * (interes/100);
		
		anios++;
	
	}
	
	cout << "\nDeberán pasar " << anios << " años para que el capital llegue a " << capital << " €.";
	
	// FINALIZACÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
	
