/* El algoritmo de la multiplicación rusa es una forma distinta de calcular la multiplicación de
dos numeros enteros n y m. Para ello este algoritmo va multiplicando por 2 el multiplicador
m y dividiendo (sin decimales) por dos el multiplicando n hasta que n tome el valor 1 y
suma todos aquellos multiplicadores cuyos multiplicandos sean impares. */

#include <iostream>

using namespace std;

int main () {
	
	int multiplicador, multiplicando, resultado = 0;
	
	cout << "Introduzca los siguientes datos : ";
	
	cout << "\n\n\tMultiplicando : ";
	cin >> multiplicando;
	
	cout << "\n\tMultiplicador : ";
	cin >> multiplicador;
	
	
	while ( multiplicando >= 1 ) {
		
		if ( multiplicando % 2 != 0 )
			
			resultado += multiplicador;
		
		multiplicando = multiplicando / 2;
		multiplicador = multiplicador * 2;
		
	}
	
	cout << "\n\nEl resultado del producto es " << resultado << ".";
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}
