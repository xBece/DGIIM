/* 

Supongamos el siguiente codigo:

int entero; char caracter;
caracter = '7'; entero = caracter;

La variable entero almacenar� el valor 55 (el orden en la tabla ASCII del car�cter '7'). Queremos construir una expresi�n que devuelva el entero 7, 
para asignarlo a la variable 'entero'.

Formalmente: Supongamos una variable char de tipo caracter que contiene un valor entre '0' y '9'. Construid un programa que obtenga el correspondiente valor entero, 
se lo asigne a una variable de tipo int llamada entero y lo imprima en pantalla.

Por ejemplo, si la variable 'char' contiene '7' queremos asignarle a 'entero' el valor num�rico 7. 

*/


#include <iostream>					// Inclusi�n de los recursos de E/S

using namespace std;

int main () {							// Programa principal
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	int entero;
	char caracter;
	
	// ENTRADA
	
	cout << "Introduzca un n�mero entre el 0 y el 9 : ";
	cin >> caracter;
	
	// CONDICIONAL
	
	if ( caracter >= 48 && caracter <= 57 ) {					// el car�cter 0 en ASCII tiene el orden 48 y el 9 el 57
		
		caracter -= 48;												// le damos a la variable 'caracter' el orden que equivale al entero introducido
		entero = caracter;											// dicho entero se lo proporcionamos a la variable 'entero'
		
	}
		
	// SALIDA
	
	cout << "\nEl entero introducido es : " << entero << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}

