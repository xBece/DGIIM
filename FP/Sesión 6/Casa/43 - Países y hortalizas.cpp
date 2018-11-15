/* La Uni�n Europea ha decidido premiar al pa�s que mas toneladas de hortalizas exporte a lo
largo del a�o. Se dispone de un registro de transacciones comerciales en el que aparecen
tres valores en cada apunte. El primer valor es el indicativo del pa�s (E: Espa�a, F: Francia
y A: Alemania), el segundo valor es un indicativo de la hortaliza que se ha vendido en una
transacci�n (T: Tomate, P: Patata, E: Espinaca) y el tercer valor indica las toneladas que se
han vendido en esa transacci�n. Dise�ar un programa que lea desde el teclado este registro,
el cual termina siempre al leer un pa�s con indicativo �@�, y que diga que pa�s es el que m�s
hortalizas exporta y las toneladas que exporta */

#include <iostream>

using namespace std;

int main () {
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	char pais, hortaliza;
	int toneladas;
	int ventasE = 0, ventasF = 0, ventasA = 0;
	bool no_terminador, pais_erroneo, hortaliza_erronea;
	bool ventasE_mayor, ventasF_mayor, ventasA_mayor, ventas_iguales;
	
	
	// ENTRADA
	
	cout << "Este programa le permitir� anotar el n�mero de toneladas de hortalizas en cada pa�s ( Espa�a, Francia , Alemania ) y, posteriormente, ver cual ha sido el que ha producido mayor n�mero de ventas.";
	
	cout << "\n\nNOTA : La lista terminar� cuando se introduzca el car�cter @ en el pa�s.";
	
	cout << "\n\n\tPA�S : ";
	cin >> pais;
	
	
	// BUCLE POR SI SE INTRODUCE DIRECTAMENTE EL TERMINADOR 
	
	while ( pais == '@' ) {
	
		cout << "\nERROR : Se ha introducido directamente el terminador @, es decir, no ha sido introducido ning�n dato en la lista. Por favor, vu�lvalo a intentar.";
		cout << "\n\n\tPA�S : ";
		cin >> pais;
		
		pais_erroneo = ( pais != 'E' ) && ( pais != 'F' ) && ( pais != 'A' ) && ( pais != '@' );
	
		while ( pais_erroneo ) {					// BUCLE POR SI SE INTRODUCE UNA SUCURSAL QUE NO SEA 1,2 � 3
			
			cout << "\nERROR: El pa�s introducido no se encuentra entre los participantes. Por favor, vuelva a intentarlo con el pa�s E ( Espa�a ), A ( Alemania ) o F ( Francia ).";
			cout << "\n\n\tPA�S : ";
			cin >> pais;
			
			pais_erroneo = ( pais != 'E' ) && ( pais != 'F' ) && ( pais != 'A' );
				
		}
			
	}

	do {	
	
		// HORTALIZA
			
		cout << "\n\tHORTALIZA : ";
		cin >> hortaliza;
		
		hortaliza_erronea = ( hortaliza != 'T' ) && ( hortaliza != 'P' ) && ( hortaliza != 'E' );
		
		while ( hortaliza_erronea ) {						// BUCLE POR SI SE INTRODUCE UN C�DIGO QUE NO SEA 1,2 � 3
				
			cout << "\nERROR: La hortaliza introducida no est� incluida en los registros. Por favor, vuelva a intentarlo con la hortaliza T ( Tomate ), P ( Patata ) o  E ( Espinaca ).";
			cout << "\n\n\tHORTALIZA : ";
			cin >> hortaliza;
			
			hortaliza_erronea = ( hortaliza != 'T' ) && ( hortaliza != 'P' ) && ( hortaliza != 'E' );
			
		}
			
			
		// N�MERO DE VENTAS
			
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
			
		cout << "\n\n\tPA�S : ";
		cin >> pais;
		
		pais_erroneo = ( pais != 'E' ) && ( pais != 'F' ) && ( pais != 'A' ) && ( pais != '@' );
		
		while ( pais_erroneo ) {						// BUCLE POR SI SE INTRODUCE UNA SUCURSAL QUE NO SEA 1,2 � 3
				
			cout << "\nERROR: El pa�s introducido no se encuentra entre los participantes. Por favor, vuelva a intentarlo con el pa�s E ( Espa�a ), A ( Alemania ) o F ( Francia ).";
			cout << "\n\n\tPA�S : ";
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
		
	
	// CONDICIONAL PARA HALLAR QUE SUCURSAL VENDI� M�S
	
	if ( ventasE_mayor )
		
		cout << "\nPA�S: Espa�a\nVENTAS: " << ventasE << " toneladas.";
		
	if ( ventasF_mayor )
		
		cout << "\nPA�S: Francia\nVENTAS: " << ventasF << " toneladas.";
	
	if ( ventasA_mayor )
		
		cout << "\nPA�S: Alemania\nVENTAS: " << ventasA << " toneladas.";
	
	if ( ventas_iguales ) 
	
		cout << "\nPA�SES: Espa�a, Francia y Alemania\nVENTAS: " << ventasE << " toneladas.";
		
	if ( ( ventasE == ventasF ) && ( ventasF > ventasA ) )
	
		cout << "\nPA�SES: Espa�a y Francia\nVENTAS: " << ventasE << " toneladas.";
		
	if ( ( ventasE == ventasA ) && ( ventasA > ventasF ) )
	
		cout << "\nPA�SES: Espa�a y Alemania\nVENTAS: " << ventasE << " toneladas.";
		
	if ( ( ventasF == ventasA ) && ( ventasA > ventasE ) )
	
		cout << "\nPA�SES: Francia y Alemania\nVENTAS: " << ventasF << " toneladas.";
	
	
	// FINALIZACI�N DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}



