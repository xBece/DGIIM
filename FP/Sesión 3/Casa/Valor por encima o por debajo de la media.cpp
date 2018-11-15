/* 

Programa que calcula la media aritmética muestral y la desviación estándar muestral de las alturas de tres personas e
imprime, para cada uno de los valores previamente introducidos, si se encuentra por encima o por debajo de la media.

*/

#include <iostream>  // Inclusión de los recursos de E/S
#include <cmath>		// Inclusión de los recursos matemáticos

using namespace std;

int main (){			// Programa principal
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	double media;
	double desviacion;
	int altura1, altura2, altura3;
	
	// ENTRADA
	
	cout << "Bienvenido, este programa hallará la media aritmética muestral y la desviación estándar muestral de las alturas de tres personas.";
	cout << "\n\nIntroduzca tres alturas en centímetros: " << endl;
	
	cout << "\n\t";
	cin >> altura1;
	
	cout << "\n\t";
	cin >> altura2;
	
	cout << "\n\t";
	cin >> altura3;
	
	// CÁLCULOS
	
	media = ( altura1 + altura2 + altura3 ) / 3;	
	desviacion = sqrt ( ( 1 / 3.0 ) * ( ( altura1 - media ) * ( altura1 - media ) + ( altura2 - media ) * ( altura2 - media ) + ( altura3 - media ) * ( altura3 - media ) ) );
	
	// SALIDA
	
	cout << "\nLa media aritmética de las alturas " << altura1 << " cm, " << altura2 << " cm, y " << altura3 << " cm es de " << media << " cm y la desviación típica es de " << desviacion << "." << endl;
	
	// CONDICIONAL
	
	
		// ALTURA 1
		
	if ( (double) altura1 >= media ) {
		
		if ( (double) altura1 > media ) 
		
			cout << "\n" << altura1 << " cm es mayor que su media, " << media << " cm.";
		
		else
			
			cout << "\n" << altura1 << " cm es igual que su media, " << media << " cm.";
	
}
	
	else
		
		cout << "\n" << altura1 << " cm es menor que su media, " << media << " cm.";
	


		// ALTURA 2
	
	if ( (double) altura2 >= media ) {
		
		if ( (double) altura2 > media ) 
		
			cout << "\n" << altura2 << " cm es mayor que su media, " << media << " cm.";
		
		else
		
			cout << "\n" << altura2 << " cm es igual que su media, " << media << " cm.";
		
}

	else
		
		cout << "\n" << altura2 << " cm es menor que su media, " << media << " cm.";
	
	
	
		// ALTURA 3
	
	if ( (double) altura3 >= media ) {
		
		if ( (double) altura3 > media ) 
		
			cout << "\n" << altura3 << " cm es mayor que su media, " << media << " cm.";
		
	
		else
		
			cout << "\n" << altura3 << " cm es igual que su media, " << media << " cm.";
		
}
			
	else
		
		cout << "\n" << altura3 << " cm es menor que su media, " << media << " cm.";
	
	
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
