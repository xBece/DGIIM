// Programa para hallar el dinero total tras x tiempo ingresado en un banco con intereses

#include <iostream>				//Inclusión de los recursos de E/S

using namespace std;

int main(){							//Programa Principal	
	
	double capital;				//declaramos las variables para guardar, el capital inicial y el interés
	double intereses;
	
	system( "chcp 1252");			//página de códigos 1252
	
	cout << "Inserte la cantidad de dinero inicial ingresada en el banco: " << endl;
	cin >> capital;  
	
	cout << "¿A cuánto interés lo ingresó?: " << endl;
	cin >> intereses;
	
	capital = capital + capital * (intereses/100);					//asignamos un nuevo valor a capital, dicho valor será la cantidad de capital total
	
	cout <<"Su capital total será de: " << capital << " €" << endl;
	
	capital = capital + capital * (intereses/100);					//asignamos un nuevo valor a la variable capital
	
	cout << "Si deja su dinero durante un año más, su capital total pasará a ser: " << capital << " €" << endl;
	
	system ("PAUSE");
	return 0;
	
}
