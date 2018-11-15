/* Construir un programa que inserte una cadena de caracteres dentro de otra cadena, en una
determinada posición. Por ejemplo, insertar la cadena "caracola" en la posición 2 de la
cadena hola, resultaría la segunda cadena con el valor hocaracolala. */

#include <iostream>
#include <cstring>

using namespace std;

int main () {
	
	const int MAX_COMP = 100;
	char cadena_principal [MAX_COMP], cadena_secundaria [MAX_COMP];
	int posicion, intervalo, tamanio, i, j = 0;
	
	cout << "Este programa insertará una cadena de caracteres introducida en la posición indicada de otra.";
	
	cout << "\n\n\t-> Introduzca la cadena principal : ";
	cin.getline(cadena_principal, MAX_COMP);
	
	cout << "\n\t-> Introduzca la cadena que quiera insertar en la anterior : ";
	cin.getline(cadena_secundaria, MAX_COMP);
	
	tamanio = strlen(cadena_secundaria);
	
	cout << "\n¿En qué posición de la cadena principal desa introducir la segunda? : ";
	cin >> posicion;
	
	intervalo = posicion + tamanio;
	
	for ( i = posicion, j = 0; i < intervalo; i++, j++ ) {
	
	 cadena_principal [i + tamanio ] = cadena_principal [i];
	 cadena_principal [i] = cadena_secundaria [j];
	 
	}
	
	cout << "\nLa cadena final es : " << cadena_principal;
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
