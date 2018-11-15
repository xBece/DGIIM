// Programa que halla el área de un círculo y la longitud de su circunferencia tras aportarle la longitud del radio

#include <iostream>						//Inclusión de los recursos de E/S

using namespace std;

int main (){								//Programa Principal
	
	double radio;							//declaración de las variables radio, área y longitud
	double area;
	double longitud;
	const double PI = 3.1415927;		//declaramos la constante PI
	
	system ("chcp 1252");					//página de códigos 1252

	cout << "Este programa hallará el área de un círculo y la longitud de su circunferencia a partir del radio." << endl;
	cout << "Inserte el radio deseado: " << endl;
	cin >> radio;
	
	longitud = 2 * PI * radio;				//establecemos el valor de longitud
	area = PI * radio * radio;				//establecemos el valor de area
	
	cout << "La longitud de la circunferencia de radio " << radio << "m es " << longitud << "m y el área de su circulo es " << area << "m²." << endl;
	
	system ("pause");
	return 0;
	
}
