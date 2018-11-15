/* La NASA ha captado una comunicaci�n extraterrestre compuesta exclusivamente de 1 y 0 que siempre termina con 5 ceros, por ejemplo,

	0 0 1 1 1 0 0 0 1 1 0 0 0 1 1 0 1 1 1 1 1 1 1 0 0 0 0 0
	
 Se cree que esta secuencia codifica un n�mero entero. Este n�mero estar� descompuesto en sus factores primos y cada factor aparecer� en la secuencia como la longitud
 de cada secuencia concreta de valores 1. Por ejemplo la secuencia anterior codificar�a los n�meros primos 3, 2, 2 y 7, lo que nos da el n�mero 84 = 3*2*2*7. Se pide construir
 un programa que lea una secuencia de n�meros de este tipo y determine el n�mero oculto. */
 
 #include <iostream>
 
 using namespace std;
 
 int main () {

	// DECLARACI�N DE LAS VARIABLES A GUARDAR
 	
	int numero, factor = 0, numero_oculto = 1, contador_ceros = 0, contador_oculto = 0;


	// ENTRADA
 	
	cout << "Introduzca una secuencia de ceros y unos.";
	cout << "\n\nNOTA : La secuencia finalizar� cuando se introduzcan 6 ceros seguidos." << "\n\n\t";
	cin >> numero;


	// BUCLE POR SI EL N�MERO INTRODUCIDO NO ES NI 0 NI 1
		
	while ( numero != 0 && numero != 1 ) {
		
		cout << "\nERROR : El d�gito introducido no es 0 ni 1, por favor introduzca el dato pedido." << "\n\n\t";
		cin >> numero;

	}


	// CONDICIONAL PARA TENER EN CUENTA EL AUMENTO DEL NUMERO OCULTO SI EL PRIMER N�MERO INTRODUCIDO FUERA DEL BUCLE ES UN 1
	 	
	if ( numero == 1 ) 
	
		factor = numero;


	// BUCLE DE SECUENCIA
		
	do {
		
		while ( ( numero == 0 || numero == 1 ) && contador_ceros < 5 ) {
		
			cout << "\t";
			cin >> numero;
	
			// BUCLE QUE CALCULA EL FACTOR
			
			while ( numero == 1 ) {
			
				factor += numero;
				cout << "\t";
				cin >> numero;
				contador_ceros = 0;
			
			}
			
			// CONDICIONAL PARA HALLAR EL N�MERO OCULTO
			
			if ( factor != 0 ) 
		
				numero_oculto = numero_oculto * factor;
		
			// BUCLE PARA EL TERMINADOR
		
			if ( numero == 0 ) {
			
				contador_ceros++;
				factor = 0;
			
			}
		
			// BUCLE POR SI SE INTRODUCE UN N�MERO ERR�NEO 
		
			while ( numero != 1 && numero != 0 ) {
			
				cout << "\nERROR : Ha metido en la sucesi�n un d�gito no v�lido. Introduzca un 0 o 1 por favor\n\n\t";
				cin >> numero;
			
				if ( numero == 1 ) 	{							// Condicional por si el n�mero es 1 lo contamos para hallar el n�mero oculto
			
					factor += numero;
					contador_ceros = 0;
			
				}
			
				if ( numero == 0 )	{							// Condicional por si el n�mero es 0 lo contamos para la aproximaci�n del posible terminador
				
					contador_ceros++;
					factor = 0;
				
				}
			
			}
	
		}

		cin >> numero;
		
		while ( numero != 1 && numero != 0 ) {						// BUCLE PARA D�GITO ERR�NEO
			
			cout << "\nERROR : Ha metido en la sucesi�n un d�gito no v�lido. Introduzca un 0 o 1 por favor\n\n\t";
			cin >> numero;
		
		}
		
		if ( numero == 0 ) {												// CONDICIONAL PARA FINALIZACI�N DE LA SECUENCIA
			
			contador_ceros++;
			contador_oculto++;
				
			cout << "\nN�mero oculto " << contador_oculto << " : " << numero_oculto;
				
		}
			
		else {																// SE VUELVE A EMPEZAR EL BUCLE PARA HALLAR OTRO N� OCULTO
				
			contador_ceros = 0;
			contador_oculto++;
				
			cout << "\n\nN�mero oculto " << contador_oculto << " : " << numero_oculto;
			numero_oculto = numero;
			factor = numero;
			
		}
	
	} while ( contador_ceros <= 5 );
	
	
	// FINALIZACI�N DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

