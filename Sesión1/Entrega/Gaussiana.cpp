//Programa que lee los coeficientes reales µ y s de una función Gaussiana e imprime el valor que toma la función en x

#include <iostream>     //Inclusión de los recursos de E/S
#include <cmath>			//Inclusión de los recursos matemáticos

using namespace std;

int main (){				//Programa Principal
	
	double x;				//declaramos las variables x, y = valor de la función, media = µ y desviación = sigma
	double y;
	double media;
	double desviacion; 
	
	system("chcp 1252");		//página de códigos 1252
	
	cout << "Este programa otorgará el valor que toma la función en x dados los parámetros µ y sigma. " << endl;
	cout << "Digite el valor de x: " << endl;
	cin >> x;
	
	cout << "A countinuación, inserte el valor del parámetro µ en su función Gaussiana: " << endl;
	cin >>  media;
	
	cout << "Finalmente, digite el valor de sigma en su función: " << endl;
	cin >> desviacion;
	
	y = (exp( (-1/2) * ( (x-media)  / desviacion ) * ( (x-media) / desviacion ) )) / ( desviacion * sqrt (2 * M_PI) );		//le asignamos el valor a la variable y
	
	cout << "El valor que toma la función Gaussiana en x es: " << y << endl;
	
	system ("pause");
	return 0;
}
	
