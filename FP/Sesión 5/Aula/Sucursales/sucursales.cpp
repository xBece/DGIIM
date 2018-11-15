/*  Una empresa que tiene tres sucursales decide llevar la contabilidad de las ventas de sus productos
a lo largo de una semana. Para ello registra cada venta con tres n�meros, el identificador
de la sucursal (1,2 o 3), el c�digo del producto (1, 2 o 3) y el n�mero de unidades vendidas.
Dise�ar un programa que lea desde el teclado una serie de registros compuestos por sucursal,
producto, unidades y diga cual es la sucursal que m�s productos ha vendido. La serie de datos
termina cuando la sucursal introducida vale -1. */

#include <iostream>

using namespace std;

int main () {
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	int sucursal, codigo, numero_productos;
	int ventas1 = 0, ventas2 = 0, ventas3 = 0;
	bool no_terminador, sucursal_erronea, codigo_erroneo;
	bool ventas1_mayor, ventas2_mayor, ventas3_mayor, ventas_iguales;
	
	
	// ENTRADA
	
	cerr << "Este programa le permitir� anotar el n�mero de ventas de productos determinados por su c�digo en cada sucursal y, posteriormente, ver cual ha sido la que ha producido mayor n�mero de ventas.";
	
	cerr << "\n\nNOTA : La lista terminar� cuando se introduzca el valor -1 en la sucursal.";
	
	cerr << "\n\n\tSUCURSAL : ";
	cin >> sucursal;
	
	
	// BUCLE POR SI SE INTRODUCE DIRECTAMENTE EL TERMINADOR 
	
	while ( sucursal == -1 ) {
	
		cerr << "\nERROR : Se ha introducido directamente el terminador -1, es decir, no ha sido introducido ning�n dato en la lista. Por favor, vu�lvalo a intentar.";
		cerr << "\n\n\tSUCURSAL : ";
		cin >> sucursal;
		
		sucursal_erronea = ( sucursal != 1 ) && ( sucursal != 2 ) && ( sucursal != 3 ) && ( sucursal != -1 );
	
		while ( sucursal_erronea ) {					// BUCLE POR SI SE INTRODUCE UNA SUCURSAL QUE NO SEA 1,2 � 3
			
			cerr << "\nERROR: La sucursal introducida no existe. Por favor, vuelva a intentarlo con la sucursal 1, 2 � 3.";
			cerr << "\n\n\tSUCURSAL : ";
			cin >> sucursal;
			
			sucursal_erronea = ( sucursal != 1 ) && ( sucursal != 2 ) && ( sucursal != 3 );
				
		}
			
	}

	do {	
	
		// C�DIGO DE PRODUCTO
			
		cerr << "\n\tC�DIGO DEL PRODUCTO : ";
		cin >> codigo;
		
		codigo_erroneo = ( codigo != 1 ) && (codigo != 2 ) && ( codigo != 3 );
		
		while ( codigo_erroneo ) {						// BUCLE POR SI SE INTRODUCE UN C�DIGO QUE NO SEA 1,2 � 3
				
			cerr << "\nERROR: El codigo introducido no existe. Por favor, vuelva a intentarlo con el c�digo 1, 2 � 3.";
			cerr << "\n\n\tC�DIGO DEL PRODUCTO : ";
			cin >> codigo;
			
			codigo_erroneo = ( codigo != 1 ) && (codigo != 2 ) && ( codigo != 3 );
			
		}
			
			
		// N�MERO DE VENTAS
			
		cerr << "\n\tN�MERO DE VENTAS : ";
		cin >> numero_productos;
			
			
		// SWITCH PARA GUARDAR LAS VENTAS DE LA SUCURSAL
		
		switch (sucursal) {
			
			case 1:
				
				ventas1 += numero_productos;
				break;
			
			case 2:
				
				ventas2 += numero_productos;
				break;
			
			case 3:
				
				ventas3 += numero_productos;
				break;
				
		}
		
		
		// SUCURSAL
			
		cerr << "\n\n\tSUCURSAL : ";
		cin >> sucursal;
		
		sucursal_erronea = ( sucursal != 1 ) && ( sucursal != 2 ) && ( sucursal != 3 ) && ( sucursal != -1 );
		
		while ( sucursal_erronea ) {						// BUCLE POR SI SE INTRODUCE UNA SUCURSAL QUE NO SEA 1,2 � 3
				
			cerr << "\nERROR: La sucursal introducida no existe. Por favor, vuelva a intentarlo con la sucursal 1, 2 � 3.";
			cerr << "\n\n\tSUCURSAL : ";
			cin >> sucursal;
			
			sucursal_erronea = ( sucursal != 1 ) && ( sucursal != 2 ) && ( sucursal != 3 );
				
		}
		
		no_terminador = ( sucursal != -1 );
		
	} while ( no_terminador );
	
	
	// VARIABLES BOOLEANAS
	
	ventas1_mayor = ( ventas1 > ventas2 ) && ( ventas1 > ventas3 );
	ventas2_mayor = ( ventas2 > ventas1 ) && ( ventas2 > ventas3 );
	ventas3_mayor = ( ventas3 > ventas1 ) && ( ventas3 > ventas2 );
	ventas_iguales = ( ventas1 == ventas2 ) && ( ventas2 == ventas3 ); 
		
	
	// CONDICIONAL PARA HALLAR QUE SUCURSAL VENDI� M�S
	
	if ( ventas1_mayor )
		
		cout << "SUCURSAL: 1\nVENTAS: " << ventas1;
		
	if ( ventas2_mayor )
		
		cout << "SUCURSAL: 2\nVENTAS: " << ventas2;
	
	if ( ventas3_mayor )
		
		cout << "SUCURSAL: 3\nVENTAS: " << ventas3;
	
	if ( ventas_iguales ) 
	
		cout << "SUCURSALES: 1, 2 y 3\nVENTAS: " << ventas1;
		
	if ( ( ventas1 == ventas2 ) && ( ventas2 > ventas3 ) )
	
		cout << "SUCURSALES: 1 y 2\nVENTAS: " << ventas1;
		
	if ( ( ventas1 == ventas3 ) && ( ventas3 > ventas2 ) )
	
		cout << "SUCURSALES: 1 y 3\nVENTAS: " << ventas1;
		
	if ( ( ventas2 == ventas3 ) && ( ventas3 > ventas1 ) )
	
		cout << "SUCURSALES: 2 y 3\nVENTAS: " << ventas2;
	
	
}

