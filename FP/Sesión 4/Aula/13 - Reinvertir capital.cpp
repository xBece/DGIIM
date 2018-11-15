/* Modifiquemos el ejercicio 2 del capital y los intereses de la primera relaci�n. Supongamos
ahora que se quiere reinvertir todo el dinero obtenido (el original C m�s los intereses producidos) en 
otro plazo fijo a un a�o. Y as�, sucesivamente. Construid un programa para que lea el capital, el inter�s
y un n�mero de a�os N, y calcule e imprima todo el dinero obtenido durante cada uno de los N a�os, suponiendo 
que todo lo ganado (incluido el capital original C) se reinvierte a plazo fijo durante el siguiente a�o. */

#include <iostream>

using namespace std;

int main(){							//Programa Principal	
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	double capital, interes;			
	int anio;

	// ENTRADA
	
	cout << "Este programa hallar� el dinero total que obtendr� tras ingresar en nuestro banco una cantidad de dinero a un inter�s x durante un determinado n�mero de a�os.";
	cout << "\n\nDigite a continuaci�n los datos pedidos: ";
	
	cout << "\n\n\tCapital inicial: ";
	cin >> capital;
	
	cout << "\n\tInter�s: ";
	cin >> interes;
	
	cout << "\n\tA�os: ";
	cin >> anio;
	
	
	// BUCLE Y SALIDA
	
	for ( int i=1; i <= anio; i++ ) {
	
		capital = capital + capital * (interes/100);	
	
		cout << "\nTras el " << i << "� a�o el capital total ser� de " << capital << " �.";
		
	}
	
	// FINALIZAC�N DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
	
