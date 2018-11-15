// Programa que mostrará los dígitos separados de un número de 3 cifras

#include <iostream>		// Inclusión de los recursos de E/S

using namespace std;

int main (){			// Programa principal
	
	int numero;			// Declaramos las variables a utilizar, es decir, el número de 3 dígitos y sus 3 cifras
	int cifra;
	
	cout << "Este programa mostrará los dígitos separados de cualquier número de tres cifras que usted introduzca." << endl;
	cout << "Por favor, introduzca el susodicho número de tres cifras: ";
	cin >> numero;
	
	cout << "Los dígitos de " << numero << " son: ";
	
	cifra = numero / 100;									// Primera cifra (dividimos entre 100)
	cout << cifra << " ";
	
	cifra = numero / 10 % 10;								// Segunda cifra (dividimos entre 10; volvemos a dividir entre 10 y nos quedamos con el resto)
	cout << cifra << " ";
	
	cifra = numero % 10;										// Tercera cifra (dividimos entre 10 y nos quedamos con el resto)
	cout << cifra << " " << endl;
	
	system ("PAUSE");
	return 0;
	
}
