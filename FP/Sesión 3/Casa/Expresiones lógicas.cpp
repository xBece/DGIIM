/*

Indique que valor devuelven las siguientes expresiones y de qué tipo de dato es dicho valor.
Indique, en su caso, si la expresion está mal formulada -o es errónea- y el motivo:

a. 2 + 3 < 5 + 8
b. 2 < 3 < 4
c. 7/3 + 4.0
d. x == 4&&y == 3||z! = 2 == 1! = 2, si x=4, y=4, z=4 son variables de tipo entero.
e. x <= 4||x >= 4, si x es variable de tipo entero.
f. x < 4&&x > 4, si x es variable de tipo entero.
g. z > 6||a '< z'&&a >' a'||z < 6, si z es de tipo entero y a es de tipo caracter

*/

#include <iostream>			// Inclusión de los recursos de E/S

using namespace std;

int main () {					// Programa principal
	
	// DECLARACIÓN DE LAS VARIABLES A GUARDAR

	int x, z, y;
	double C;
	char a;
	bool A, B, D, E, F, G;
	
	// ENTRADA
	
	cout << "Introduzca un valor para : ";
	
	cout << "\n\n\tx = ";
	cin >> x;
	
	cout << "\n\tz = ";
	cin >> z;
	
	cout << "\n\ta = ";
	cin >> a;
	
	// OPERACIONES
	
	// a. 2 + 3 < 5 + 8 -> Esta expresión está bien formulada y, al ser una expresión booleana, la consola nos devuelve 1 porque es verdadera ( 5 < 13 )
	
	A = 2 + 3 < 5 + 8;
	
	if ( A == false ) 
		
		cout << "\n\nLa expresión A es falsa porque 5 > 8.";
		
	else
		
		cout << "\n\nLa expresión A es verdadera porque 5 < 8.";
		
		
	
	// b. 2 < 3 < 4 -> Esta expresión está bien formulada. Al tratarse de una expresión booleana y ser verdadera ( 2 < 3 < 4 ) la consola nos devolverá un 1
	
	B = 2 < 3 < 4;
	
	if ( B == true ) 
		
		cout << "\n\nLa expresión B es verdadera porque 2 < 3 < 4.";
		
	else
	
		cout << "\n\nLa expresión B es falsa porque 2 > 3 > 4.";
		
		
	
	/* c. 7/3 + 4.0 -> Esta expresión está mal formulada, pues se está tomando al 7/3 como un entero en vez de como decimal. La expresión correcta sería 7/3.0 + 4 , pues
	de esta forma conseguimos que se tome el valor decimal de 7/3. Al mismo tiempo, cambiamos el "4.0" por "4" ya que el 4 es de por sí un entero, no tenemos que considerar
	sus cifras decimales */
	
	C = 7/3.0 + 4;
	
	cout << "\n\nLa expresión C = " << C;
	
	
	
	/* e. x <= 4||x >= 4, si x es variable de tipo entero. Esta expresión está bien formulada y , al tratarse de una expresión booleana y ser verdadera ( x siempre va a ser menor, igual
	o mayor que cuatro ) la consola nos devolverá un 1. */
	
	E = x <= 4||x >= 4;
	
	if ( E == true ) {
		
		if ( x < 4 )
		
			cout << "\n\nLa expresión E es verdadera porque " << x << " < 4";
		
		if ( x > 4 )
			
			cout << "\n\nLa expresión E es verdadera porque " << x << " > 4";
		
		else
			
			cout << "\n\nLa expresión E es verdadera porque " << x << " = 4";
			
	}
	
	else
	
		cout << "\n\nLa expresión B es falsa.";
		
		
	
	/* f. x < 4&&x > 4, si x es variable de tipo entero. Esta expresión está bien formulada. En este caso, la consola nos devolverá un 0 pues la expresión booleana
	es falsa ( x no puede ser menor que 4 y mayor que éste al mismo tiempo ) */
	
	F = x < 4 && x > 4;
	
	if ( F == false ) {
		
		if ( x < 4 )
		
			cout << "\n\nLa expresión F es falsa porque " << x << " < 4 pero no > 4 al mismo tiempo.";
		
		if ( x > 4 )
			
			cout << "\n\nLa expresión F es falsa porque " << x << " > 4 pero no < 4 al mismo tiempo.";
		
		else
			
			cout << "\n\nLa expresión F es falsa porque " << x << " = 4";
			
	}
	
	else
	
		cout << "\n\nLa expresión F es verdadera.";
	
	
	
	/* g. z > 6||a '< z'&&a >' a'||z < 6, si z es de tipo entero y a es de tipo caracter. La expresión está mal formulada, pues los " ' " deben acompañar a la variable, no ir junto
	a la relación. En el caso de que z sea mayor o menor que 6, la expresión booleana será verdadera. No obstante, si z = 6, la expresión booleana dependerá de " a < 'z' && a > 'a' ",
	la cual es falsa para dicho valor de z. */
	
	G = z > 6 || a < 'z' && a > 'a' || z < 6;
	
	if ( G == true ) {
		
		if ( z < 6 )
		
			cout << "\n\nLa expresión G es verdadera porque " << z << " < 6";
		
		if ( z > 6 )
			
			cout << "\n\nLa expresión G es verdadera porque " << z << " > 6";
		
	}
	
	else
	
		cout << "\n\nLa expresión G es falsa.";
	
	
	
	/* d. x == 4&&y == 3||z! = 2 == 1! = 2, si x=4, y=4, z=4 son variables de tipo entero. Esta expresión no está bien formulada, pues el "!" de
	negación tiene que acompañar al "=". En este caso la consola nos devolverá un 1 pues la expresión booleana es verdadera ( la parte de la izquierda del || no es verdadera, 
	pues 4 no es igual a 3, sin embargo, la parte de la derecha si es verdadera pues 4 es distinto que 2 y 1 es distinto de 2, es decir, ambas son iguales porque ambas son falsas. */
	
	x = 4, y = 4, z = 4;
	
	D = x == 4 && y == 3 || z != 2 == 1 != 2;
	
	if ( D == true ) 
		
		cout << "\n\nLa expresión D es verdadera."; 
		
	else 
	
		cout << "\n\nLa expresión D es falsa."; 
	
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

/* OBSERVACIÓN : Al final del programa obtenemos una serie de warnings indicandonos la recomendación de hacer uso de paréntesis en las expresiones.
No obstante, como podemos observar, el programa funciona bien sin la necesidad de ellos debido al orden de precedencia de los operadores relacionales. Por ello, no incluyo
los paréntesis para eliminar los warnings, pues de esta forma queda demostrado que dichas expresiones están bien formuladas, es decir, la recomendación de la inclusión
del paréntesis no significa que por eso ya la expresión esté mal formulada. */
