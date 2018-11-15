// Programa que pide el valor de la intensidad y resistencia para calcular el valor del voltaje

#include <iostream>		//Inclusión de los recursos de E/S

using namespace std;

int main (){				//Programa Principal
	
	double intensidad;		//declaración de las variables intensidad, resistencia y voltaje
	double resistencia;
	double voltaje;
	
	system ("chcp 1252");	//página de códigos 1252
	
	cout << "Bienvenido, este programa te permitirá hallar el valor del voltaje de una corriente a partir de los valores de intensidad y resistencia" << endl;
	cout << "Introduzca el valor de la intensidad:" << endl;
	cin >> intensidad;
	
	cout << "A continuación, digite el valor de la resistencia:" << endl;
	cin >> resistencia;
	
	voltaje = intensidad * resistencia;			//asigna el valor de voltaje
	
	cout << "El voltaje de la corriente será " << voltaje << " A." << endl;
	
	system ("pause");
	return 0;
	
}

