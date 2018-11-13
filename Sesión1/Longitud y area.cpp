// Programa que halla el área de un círculo y la longitud de su circunferencia tras aportarle la longitud del radio

#include <iostream>
#include <cmath>

using namespace std;

int main (){
	double radio, area, longitud, PI;
	PI = 3.1415927;
	cout <<"Este programa hallara el area de un circulo y la longitud de su circunferencia a partir del radio."<<endl;
	cout <<"Inserte el radio deseado: "<<endl;
	cin >> radio;
	longitud = 2*PI*radio;
	area = PI*radio*radio;
	cout <<"La longitud de la circunferencia de radio: " <<radio<< " es: " <<longitud<< " y el area de su circulo es: " <<area<<endl;
	system("pause");
	return 0;
	
}
