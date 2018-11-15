// Programa que intercambia los valores de dos variables, en este caso las edades de Pedro y Juan

#include <iostream>		//inclusión de los recursos de E/S

using namespace std;

int main (){
	
	int edad_Pedro;											//declaramos las variables que vamos a utilizar, entre ellas la auxiliar que nos servirá para realizar el intercambio								
	int edad_Juan;
	int aux;					
							
	system ("chcp 1252");										//activamos la página de códigos 1252
	
	cout << "Inserte la edad de Pedro: " <<endl;												//le preguntamos al usuario cuál es la edad de Pedro
	cin >> edad_Pedro;																				//el usuario inserta el dato pedido
	
	cout << "A continuación, inserte la edad de Juan: " <<endl;					//le pedimos al usuario que inserte la edad de Juan
	cin >> edad_Juan;																			//el usuario inserta el dato pedido
	
	aux = edad_Pedro;																			//la variable auxiliar toma el valor de la edad de Pedro
	edad_Pedro = edad_Juan;																	//la variable edad_Pedro toma el valor de edad_Juan
	edad_Juan = aux;																			//la variable edad_Juan toma el valor de la auxiliar. Recordemos que la variable aux. guardó la edad de Pedro
	
	cout << "A partir de hoy Pedro tiene " << edad_Pedro << " años y Juan " << edad_Juan << " años." <<endl;			//le mostramos al usuario las edades de Pedro y Juan intercambiadas
	
	system ("pause");
	return 0;
	
	
}
