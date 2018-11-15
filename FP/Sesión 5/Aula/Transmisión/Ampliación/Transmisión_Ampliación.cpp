/* La NASA ha captado una comunicación extraterrestre compuesta exclusivamente de 1 y 0 que siempre termina con 5 ceros, por ejemplo,

	0 0 1 1 1 0 0 0 1 1 0 0 0 1 1 0 1 1 1 1 1 1 1 0 0 0 0 0
	
 Se cree que esta secuencia codifica un número entero. Este número estará descompuesto en sus factores primos y cada factor aparecerá en la secuencia como la longitud
 de cada secuencia concreta de valores 1. Por ejemplo la secuencia anterior codificaría los números primos 3, 2, 2 y 7, lo que nos da el número 84 = 3*2*2*7. Se pide construir
 un programa que lea una secuencia de números de este tipo y determine el número oculto. */
 
 #include <iostream>
 
 using namespace std;
 
 int main () {

	// DECLARACIÓN DE LAS VARIABLES A GUARDAR
 	
	int numero, factor = 0, numero_oculto = 1, contador_ceros = 0, contador_oculto = 0;


	// ENTRADA
 	
	cout << "Introduzca una secuencia de ceros y unos.";
	cout << "\n\nNOTA : La secuencia finalizará cuando se introduzcan 6 ceros seguidos." << "\n\n\t";
	cin >> numero;


	// BUCLE POR SI EL NÚMERO INTRODUCIDO NO ES NI 0 NI 1
		
	while ( numero != 0 && numero != 1 ) {
		
		cout << "\nERROR : El dígito introducido no es 0 ni 1, por favor introduzca el dato pedido." << "\n\n\t";
		cin >> numero;

	}


	// CONDICIONAL PARA TENER EN CUENTA EL AUMENTO DEL NUMERO OCULTO SI EL PRIMER NÚMERO INTRODUCIDO FUERA DEL BUCLE ES UN 1
	 	
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
			
			// CONDICIONAL PARA HALLAR EL NÚMERO OCULTO
			
			if ( factor != 0 ) 
		
				numero_oculto = numero_oculto * factor;
		
			// BUCLE PARA EL TERMINADOR
		
			if ( numero == 0 ) {
			
				contador_ceros++;
				factor = 0;
			
			}
		
			// BUCLE POR SI SE INTRODUCE UN NÚMERO ERRÓNEO 
		
			while ( numero != 1 && numero != 0 ) {
			
				cout << "\nERROR : Ha metido en la sucesión un dígito no válido. Introduzca un 0 o 1 por favor\n\n\t";
				cin >> numero;
			
				if ( numero == 1 ) 	{							// Condicional por si el número es 1 lo contamos para hallar el número oculto
			
					factor += numero;
					contador_ceros = 0;
			
				}
			
				if ( numero == 0 )	{							// Condicional por si el número es 0 lo contamos para la aproximación del posible terminador
				
					contador_ceros++;
					factor = 0;
				
				}
			
			}
	
		}

		cin >> numero;
		
		while ( numero != 1 && numero != 0 ) {						// BUCLE PARA DÍGITO ERRÓNEO
			
			cout << "\nERROR : Ha metido en la sucesión un dígito no válido. Introduzca un 0 o 1 por favor\n\n\t";
			cin >> numero;
		
		}
		
		if ( numero == 0 ) {												// CONDICIONAL PARA FINALIZACIÓN DE LA SECUENCIA
			
			contador_ceros++;
			contador_oculto++;
				
			cout << "\nNúmero oculto " << contador_oculto << " : " << numero_oculto;
				
		}
			
		else {																// SE VUELVE A EMPEZAR EL BUCLE PARA HALLAR OTRO Nº OCULTO
				
			contador_ceros = 0;
			contador_oculto++;
				
			cout << "\n\nNúmero oculto " << contador_oculto << " : " << numero_oculto;
			numero_oculto = numero;
			factor = numero;
			
		}
	
	} while ( contador_ceros <= 5 );
	
	
	// FINALIZACIÓN DEL PROGRAMA
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

