// Programa para hallar el dinero total tras x tiempo ingresado en un banco con intereses

#include <iostream>				//Inclusi�n de los recursos de E/S

using namespace std;

int main(){							//Programa Principal	
	
	double capital;				//declaramos las variables para guardar, el capital inicial y el inter�s
	double intereses;
	
	system( "chcp 1252");			//p�gina de c�digos 1252
	
	cout << "Inserte la cantidad de dinero inicial ingresada en el banco: " << endl;
	cin >> capital;  
	
	cout << "�A cu�nto inter�s lo ingres�?: " << endl;
	cin >> intereses;
	
	capital = capital + capital * (intereses/100);					//asignamos un nuevo valor a capital, dicho valor ser� la cantidad de capital total
	
	cout <<"Su capital total ser� de: " << capital << " �" << endl;
	
	capital = capital + capital * (intereses/100);					//asignamos un nuevo valor a la variable capital
	
	cout << "Si deja su dinero durante un a�o m�s, su capital total pasar� a ser: " << capital << " �" << endl;
	
	system ("PAUSE");
	return 0;
	
}
