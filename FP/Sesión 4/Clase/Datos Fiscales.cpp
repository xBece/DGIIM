/* Cread un programa que lea los datos fiscales de una persona, reajuste su renta bruta seg�n el
criterio que se indica posteriormente e imprima su renta neta final. */

#include <iostream>
#include <string.h>

using namespace std;

int main () {
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR 
	
		double renta_bruta, renta_neta;
		bool autonomo, pensionista;
		string estado_civil;
		float AntiguaRetencion, NuevaRetencion, x;
		
		
		// ENTRADA
		
		cout << "Este programa hallar� su renta neta a partir de su renta bruta y ciertos datos fiscales.";
		
		cout << "\n\nA continuaci�n, introduzca un 1 para las respuestas 's�' y un 0 para las respuestas 'no'.";
		
		cout << "\n\n\t-> �Es usted aut�nomo?" << endl; cout << "\n\t";
		cin >> autonomo;
		
		cout << "\n\t-> �Es usted pensionista?" << endl; cout << "\n\t";
		cin >> pensionista;
		
		cout << "\nIntroduzca a continuaci�n su estado civil (casado/sotero) : ";
		cin >> estado_civil;
		
		cout << "\nA continuaci�n, introduzca su renta bruta : ";
		cin >> renta_bruta; 
		
		cout << "\nFinalmente, introduzca la retenci�n fiscal en porcentaje : ";
		cin >> AntiguaRetencion;
		
		
		// CONDICIONAL
		
		if ( autonomo == true ) {
		
			x = 3;
			NuevaRetencion = AntiguaRetencion - AntiguaRetencion * x/100;
			
		}
			
		else {
			
			if ( pensionista == true ) {
			
				x = 1;
				NuevaRetencion = AntiguaRetencion + AntiguaRetencion * x/100;
			
			}
			
			else {
			
				x = 2;
				AntiguaRetencion = AntiguaRetencion + AntiguaRetencion * x/100;
				
				if ( renta_bruta > 20000 ) {
					
					if ( estado_civil == "casado" )
					
						x = 8;
						
					else 
					
						x = 10;
						
				NuevaRetencion = AntiguaRetencion + AntiguaRetencion * x/100;
				
				}
				
				else
				
					x = 6;
					NuevaRetencion = AntiguaRetencion + AntiguaRetencion * x/100;
					
				}	
		}
		
		renta_neta = renta_bruta - renta_bruta * NuevaRetencion/100;
		
		
		// SALIDA
		
		cout << "\nSu renta neta es de : " << renta_neta << "�.";
		
		cout << "\n\n";
		
		system ("PAUSE");
		return 0;
		
	}
