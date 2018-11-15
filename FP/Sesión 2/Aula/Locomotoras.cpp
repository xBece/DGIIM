// Programa para hallar la distancia recorrida por dos locomotoras antes de impactar

#include <iostream>			// Inclusión de los recursos de E/S

using namespace std;

int main (){					// Programa principal
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	double velocidad1, velocidad2;									
	double tiempo;
	double distancia_recorrida1, distancia_recorrida2;
	double distancia_inicial;
	
	// ENTRADA
	
	cout << "Este programa hallará las distancias recorridas por dos locomotoras antes de que choquen. Para ello, le pediremos que introduzca la velocidad de cada locomotora y la distancia inicial que las separaba.";
	
	cout << "\n\nIntroduzca la velocidad de cada locomotora en km/h : ";

	cout << "\n\n\tLocomotora 1 : ";
	cin >> velocidad1;
	
	cout << "\n\tLocomotora 2 : ";
	cin >> velocidad2;
	
	cout << "\n\nA continuación, introduzca la distancia inicial que separaba a ambas locomotoras en km : ";
	cin >> distancia_inicial;
	
	// CÁLCULOS
	
	tiempo = distancia_inicial / ( velocidad1 + velocidad2 );
	
	distancia_recorrida1 = velocidad1 * tiempo;
	distancia_recorrida2 = velocidad2 * tiempo;
	
	// SALIDA
	
	cout << "\n\nLas distancias recorridas por las locomotoras serán : ";
	cout << "\n\n\tLocomotora 1 = " << distancia_recorrida1 << " km.";
	cout << "\n\n\tLocomotora 2 = " << distancia_recorrida2 << " km." << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}
	
