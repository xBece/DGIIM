/* Hacer un programa que pida dos ciudades y que cree una nueva ciudad cuyo nombre sea la concatenacion de ambas y cuya situación sea la multiplicación 
de cada una de sus coordenadas. Mostrar la nueva ciudad por pantalla. */

#include <iostream>		// Inclusión de los recursos de E/S
#include <string>

using namespace std;

struct TipoPunto {		// Definición de la estructura que representa unas coordenadas en un plano 2D
	
	double abscisa;
	double ordenada;
	
};

struct TipoCiudad {		// Definición de la estructura que representa a una ciudad
	
	TipoPunto situacion;
	string nombre;
	
};


int main () {				// Función Principal
	
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	TipoPunto punto1, punto2, punto3;
	TipoCiudad ciudad1, ciudad2, nuevaciudad;
	
	
	// ENTRADA
	
	cout << "Introduzca el nombre de una ciudad : ";
	cin >> ciudad1.nombre;
	
	cout << "\nAhora introduza la posición de " << ciudad1.nombre << " en un plano 2D.";
	
	cout << "\n\n\tCoordenada en el eje de abcisas : ";
	cin >> punto1.abscisa;
	
	cout << "\n\tCoordenada en el eje de ordenadas : ";
	cin >> punto1.ordenada;
	
	cout << "\nLas coordenadas de " << ciudad1.nombre << " en el plano 2D son (" << punto1.abscisa << "," << punto1.abscisa << ") ";
	
	cout << "\n\nIntroduzca ahora el nombre de otra ciudad cualquiera: ";
	cin >> ciudad2.nombre;
	
	cout << "\nA continuación, introduzca la posición de " << ciudad2.nombre << " en el plano 2D.";
	
	cout << "\n\n\tCoordenada en el eje de abcisas : ";
	cin >> punto2.abscisa;
	
	cout << "\n\tCoordenada en el eje de ordenadas : ";
	cin >> punto2.ordenada;
	
	cout << "\nLas coordenadas de " << ciudad2.nombre << " en el plano 2D son (" << punto2.abscisa << "," << punto2.abscisa << ") ";
	
	
	// AJUSTES
	
	nuevaciudad.nombre = ciudad1.nombre + ciudad2.nombre;
	
	punto3.abscisa = punto1.abscisa * punto2.abscisa;
	punto3.ordenada = punto1.ordenada * punto2.ordenada;
	
	
	// SALIDA
	
	cout << "\n\nAcabas de inventar una nueva ciudad llamada " << nuevaciudad.nombre << " que se sitúa en la posición (" << punto3.abscisa << "," << punto3.ordenada << ") del plano 2D.";
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
	

