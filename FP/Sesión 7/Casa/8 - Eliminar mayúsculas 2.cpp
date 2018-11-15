/* Resolver el problema anterior con dos bucles anidados no es eficiente. Se propone ahora
utilizar dos variables, posicion_lectura y posicion_escritura que nos vayan indicando,
en cada momento, la componente que se esta leyendo y el sitio donde tiene que
escribirse. Por ejemplo, supongamos que en un determinado momento la variable
posicion_lectura vale 6 y posicion_escritura, 3. Si la componente en la posición
6 es una mayúscula, simplemente avanzaremos posicion_lectura. Por el contrario, si
fuese una minúscula, la colocaremos en la posición 3 y avanzaremos una posición ambas
variables. Implementad este algoritmo. */

#include <iostream>

using namespace std;

int ErrorComp(bool numero_erroneo, int & numero_util);				// Función para número útil de componentes inválido
void CompVector(int numero_util, char vector []);						// Función para introducir las componentes del vector
void MostrarVec(int numero_util, char vector[]);						// Función para mostrar por pantalla las componentes del vector

int main () {
	
	const int MAX_COMP = 100;
	char vector [MAX_COMP];
	int numero_util, posicion_escritura = 0, componentes = 0;
	bool numero_erroneo;
	
	cout << "Introduce el número de componentes (máx. 100) que quiere que tenga el vector : ";
	cin >> numero_util;
	
	numero_erroneo = ( numero_util > 100 ) || ( numero_util <= 0 );
	numero_util = ErrorComp ( numero_erroneo, numero_util);
	
	cout << "\nA continuación, introduzca las componentes del vector : \n";
	CompVector(numero_util, vector);
	
	for ( int posicion_lectura = 0; posicion_lectura < numero_util; posicion_lectura++ ) {				// Recorremos el vector
			
			if ( vector[posicion_lectura] < 'A' || vector[posicion_lectura] > 'Z' ) {						// Si la componente no es mayúscula, la guardamos
		
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
		
	cout << "\nERROR : Ha introducido un número de componentes mayor que el permitido.\n\n\t";
	cout << "NÚMERO DE COMPONENETES : ";
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

