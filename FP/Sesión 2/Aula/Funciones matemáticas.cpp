// Programa de fórmulas matemáticas traducidas a expresiones válidas del lenguaje C++

#include <iostream>				// Inclusión de los recursos de E/S
#include <cmath>					// Inlcusión de los recursos matemáticos

using namespace std;

int main (){						// Programa Principal
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	double x;					
	double y;
	double h;
	double resultado;
	
	// ENTRADA
	
	cout << "Bienvenido, este programa contiene tres fórmulas matemáticas. En él, usted podrá introducir los valores de las incógnitas deseadas y el programa se encargará de proporcionarle el resultado. " << endl;

	cout << "\nIntroduzca el valor deseado para x e y." << endl;
	
	cout << "\n\tx : ";
	cin >> x;
	
	cout << "\n\ty : ";
	cin >> y;
	
	// CÁLCULOS Y SALIDA
	
	resultado = ( 1 + pow ( x , 2 ) / y ) / ( pow ( x , 3 ) / ( 1 + y ) );
	
	cout << "\nEl resultado buscado es " << resultado << "." << endl;
	
	cout << "\nIntroduzca a continuación un valor deseado para h : ";
	cin >> h;
	
	resultado = ( 1 + ( 1 / 3.0 ) * sin ( h ) - ( 1 / 7.0 ) * cos ( h ) ) / ( 2 * h );
	
	cout << "\nEl resultado de la fórmula b es : " << resultado << "." << endl;
	
	cout << "\nPara la ultima fórmula, introduzca el valor deseado para x : ";
	cin >> x;
	
	resultado = sqrt ( 1 + pow ( exp ( x ) / pow ( x , 2) , 2 ) );
	
	cout << "\nEl resultado de la fórmula c es : " << resultado << "." << endl;
	
	cout << "\n";
	
	system ("PAUSE");
	return 0;
	
}
	
