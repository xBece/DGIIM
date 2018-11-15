// Programa que calcula la ganancia total de la empresa y la particular de cada trabajador

#include <iostream>  // Inclusión de los recursos de E/S
#include <cmath>		// Inclusión de los recursos matemáticos

using namespace std;	

int main (){			// Programa Principal
	
	system ("chcp 1252");
	
	double ganancias1;		// Declaración de las variables	
	double disenador;
	double fabricante;
	double ganancias2;
	
	cout << "Este programa hallará las ganancias de cada trabajador implicado en la elaboración de un producto vendido." << endl;
	cout << "Por favor, introduzca las ganancias totales: ";
	cin >> ganancias1;
	
	ganancias2 = ganancias1 / 5;			// Realizamos las operaciones necesarias
	fabricante = ganancias2;
	disenador = ganancias2 * 2;
	
	cout << "Cada uno de los tres fabricantes recibirá " << fabricante << " € y el diseñador recibirá " << disenador << " €." << endl;		// Mostramos el resultado esperado
	
	system ("pause");
	return 0;
	
}
