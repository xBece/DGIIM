// Programa que pide el valor de la intensidad y resistencia para calcular el valor del voltaje

#include <iostream>		//Inclusi�n de los recursos de E/S

using namespace std;

int main (){				//Programa Principal
	
	double intensidad;		//declaraci�n de las variables intensidad, resistencia y voltaje
	double resistencia;
	double voltaje;
	
	system ("chcp 1252");	//p�gina de c�digos 1252
	
	cout << "Bienvenido, este programa te permitir� hallar el valor del voltaje de una corriente a partir de los valores de intensidad y resistencia" << endl;
	cout << "Introduzca el valor de la intensidad:" << endl;
	cin >> intensidad;
	
	cout << "A continuaci�n, digite el valor de la resistencia:" << endl;
	cin >> resistencia;
	
	voltaje = intensidad * resistencia;			//asigna el valor de voltaje
	
	cout << "El voltaje de la corriente ser� " << voltaje << " A." << endl;
	
	system ("pause");
	return 0;
	
}

