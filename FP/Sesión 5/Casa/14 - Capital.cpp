/* Sobre el mismo ejercicio del capital y los intereses, construid un programa para calcular cuantos
a�os han de pasar hasta llegar a doblar, como m�nimo, el capital inicial. Los datos que han
de leerse desde teclado son el capital inicial y el inter�s anual.  */

#include <iostream>

using namespace std;

int main(){							//Programa Principal	
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	double capital, interes;			
	double doble_capital;
	int anios = 0;

	// ENTRADA
	
	cout << "Este programa hallar� la cantidad de a�os que deber� dejar ingresado su dinero a un determinado interes para doblarlo.";
	cout << "\n\nDigite a continuaci�n los datos pedidos: ";
	
	cout << "\n\n\tCapital inicial: ";
	cin >> capital;
	
	cout << "\n\tInter�s: ";
	cin >> interes;
	
	doble_capital = 2*capital;
	
	
	// BUCLE Y SALIDA
	
	while ( capital <= doble_capital ) {
	
		capital = capital + capital * (interes/100);
		
		anios++;
	
	}
	
	cout << "\nDeber�n pasar " << anios << " a�os para que el capital llegue a " << capital << " �.";
	
	// FINALIZAC�N DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
	
