/*

Indique que valor devuelven las siguientes expresiones y de qu� tipo de dato es dicho valor.
Indique, en su caso, si la expresion est� mal formulada -o es err�nea- y el motivo:

a. 2 + 3 < 5 + 8
b. 2 < 3 < 4
c. 7/3 + 4.0
d. x == 4&&y == 3||z! = 2 == 1! = 2, si x=4, y=4, z=4 son variables de tipo entero.
e. x <= 4||x >= 4, si x es variable de tipo entero.
f. x < 4&&x > 4, si x es variable de tipo entero.
g. z > 6||a '< z'&&a >' a'||z < 6, si z es de tipo entero y a es de tipo caracter

*/

#include <iostream>			// Inclusi�n de los recursos de E/S

using namespace std;

int main () {					// Programa principal
	
	// DECLARACI�N DE LAS VARIABLES A GUARDAR

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
	
	// a. 2 + 3 < 5 + 8 -> Esta expresi�n est� bien formulada y, al ser una expresi�n booleana, la consola nos devuelve 1 porque es verdadera ( 5 < 13 )
	
	A = 2 + 3 < 5 + 8;
	
	if ( A == false ) 
		
		cout << "\n\nLa expresi�n A es falsa porque 5 > 8.";
		
	else
		
		cout << "\n\nLa expresi�n A es verdadera porque 5 < 8.";
		
		
	
	// b. 2 < 3 < 4 -> Esta expresi�n est� bien formulada. Al tratarse de una expresi�n booleana y ser verdadera ( 2 < 3 < 4 ) la consola nos devolver� un 1
	
	B = 2 < 3 < 4;
	
	if ( B == true ) 
		
		cout << "\n\nLa expresi�n B es verdadera porque 2 < 3 < 4.";
		
	else
	
		cout << "\n\nLa expresi�n B es falsa porque 2 > 3 > 4.";
		
		
	
	/* c. 7/3 + 4.0 -> Esta expresi�n est� mal formulada, pues se est� tomando al 7/3 como un entero en vez de como decimal. La expresi�n correcta ser�a 7/3.0 + 4 , pues
	de esta forma conseguimos que se tome el valor decimal de 7/3. Al mismo tiempo, cambiamos el "4.0" por "4" ya que el 4 es de por s� un entero, no tenemos que considerar
	sus cifras decimales */
	
	C = 7/3.0 + 4;
	
	cout << "\n\nLa expresi�n C = " << C;
	
	
	
	/* e. x <= 4||x >= 4, si x es variable de tipo entero. Esta expresi�n est� bien formulada y , al tratarse de una expresi�n booleana y ser verdadera ( x siempre va a ser menor, igual
	o mayor que cuatro ) la consola nos devolver� un 1. */
	
	E = x <= 4||x >= 4;
	
	if ( E == true ) {
		
		if ( x < 4 )
		
			cout << "\n\nLa expresi�n E es verdadera porque " << x << " < 4";
		
		if ( x > 4 )
			
			cout << "\n\nLa expresi�n E es verdadera porque " << x << " > 4";
		
		else
			
			cout << "\n\nLa expresi�n E es verdadera porque " << x << " = 4";
			
	}
	
	else
	
		cout << "\n\nLa expresi�n B es falsa.";
		
		
	
	/* f. x < 4&&x > 4, si x es variable de tipo entero. Esta expresi�n est� bien formulada. En este caso, la consola nos devolver� un 0 pues la expresi�n booleana
	es falsa ( x no puede ser menor que 4 y mayor que �ste al mismo tiempo ) */
	
	F = x < 4 && x > 4;
	
	if ( F == false ) {
		
		if ( x < 4 )
		
			cout << "\n\nLa expresi�n F es falsa porque " << x << " < 4 pero no > 4 al mismo tiempo.";
		
		if ( x > 4 )
			
			cout << "\n\nLa expresi�n F es falsa porque " << x << " > 4 pero no < 4 al mismo tiempo.";
		
		else
			
			cout << "\n\nLa expresi�n F es falsa porque " << x << " = 4";
			
	}
	
	else
	
		cout << "\n\nLa expresi�n F es verdadera.";
	
	
	
	/* g. z > 6||a '< z'&&a >' a'||z < 6, si z es de tipo entero y a es de tipo caracter. La expresi�n est� mal formulada, pues los " ' " deben acompa�ar a la variable, no ir junto
	a la relaci�n. En el caso de que z sea mayor o menor que 6, la expresi�n booleana ser� verdadera. No obstante, si z = 6, la expresi�n booleana depender� de " a < 'z' && a > 'a' ",
	la cual es falsa para dicho valor de z. */
	
	G = z > 6 || a < 'z' && a > 'a' || z < 6;
	
	if ( G == true ) {
		
		if ( z < 6 )
		
			cout << "\n\nLa expresi�n G es verdadera porque " << z << " < 6";
		
		if ( z > 6 )
			
			cout << "\n\nLa expresi�n G es verdadera porque " << z << " > 6";
		
	}
	
	else
	
		cout << "\n\nLa expresi�n G es falsa.";
	
	
	
	/* d. x == 4&&y == 3||z! = 2 == 1! = 2, si x=4, y=4, z=4 son variables de tipo entero. Esta expresi�n no est� bien formulada, pues el "!" de
	negaci�n tiene que acompa�ar al "=". En este caso la consola nos devolver� un 1 pues la expresi�n booleana es verdadera ( la parte de la izquierda del || no es verdadera, 
	pues 4 no es igual a 3, sin embargo, la parte de la derecha si es verdadera pues 4 es distinto que 2 y 1 es distinto de 2, es decir, ambas son iguales porque ambas son falsas. */
	
	x = 4, y = 4, z = 4;
	
	D = x == 4 && y == 3 || z != 2 == 1 != 2;
	
	if ( D == true ) 
		
		cout << "\n\nLa expresi�n D es verdadera."; 
		
	else 
	
		cout << "\n\nLa expresi�n D es falsa."; 
	
	
	cout << "\n\n";
	
	system ("PAUSE");
	return 0;
	
}

/* OBSERVACI�N : Al final del programa obtenemos una serie de warnings indicandonos la recomendaci�n de hacer uso de par�ntesis en las expresiones.
No obstante, como podemos observar, el programa funciona bien sin la necesidad de ellos debido al orden de precedencia de los operadores relacionales. Por ello, no incluyo
los par�ntesis para eliminar los warnings, pues de esta forma queda demostrado que dichas expresiones est�n bien formuladas, es decir, la recomendaci�n de la inclusi�n
del par�ntesis no significa que por eso ya la expresi�n est� mal formulada. */
