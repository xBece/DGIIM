/* 

Supongamos el siguiente codigo:

int entero; char caracter;
caracter = '7'; entero = caracter;

La variable entero almacenará el valor 55 (el orden en la tabla ASCII del carácter '7'). Queremos construir una expresión que devuelva el entero 7, 
para asignarlo a la variable 'entero'.

Formalmente: Supongamos una variable char de tipo caracter que contiene un valor entre '0' y '9'. Construid un programa que obtenga el correspondiente valor entero, 
se lo asigne a una variable de tipo int llamada entero y lo imprima en pantalla.

Por ejemplo, si la variable 'char' contiene '7' queremos asignarle a 'entero' el valor numérico 7. 

*/


#include <iostream>					// Inclusión de los recursos de E/S

using namespace std;

int main () {							// Programa principal
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	int entero;
	char caracter;
	
	// ENTRADA
	
	cout << "Introduzca un número entre el 0 y el 9 : ";
	cin >> caracter;
	
	// CONDICIONAL
	
	if ( caracter >= 48 && caracter <= 57 ) {					// el carácter 0 en ASCII tiene el orden 48 y el 9 el 57
		
		caracter -= 48;												// le damos a la variable 'caracter' el orden que equivale al entero introducido
		entero = caracter;											// dicho entero se lo proporcionamos a la variable 'entero'
		
	}
		
	// SALIDA
	
	cout << "\nEl entero introducido es : " << entero << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}

