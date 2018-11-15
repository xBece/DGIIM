/*

Implementar una estructura fecha que represente a una fecha de tipo dia/mes/a�o (ejemplo: 12/3/2008). 

Hacer un programa para:

a. Dado un d�a, mes y a�o, asignar estos valores a una variable de tipo fecha.
b. Actualizar una fecha de entrada a la fecha del dia siguiente.
c. Actualizar una fecha de entrada a la fecha del dia anterior.
d. Copiar una variable de tipo fecha en otra.
e. Decir si el ano de la fecha es bisiesto o no

*/


#include <iostream>				// Inclusi�n de los recursos de E/S

struct fecha {						// Declaraci�n de la estructura que representa la fecha
	
	int dia;
	int mes;
	int ano;
	
};

using namespace std;

int main () {						// Programa Principal
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR
	
	fecha fecha;
	int aux;
	
	
	// ENTRADA
	
		// APARTADO A
		
	cout << "Introduzca una fecha deseada: ";
	
	cout << "\n\n\tDia: ";
	cin >> fecha.dia;
	
	cout << "\n\tMes: ";
	cin >> fecha.mes;
	
	cout << "\n\tA�o: ";
	cin >> fecha.ano;
	
	
	// C�LCULOS Y SALIDA - APARTADOS B Y C
	
	if ( fecha.mes == 1 || fecha.mes == 3 || fecha.mes == 5 || fecha.mes == 7 || fecha.mes == 8 || fecha.mes == 10 || fecha.mes == 12 ) {
		
		if ( fecha.dia >= 2 && fecha.dia <= 30 ) {
			
			cout << "\nMa�ana ser� el " << fecha.dia + 1 << "/" << fecha.mes << "/" << fecha.ano;
			cout << "\n\nY ayer fue " << fecha.dia - 1 << "/" << fecha.mes << "/" << fecha.ano;
		
	}
	
		else {
			
			if ( fecha.dia == 1 ) {
				
				cout << "\nMa�ana ser� el " << fecha.dia + 1 << "/" << fecha.mes << "/" << fecha.ano;
				
				if ( fecha.mes == 1 )
				
					cout << "\n\nY ayer fue 31/12/" << fecha.ano - 1;
				
				if ( fecha.mes == 3 ) {
				
					if ( fecha.ano % 4 != 0 || ( fecha.ano % 100 == 0 && fecha.ano % 400 != 0 ) )
				
						cout << "\n\nY ayer fue 28/2/" << fecha.ano;
					
					else
					
						cout << "\n\nY ayer fue 29/2/" << fecha.ano;
						
				}
			
				if ( fecha.mes == 8 )
				
					cout << "\n\nY ayer fue 31/" << fecha.mes - 1 << "/" << fecha.ano;
				
				if ( fecha.mes != 1 && fecha.mes != 3 && fecha.mes != 8 )
				
					cout << "\n\nY ayer fue 30/" << fecha.mes - 1 << "/" << fecha.ano;
					
			}
			
			if ( fecha.dia == 31 ) {
				
				cout << "\n\nAyer fue " << fecha.dia - 1 << "/" << fecha.mes << "/" << fecha.ano;
				
				if ( fecha.mes == 12 ) 
				
					cout << "\nMa�ana ser� el 1/1/" << fecha.ano + 1;
				
				else 
				
					cout << "\nMa�ana ser� el 1/" << fecha.mes + 1 << "/" << fecha.ano;
					
			}
			
		}
		
	}
	
	else {
		
		if ( fecha.dia >= 2 && fecha.dia <= 29 ) {
			
			if ( fecha.ano % 4 != 0 || ( fecha.ano % 100 == 0 && fecha.ano % 400 != 0 ) ) {
		
				if ( fecha.mes == 2 && fecha.dia == 28 ) {
				
					cout << "\nMa�ana ser� el 1/3/" << fecha.ano;
					cout << "\n\nAyer fue 27/2/" << fecha.ano;
				
				}
				
				else {
				
					cout << "\nMa�ana ser� el " << fecha.dia + 1 << "/" << fecha.mes << "/" << fecha.ano;
					cout << "\n\nAyer fue " << fecha.dia - 1 << "/" << fecha.mes << "/" << fecha.ano;
					
				}		
			}
				
			else {
		
				if ( fecha.mes == 2 && fecha.dia == 29 ) {
				
					cout << "\nMa�ana ser� el 1/3/" << fecha.ano;
					cout << "\n\nAyer fue el 28/2/" << fecha.ano;
				
				}
				
				else {
					
					cout << "\nMa�ana ser� el " << fecha.dia + 1 << "/" << fecha.mes << "/" << fecha.ano;
					cout << "\n\nAyer fue " << fecha.dia - 1 << "/" << fecha.mes << "/" << fecha.ano;
					
				}
			}
		}
			
		if ( fecha.dia == 1 ) {
			
			cout << "\nMa�ana ser� el " << fecha.dia + 1 << "/" << fecha.mes << "/" << fecha.ano;
			cout << "\nAyer fue el 31/" << fecha.mes - 1 << "/" << fecha.ano;
			
		}
		
		if ( fecha.dia == 30 ) {
			
			cout << "\nMa�ana ser� el 1/" << fecha.mes + 1 << "/" << fecha.ano;
			cout << "\n\nAyer fue " << fecha.dia - 1 << "/" << fecha.mes << "/" << fecha.ano;
			
		}
	}
	
	
	// APARTADO E
	
	if ( fecha.ano % 4 != 0 || ( fecha.ano % 100 == 0 && fecha.ano % 400 != 0 ) )
	
		cout << "\n\n" << fecha.ano << " no es un a�o bisiesto.";
	
	else 
		
		cout << "\n\n" << fecha.ano << " es un a�o bisiesto.";
	
	
	// APARTADO D
	
		aux = fecha.dia;
		fecha.dia = fecha.ano;
		fecha.ano = fecha.mes;
		fecha.mes = aux;
		
		cout << "\n\nSi copiamos una variable tipo fecha en otra: ";
		
		cout << "\n\n\tDia (copiamos el valor de a�o) = " << fecha.dia;
		cout << "\n\n\tMes (copiamos el valor de d�a) = " << fecha.mes;
		cout << "\n\n\tA�o (copiamos el valor de mes) = " << fecha.ano;
		
	
	// FINALIZAR PROGRAMA
		
		cout << "\n\n";
		
		system ("PAUSE");
		return 0;
		
	}
