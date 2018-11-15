// Programa que mostrar� los d�gitos separados de un n�mero de 3 cifras

#include <iostream>		// Inclusi�n de los recursos de E/S

using namespace std;

int main (){			// Programa principal
	
	int numero;			// Declaramos las variables a utilizar, es decir, el n�mero de 3 d�gitos y sus 3 cifras
	int cifra;
	
	cout << "Este programa mostrar� los d�gitos separados de cualquier n�mero de tres cifras que usted introduzca." << endl;
	cout << "Por favor, introduzca el susodicho n�mero de tres cifras: ";
	cin >> numero;
	
	cout << "Los d�gitos de " << numero << " son: ";
	
	cifra = numero / 100;									// Primera cifra (dividimos entre 100)
	cout << cifra << " ";
	
	cifra = numero / 10 % 10;								// Segunda cifra (dividimos entre 10; volvemos a dividir entre 10 y nos quedamos con el resto)
	cout << cifra << " ";
	
	cifra = numero % 10;										// Tercera cifra (dividimos entre 10 y nos quedamos con el resto)
	cout << cifra << " " << endl;
	
	system ("PAUSE");
	return 0;
	
}
