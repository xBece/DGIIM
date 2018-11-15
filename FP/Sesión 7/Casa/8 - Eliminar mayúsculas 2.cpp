/* Resolver el problema anterior con dos bucles anidados no es eficiente. Se propone ahora
utilizar dos variables, posicion_lectura y posicion_escritura que nos vayan indicando,
en cada momento, la componente que se esta leyendo y el sitio donde tiene que
escribirse. Por ejemplo, supongamos que en un determinado momento la variable
posicion_lectura vale 6 y posicion_escritura, 3. Si la componente en la posici�n
6 es una may�scula, simplemente avanzaremos posicion_lectura. Por el contrario, si
fuese una min�scula, la colocaremos en la posici�n 3 y avanzaremos una posici�n ambas
variables. Implementad este algoritmo. */

#include <iostream>

using namespace std;

int ErrorComp(bool numero_erroneo, int & numero_util);				// Funci�n para n�mero �til de componentes inv�lido
void CompVector(int numero_util, char vector []);						// Funci�n para introducir las componentes del vector
void MostrarVec(int numero_util, char vector[]);						// Funci�n para mostrar por pantalla las componentes del vector

int main () {
	
	const int MAX_COMP = 100;
	char vector [MAX_COMP];
	int numero_util, posicion_escritura = 0, componentes = 0;
	bool numero_erroneo;
	
	cout << "Introduce el n�mero de componentes (m�x. 100) que quiere que tenga el vector : ";
	cin >> numero_util;
	
	numero_erroneo = ( numero_util > 100 ) || ( numero_util <= 0 );
	numero_util = ErrorComp ( numero_erroneo, numero_util);
	
	cout << "\nA continuaci�n, introduzca las componentes del vector : \n";
	CompVector(numero_util, vector);
	
	for ( int posicion_lectura = 0; posicion_lectura < numero_util; posicion_lectura++ ) {				// Recorremos el vector
			
			if ( vector[posicion_lectura] < 'A' || vector[posicion_lectura] > 'Z' ) {						// Si la componente no es may�scula, la guardamos
		
				vector[posicion_escritura] = vector [posicion_lectura];
				posicion_escritura++;
				componentes++;
			
			}
	
	}
	
	cout << "\n";
	MostrarVec(componentes, vector);
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;	
	
}

int ErrorComp(bool numero_erroneo, int & numero_util) {
	
	while ( numero_erroneo ) {		
		
	cout << "\nERROR : Ha introducido un n�mero de componentes mayor que el permitido.\n\n\t";
	cout << "N�MERO DE COMPONENETES : ";
	cin >> numero_util;
		
	numero_erroneo = ( numero_util > 100 ) || ( numero_util <= 0 );
		
	} 
	
	return numero_util;
	
}

void CompVector(int numero_util, char vector []) {
	
	for ( int i = 0; i < numero_util; i++ ) {
		
		cout << "\nIntroduce la componenente " << i << " del vector : ";
		cin >> vector [i];
	
	}
	
}

void MostrarVec(int numero_util, char vector[]) {
	
	for ( int i = 0; i < numero_util; i++ )
	
		cout << vector [i] << " ";
		
}

