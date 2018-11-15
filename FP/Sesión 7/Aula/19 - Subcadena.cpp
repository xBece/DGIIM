/* Construir un programa que, dada una cadena de caracteres y dos posiciones dentro de la cadena,
x e y, devuelva otra cadena con los caracteres comprendidos entre las componentes x e
y (inclusive). */

#include <iostream>

using namespace std;

void MostrarVec(int posicion1, int posicion2, char vector[]);

int main () {
	
	const int MAX_COMP = 20;
	char cadena [MAX_COMP];
	int posicion_1, posicion_2;
	bool ordenado;

	cout << ">>Programa que, dada una cadena de caracteres y dos posiciones dentro de la cadena, devuelve otra cadena con los caracteres comprendidos entre dichas posiciones.";
	
	cout << "\n\n\t-> Introduzca una cadena de caracteres : ";
	cin.getline(cadena, MAX_COMP);
	
	cout << "\n\t-> Introduzca dos posiciones : \n";
	
	cout << "\n\t\t• Posición 1 : ";
	cin >> posicion_1;
	
	cout << "\n\t\t• Posición 2 : ";
	cin >> posicion_2;
	
	if ( posicion_1 <= posicion_2 )
	
		ordenado = true;
		
	else
	
		ordenado = false;
		
	cout << "\n\nLos caracteres comprendidos entre " << posicion_1 << " y " << posicion_2 << " son : ";
		
	if ( ordenado ) {
		
	MostrarVec(posicion_1, posicion_2, cadena);
	
	}
	
	else {
	
	MostrarVec(posicion_2, posicion_1, cadena);
	
	}
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

void MostrarVec(int posicion1, int posicion2, char vector[]) {
	
	for ( int i = posicion1; i <= posicion2; i++ )
		
		cout << vector [i] << " ";
		
}
