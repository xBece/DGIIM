//Programa que lee los coeficientes reales � y s de una funci�n Gaussiana e imprime el valor que toma la funci�n en x

#include <iostream>     //Inclusi�n de los recursos de E/S
#include <cmath>			//Inclusi�n de los recursos matem�ticos

using namespace std;

int main (){				//Programa Principal
	
	double x;				//declaramos las variables x, y = valor de la funci�n, media = � y desviaci�n = sigma
	double y;
	double media;
	double desviacion; 
	
	system("chcp 1252");		//p�gina de c�digos 1252
	
	cout << "Este programa otorgar� el valor que toma la funci�n en x dados los par�metros � y sigma. " << endl;
	cout << "Digite el valor de x: " << endl;
	cin >> x;
	
	cout << "A countinuaci�n, inserte el valor del par�metro � en su funci�n Gaussiana: " << endl;
	cin >>  media;
	
	cout << "Finalmente, digite el valor de sigma en su funci�n: " << endl;
	cin >> desviacion;
	
	y = (exp( (-1/2) * ( (x-media)  / desviacion ) * ( (x-media) / desviacion ) )) / ( desviacion * sqrt (2 * M_PI) );		//le asignamos el valor a la variable y
	
	cout << "El valor que toma la funci�n Gaussiana en x es: " << y << endl;
	
	system ("pause");
	return 0;
}
	
