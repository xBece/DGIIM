/* Indicar si se produce un problema de precision o de desbordamiento en los siguientes ejemplos
indicando cual sería el resultado final de las operaciones. */

#include <iostream>			// Inclusión de los recursos de E/S

using namespace std;

int main () {
	
	// CASO A
	
	int chico, chico1, chico2; 
	
	chico1 = 123456789;
	chico2 = 123456780;
	
	chico = chico1 * chico2;
	
	cout << "\n\tA) El resultado de " << chico1 << " * " << chico2 << " es " << chico << ". Problema de desbordamiento.";
	
	
	/* Se produce un problema de desbordamiento pues el resultado real de 123456789 * 123456780 = 15241577639079420, sin embargo, la consola nos da 
	1425960444. Esto se debe a que el resultado real (15241577639079420) es demasiado grande */
	
	
	// CASO B
	
	long grande;
	
	grande = chico1 * chico2;
	
	cout << "\n\n\tB) El resultado de " << chico1 << " * " << chico2 << " es " << grande << ". Problema de desbordamiento.";
	
	/* Al igual que en el caso A, se produce un problema de desbordamiento pues el resultado real de 123456789 * 123456780 = 15241577639079420, sin embargo, la consola nos da 
	1425960444 */
	
	
	// CASO C
	
	double resultado, real1, real2; 
	
	real1 = 123.1;
	real2 = 124.2;
	
	resultado = real1 * real2;
	
	cout << "\n\n\tC) El resultado de " << real1 << " * " << real2 << " es " << resultado << ". Problema de precisión.";
	
	/* Se produce un problema de precisión pues el resultado real de 123.1 * 124.2 = 15289.02, sin embargo, la consola nos da solo la parte entera, 15289. Si usasemos
	"cout.precision (7);" conseguiríamos solucionar el fallo y obtendríamos el resultado real. */
	
	
	// CASO D 
	
	real1 = 123456789.1;
	real2 = 123456789.2;

	resultado = real1 * real2;
	
	cout << "\n\n\tD) El resultado de " << real1 << " * " << real2 << " es " << resultado << ". Problema de precisión.";
	
	// Error de precisión. No obstante, es el que más se aproxima de todos al valor real 
	
	
	// CASO E
	
	double real, otro_real; 
	
	real = 2e34;
	otro_real = real + 1;
	otro_real = otro_real - real;
	
	cout << "\n\n\tE) El resultado de " << real << " + " << 1 << " - " << real << " es " << otro_real << ". Problema de precisión.";
	
	/* Se produce un error de precisión porque no se suma el 1  */
	
	
	// CASO F
	
	real = 1e+300; 
	otro_real = 1e+200;
	
	otro_real = otro_real * real;
	
	cout << "\n\n\tF) El resultado de " << otro_real << " * " << real << " es " << otro_real << ". Problema de desbordamiento.";
	
	// Se produce un desbordamiento puesto que las variables son demasiado grandes
	
	
	// CASO G
	
	float chico3;
	double grande2;
	
	grande2 = 2e+150;
	chico3 = grande2;
	
	cout << "\n\n\tG) El valor de chico es " << chico3 << ". Problema de desbordamiento.";
	
	// Se produce un desbordamiento puesto que la variable grande2 es demasiado grande
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

