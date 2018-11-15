// Programa que calculará la hora o días a partir de los datos de horas, minutos y segundos

#include <iostream>				// Inclusión de los recursos de E/S

using namespace std;

int main (){						// Programa principal
	
	int horas;						// Declaración de las variables a guardar
	int minutos;
	int segundos;
	int dias;
	
	cout << "Bienvenido, este programa hallará el número de días, horas, minutos y segundos dentro de su rango correspondiente a partir de los datos de horas, minutos y segundos que usted desee.";
	
	cout << "\nIntroduzca el número de horas deseadas: ";
	cin >> horas;
	
	cout << "De minutos: ";
	cin >> minutos;
	
	cout << "Y de segundos: ";
	cin >> segundos;
	
	minutos = minutos + segundos / 60;
	segundos = segundos % 60;
	
	horas = horas + minutos / 60;
	minutos = minutos % 60;
	
	dias = horas / 24;
	horas = horas % 24;
	
	cout << "Los días, horas, minutos y segundos, dentro de su rango correspondiente, son: " << dias << " d, " << horas << " h, " << minutos << " min y " << segundos << " s." << endl;
	
	system ("PAUSE");
	return 0;

}
