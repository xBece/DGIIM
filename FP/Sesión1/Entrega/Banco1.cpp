// Programa para hallar el dinero total tras x a�os ingresado en un banco con intereses

#include <iostream>				//Inclusi�n de los recursos de E/S

using namespace std;

int main(){							//Programa Principal	
	
	double capital;				//declaramos las variables para guardar, el capital inicial, los intereses y la cantidad total de capital tras un a�o
	double intereses;
	double total;
	
	system ("chcp 1252");			//p�gina de c�digos 1252
	
	cout << "Inserte la cantidad de dinero inicial ingresada en el banco: " << endl;
	cin >> capital;  
	
	cout << "�A cu�nto inter�s lo ingres�?: " << endl;
	cin >> intereses;
	
	total = capital + capital * (intereses/100);				//asignamos el valor del total de capital mediante la operaci�n
	
	cout <<"Su capital total ser� de: " << total << " �" << endl;
	
	total = total + total * (intereses/100);					//asignamos un nuevo valor a la variable total
	
	cout << "Si deja su dinero durante un a�o m�s, su capital total pasar� a ser: " << total << " �" << endl;
	
	system ("PAUSE");
	return 0;
	
}
