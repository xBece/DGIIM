// Programa que calcula la ganancia total de la empresa y la particular de cada trabajador

#include <iostream>  // Inclusi�n de los recursos de E/S
#include <cmath>		// Inclusi�n de los recursos matem�ticos

using namespace std;	

int main (){			// Programa Principal
	
	system ("chcp 1252");
	
	double ganancias1;		// Declaraci�n de las variables	
	double disenador;
	double fabricante;
	double ganancias2;
	
	cout << "Este programa hallar� las ganancias de cada trabajador implicado en la elaboraci�n de un producto vendido." << endl;
	cout << "Por favor, introduzca las ganancias totales: ";
	cin >> ganancias1;
	
	ganancias2 = ganancias1 / 5;			// Realizamos las operaciones necesarias
	fabricante = ganancias2;
	disenador = ganancias2 * 2;
	
	cout << "Cada uno de los tres fabricantes recibir� " << fabricante << " � y el dise�ador recibir� " << disenador << " �." << endl;		// Mostramos el resultado esperado
	
	system ("pause");
	return 0;
	
}
