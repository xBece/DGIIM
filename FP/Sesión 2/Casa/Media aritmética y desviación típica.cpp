// Programa qque calcula la media aritmética muestral y la desviación estándar muestral de las alturas de tres personas

#include <iostream>  // Inclusión de los recursos de E/S
#include <cmath>		// Inclusión de los recursos matemáticos

using namespace std;

int main (){			// Programa principal
	
	double media;											// Declaración de las variables a guardar
	double desviacion;
	double altura1, altura2, altura3;
	
	cout << "Bienvenido, este programa hallará la media aritmética muestral y la desviación estándar muestral de las alturas de tres personas.";
	cout << "\nIntroduzca tres alturas en metros: " << endl;
	cin >> altura1 >> altura2 >> altura3;
	
	media = ( altura1 + altura2 + altura3 ) / 3;	
	desviacion = sqrt ( ( 1 / 3 ) * ( altura1 - media ) * ( altura1 - media ) + ( altura2 - media ) * ( altura2 - media ) + ( altura3 - media ) * ( altura3 - media ) );
	
	cout << "La media aritmética de las alturas " << altura1 << " m, " << altura2 << " m, y " << altura3 << " m es de " << media << " m y la desviación típica es de " << desviacion << "." << endl;
	
	system ("PAUSE");
	return 0;
	
}
