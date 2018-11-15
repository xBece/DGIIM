/* Realizar un programa que declare las variables x, y y z, les asigne los valores 10, 20 y 30 e
intercambien entre sí sus valores de forma que el valor de x pasa a y, el de y pasa a z y el
valor de z pasa a x (se pueden declarar variables auxiliares aunque se pide que se use el menor
numero posible). */

#include <iostream>				// Inclusión de los recursos de E/S

using namespace std;

int main () {						// Programa principal
	
	// DECLARACIÓN DE VARIABLES
	
	double x = 10;
	double y = 20;
	double z = 30;
	double aux;
	
	// CÁLCULOS
	
	aux = x;							// usamos la variable auxiliar para guardar el valor de x
	x = z;							// le asignamos a x el valor de z
	z = y;							// le asignamos a z el valor de y
	y = aux;							// le asignamos a y el valor de la variable auxiliar, es decir, el antiguo valor de x
	
	// SALIDA
	
	cout << "Los valores de x, y, z han sido intercambiados entre sí : ";
	
	cout << "\n\n\tx = " << x << ".";
	cout << "\n\n\ty = " << y << ".";
	cout << "\n\n\tz = " << z << "." << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}
	

