//  Programa que pide al usuario el valor de los dos lados (en cent�metros), el �ngulo que estos forman (en grados), y muestra el valor del area

#include <iostream>		// Inclusi�n de los recursos de E/S
#include <cmath>			// Inclusi�n de los recursos matem�ticos

using namespace std;

int main () {				// Programa principal
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	double area;
	double lado1, lado2;
	double angulo;
	
	// ENTRADA
	
	cout << "Este programa hallar� el �rea de un tri�ngulo a partir de los siguientes datos del mismo que usted deber� introducir: ";
	
	cout << "\n\n\tLado 1 en cm : ";
	cin >> lado1;
	
	cout << "\n\tLado 2 en cm : ";
	cin >> lado2;
	
	cout << "\n\t�ngulo formado por ambos lados en grados : ";
	cin >> angulo;

	// C�LCULOS
	
	angulo = ( angulo / 180 ) * M_PI;
	area = ( lado1 * lado2 * sin ( angulo ) ) / 2.0;
	
	// SALIDA
	
	cout << "\n\nEl �rea del tri�ngulo con dichas caracter�sticas ser� : " << area << " cm�." << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}
	 
	 



