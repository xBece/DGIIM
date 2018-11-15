// Programa que simula el procedimiento a seguir para dar la vuelta en una m�quina de refrescos

#include <iostream>			// Inclusi�n de los recursos de E/S

using namespace std;

int main (){
	
	int precio;					// Declaraci�n de las variables a guardar
	int ingreso;
	int euro;
	int cincuenta_cent;
	int veinte_cent;
	int diez_cent;
	int cinco_cent;
	
	cout << "Eliga el producto que desee y digite el precio del mismo.";
	cout << "\nEl precio del producto deseado en c�ntimos es de: ";
	cin >> precio;
	
	cout << "Ingrese el pago en c�ntimos: ";
	cin >> ingreso;
	
	/*A continuaci�n, le asignamos a la variable "ingreso" un nuevo significado y valor para no utilizar otra variable distinta. Su nuevo significado ser�el de los c�ntimos sobrantes
	tras el pago. Posteriormente, realizamos todas las operaciones necesarias para saber cual es la vuelta haciendo uso exclusivo de las monedas indicadas.*/
	
	ingreso = ingreso - precio;		
	euro = ingreso / 100;			
	ingreso = ingreso % 100;
	cincuenta_cent = ingreso / 50;
	ingreso = ingreso % 50;
	veinte_cent = ingreso / 20;
	ingreso = ingreso % 20;
	diez_cent = ingreso / 10;
	ingreso = ingreso % 10;
	cinco_cent = ingreso / 5;
	ingreso = ingreso % 5;
	
	cout << "Aqu� tiene su vuelta: "  << euro << " moneda/s de un euro, " << cincuenta_cent << " moneda/s de 50 cent., " << veinte_cent << " moneda/s de 20 cent., " << diez_cent << " moneda/s de 10 cent. y " << cinco_cent << " moneda/s de 5 cent." << endl;
	
	system ("PAUSE");
	return 0;
	
	// NOTA: Este programa no indicar� el n� de monedas a entregar de 1 o 2 c�ntimos en caso necesario, pues el ejercicio no indica que as� se haga.
	
}
