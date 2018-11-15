// Programa de f�rmulas matem�ticas traducidas a expresiones v�lidas del lenguaje C++

#include <iostream>				// Inclusi�n de los recursos de E/S
#include <cmath>					// Inlcusi�n de los recursos matem�ticos

using namespace std;

int main (){						// Programa Principal
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	double x;					
	double y;
	double h;
	double resultado;
	
	// ENTRADA
	
	cout << "Bienvenido, este programa contiene tres f�rmulas matem�ticas. En �l, usted podr� introducir los valores de las inc�gnitas deseadas y el programa se encargar� de proporcionarle el resultado. " << endl;

	cout << "\nIntroduzca el valor deseado para x e y." << endl;
	
	cout << "\n\tx : ";
	cin >> x;
	
	cout << "\n\ty : ";
	cin >> y;
	
	// C�LCULOS Y SALIDA
	
	resultado = ( 1 + pow ( x , 2 ) / y ) / ( pow ( x , 3 ) / ( 1 + y ) );
	
	cout << "\nEl resultado buscado es " << resultado << "." << endl;
	
	cout << "\nIntroduzca a continuaci�n un valor deseado para h : ";
	cin >> h;
	
	resultado = ( 1 + ( 1 / 3.0 ) * sin ( h ) - ( 1 / 7.0 ) * cos ( h ) ) / ( 2 * h );
	
	cout << "\nEl resultado de la f�rmula b es : " << resultado << "." << endl;
	
	cout << "\nPara la ultima f�rmula, introduzca el valor deseado para x : ";
	cin >> x;
	
	resultado = sqrt ( 1 + pow ( exp ( x ) / pow ( x , 2) , 2 ) );
	
	cout << "\nEl resultado de la f�rmula c es : " << resultado << "." << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}
	
