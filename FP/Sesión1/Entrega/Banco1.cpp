// Programa para hallar el dinero total tras x años ingresado en un banco con intereses

#include <iostream>				//Inclusión de los recursos de E/S

using namespace std;

int main(){							//Programa Principal	
	
	double capital;				//declaramos las variables para guardar, el capital inicial, los intereses y la cantidad total de capital tras un año
	double intereses;
	double total;
	
	system ("chcp 1252");			//página de códigos 1252
	
	cout << "Inserte la cantidad de dinero inicial ingresada en el banco: " << endl;
	cin >> capital;  
	
	cout << "¿A cuánto interés lo ingresó?: " << endl;
	cin >> intereses;
	
	total = capital + capital * (intereses/100);				//asignamos el valor del total de capital mediante la operación
	
	cout <<"Su capital total será de: " << total << " €" << endl;
	
	total = total + total * (intereses/100);					//asignamos un nuevo valor a la variable total
	
	cout << "Si deja su dinero durante un año más, su capital total pasará a ser: " << total << " €" << endl;
	
	system ("PAUSE");
	return 0;
	
}
