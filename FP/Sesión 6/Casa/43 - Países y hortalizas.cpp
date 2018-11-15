/* La Unión Europea ha decidido premiar al país que mas toneladas de hortalizas exporte a lo
largo del año. Se dispone de un registro de transacciones comerciales en el que aparecen
tres valores en cada apunte. El primer valor es el indicativo del país (E: España, F: Francia
y A: Alemania), el segundo valor es un indicativo de la hortaliza que se ha vendido en una
transacción (T: Tomate, P: Patata, E: Espinaca) y el tercer valor indica las toneladas que se
han vendido en esa transacción. Diseñar un programa que lea desde el teclado este registro,
el cual termina siempre al leer un país con indicativo ’@’, y que diga que país es el que más
hortalizas exporta y las toneladas que exporta */

#include <iostream>

using namespace std;

int main () {
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
	
	char pais, hortaliza;
	int toneladas;
	int ventasE = 0, ventasF = 0, ventasA = 0;
	bool no_terminador, pais_erroneo, hortaliza_erronea;
	bool ventasE_mayor, ventasF_mayor, ventasA_mayor, ventas_iguales;
	
	
	// ENTRADA
	
	cout << "Este programa le permitirá anotar el número de toneladas de hortalizas en cada país ( España, Francia , Alemania ) y, posteriormente, ver cual ha sido el que ha producido mayor número de ventas.";
	
	cout << "\n\nNOTA : La lista terminará cuando se introduzca el carácter @ en el país.";
	
	cout << "\n\n\tPAÍS : ";
	cin >> pais;
	
	
	// BUCLE POR SI SE INTRODUCE DIRECTAMENTE EL TERMINADOR 
	
	while ( pais == '@' ) {
	
		cout << "\nERROR : Se ha introducido directamente el terminador @, es decir, no ha sido introducido ningún dato en la lista. Por favor, vuélvalo a intentar.";
		cout << "\n\n\tPAÍS : ";
		cin >> pais;
		
		pais_erroneo = ( pais != 'E' ) && ( pais != 'F' ) && ( pais != 'A' ) && ( pais != '@' );
	
		while ( pais_erroneo ) {					// BUCLE POR SI SE INTRODUCE UNA SUCURSAL QUE NO SEA 1,2 Ó 3
			
			cout << "\nERROR: El país introducido no se encuentra entre los participantes. Por favor, vuelva a intentarlo con el país E ( España ), A ( Alemania ) o F ( Francia ).";
			cout << "\n\n\tPAÍS : ";
			cin >> pais;
			
			pais_erroneo = ( pais != 'E' ) && ( pais != 'F' ) && ( pais != 'A' );
				
		}
			
	}

	do {	
	
		// HORTALIZA
			
		cout << "\n\tHORTALIZA : ";
		cin >> hortaliza;
		
		hortaliza_erronea = ( hortaliza != 'T' ) && ( hortaliza != 'P' ) && ( hortaliza != 'E' );
		
		while ( hortaliza_erronea ) {						// BUCLE POR SI SE INTRODUCE UN CÓDIGO QUE NO SEA 1,2 Ó 3
				
			cout << "\nERROR: La hortaliza introducida no está incluida en los registros. Por favor, vuelva a intentarlo con la hortaliza T ( Tomate ), P ( Patata ) o  E ( Espinaca ).";
			cout << "\n\n\tHORTALIZA : ";
			cin >> hortaliza;
			
			hortaliza_erronea = ( hortaliza != 'T' ) && ( hortaliza != 'P' ) && ( hortaliza != 'E' );
			
		}
			
			
		// NÚMERO DE VENTAS
			
		cout << "\n\tTONELADAS: ";
		cin >> toneladas;
			
			
		// SWITCH PARA GUARDAR LAS VENTAS DE LA SUCURSAL
		
		switch ( pais ) {
			
			case 'E':
				
				ventasE += toneladas;
				break;
			
			case 'F':
				
				ventasF += toneladas;
				break;
			
			case 'A':
				
				ventasA += toneladas;
				break;
				
		}
		
		
		// SUCURSAL
			
		cout << "\n\n\tPAÍS : ";
		cin >> pais;
		
		pais_erroneo = ( pais != 'E' ) && ( pais != 'F' ) && ( pais != 'A' ) && ( pais != '@' );
		
		while ( pais_erroneo ) {						// BUCLE POR SI SE INTRODUCE UNA SUCURSAL QUE NO SEA 1,2 Ó 3
				
			cout << "\nERROR: El país introducido no se encuentra entre los participantes. Por favor, vuelva a intentarlo con el país E ( España ), A ( Alemania ) o F ( Francia ).";
			cout << "\n\n\tPAÍS : ";
			cin >> pais;
			
			pais_erroneo = ( pais != 'E' ) && ( pais != 'F' ) && ( pais != 'A' );
				
		}
		
		no_terminador = ( pais != '@' );
		
	} while ( no_terminador );
	
	
	// VARIABLES BOOLEANAS
	
	ventasE_mayor = ( ventasE > ventasF ) && ( ventasE > ventasA );
	ventasF_mayor = ( ventasF > ventasE ) && ( ventasF > ventasA );
	ventasA_mayor = ( ventasA > ventasE ) && ( ventasA > ventasF );
	ventas_iguales = ( ventasE == ventasF ) && ( ventasF == ventasA ); 
		
	
	// CONDICIONAL PARA HALLAR QUE SUCURSAL VENDIÓ MÁS
	
	if ( ventasE_mayor )
		
		cout << "\nPAÍS: España\nVENTAS: " << ventasE << " toneladas.";
		
	if ( ventasF_mayor )
		
		cout << "\nPAÍS: Francia\nVENTAS: " << ventasF << " toneladas.";
	
	if ( ventasA_mayor )
		
		cout << "\nPAÍS: Alemania\nVENTAS: " << ventasA << " toneladas.";
	
	if ( ventas_iguales ) 
	
		cout << "\nPAÍSES: España, Francia y Alemania\nVENTAS: " << ventasE << " toneladas.";
		
	if ( ( ventasE == ventasF ) && ( ventasF > ventasA ) )
	
		cout << "\nPAÍSES: España y Francia\nVENTAS: " << ventasE << " toneladas.";
		
	if ( ( ventasE == ventasA ) && ( ventasA > ventasF ) )
	
		cout << "\nPAÍSES: España y Alemania\nVENTAS: " << ventasE << " toneladas.";
		
	if ( ( ventasF == ventasA ) && ( ventasA > ventasE ) )
	
		cout << "\nPAÍSES: Francia y Alemania\nVENTAS: " << ventasF << " toneladas.";
	
	
	// FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}



