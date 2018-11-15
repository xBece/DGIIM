//  Programa que pide al usuario el valor de los dos lados (en centímetros), el ángulo que estos forman (en grados), y muestra el valor del area

#include <iostream>		// Inclusión de los recursos de E/S
#include <cmath>			// Inclusión de los recursos matemáticos

using namespace std;

int main () {				// Programa principal
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	double area;
	double lado1, lado2;
	double angulo;
	
	// ENTRADA
	
	cout << "Este programa hallará el área de un triángulo a partir de los siguientes datos del mismo que usted deberá introducir: ";
	
	cout << "\n\n\tLado 1 en cm : ";
	cin >> lado1;
	
	cout << "\n\tLado 2 en cm : ";
	cin >> lado2;
	
	cout << "\n\tÁngulo formado por ambos lados en grados : ";
	cin >> angulo;

	// CÁLCULOS
	
	angulo = ( angulo / 180 ) * M_PI;
	area = ( lado1 * lado2 * sin ( angulo ) ) / 2.0;
	
	// SALIDA
	
	cout << "\n\nEl área del triángulo con dichas características será : " << area << " cm²." << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}
	 
	 



