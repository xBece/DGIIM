// Programa que halla el �rea de un c�rculo y la longitud de su circunferencia tras aportarle la longitud del radio

#include <iostream>						//Inclusi�n de los recursos de E/S

using namespace std;

int main (){								//Programa Principal
	
	double radio;							//declaraci�n de las variables radio, �rea y longitud
	double area;
	double longitud;
	const double PI = 3.1415927;		//declaramos la constante PI
	
	system ("chcp 1252");					//p�gina de c�digos 1252

	cout << "Este programa hallar� el �rea de un c�rculo y la longitud de su circunferencia a partir del radio." << endl;
	cout << "Inserte el radio deseado: " << endl;
	cin >> radio;
	
	longitud = 2 * PI * radio;				//establecemos el valor de longitud
	area = PI * radio * radio;				//establecemos el valor de area
	
	cout << "La longitud de la circunferencia de radio " << radio << "m es " << longitud << "m y el �rea de su circulo es " << area << "m�." << endl;
	
	system ("pause");
	return 0;
	
}
