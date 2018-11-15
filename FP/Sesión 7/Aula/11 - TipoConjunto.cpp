#include <iostream>

using namespace std;

const int MAX_COMP = 1000;

struct TipoConjunto {
	
    int num_elem;
    int elementos[MAX_COMP];
    
};

void ComponentesVector(TipoConjunto & conjunto, const char nombre[]);									// Guardamos un vector
void MostrarVector(TipoConjunto conjunto, const char nombre[]);											// Muestra por pantalla el vector
void OrdenarElementos(TipoConjunto & conjunto);																	// Ordena los elementos del vector
bool ElementoPertenece(int elemento, TipoConjunto conjunto);												// Comprueba si el elemento pertenece al conjunto o no
void IncorporarElemento(int elemento, TipoConjunto & conjunto);											// Añade un elemento al vector
TipoConjunto UnionConjuntos(TipoConjunto conjunto1, TipoConjunto conjunto2);							// Calcula la unión de dos vectores
TipoConjunto InterseccionConjuntos(TipoConjunto conjunto1, TipoConjunto conjunto2);					// Calcula la intersección de dos vectores

int main(){
	
   TipoConjunto conjunto1, conjunto2;
    
   ComponentesVector(conjunto1, "1");
   ComponentesVector(conjunto2, "2");
    
   cout << "\n\nORDENACIÓN DE LOS CONJUNTOS \n";
    
   OrdenarElementos(conjunto1);
   OrdenarElementos(conjunto2);
    
   MostrarVector(conjunto1, "1 ordenado");
   MostrarVector(conjunto2, "2 ordenado");
    
   // Comprobar si el elemento pertenece
    
   int elemento;
   bool resultado1, resultado2;
    
   cout << "\n\nPERTENENCIA";
   cout << "\n\n\t-> Introduzca un elemento para comprobar si existe en los conjuntos: ";
   cin >> elemento;
    
   resultado1 = ElementoPertenece(elemento, conjunto1);
   resultado2 = ElementoPertenece(elemento, conjunto2);
    
   cout << "\n\t\t• El número " << elemento << " " << (resultado1 ? "sí" : "no") << " se encuentra en el conjunto 1." << endl;
   cout << "\n\t\t• El número " << elemento << " " << (resultado2 ? "sí" : "no") << " se encuentra en el conjunto 2." << endl;


   //Añadir elemento al conjunto
    
   cout << "\n\nAÑADIR";
   cout << "\n\n- Introduzca un elemento para añadir al : ";
   cout << "\n\nConjunto 1 : ";
   cin >> elemento;
   IncorporarElemento(elemento, conjunto1);
    
   MostrarVector(conjunto1, "1 tras la inserción");
    
   cout << "\nConjunto 2 : ";
   cin >> elemento;
   IncorporarElemento(elemento, conjunto2);
	
   MostrarVector(conjunto2, "2 tras la inserción");
    
    
   //Unión de conjuntos
    
   TipoConjunto union_conjuntos = UnionConjuntos(conjunto1, conjunto2);
    
   cout << "\n\nUNIÓN\n";
   MostrarVector(union_conjuntos, "unión de 1 y 2");
    
    
   //Intersección de conjuntos
    
   TipoConjunto interseccion_conjuntos = InterseccionConjuntos(conjunto1, conjunto2);
    
   cout << "\n\nINTERSECCIÓN\n";
   MostrarVector(interseccion_conjuntos, "intersección de 1 y 2");
    
	cout << "\n\n";
   system ("PAUSE");
	 
   return 0;
    
}

void ComponentesVector(TipoConjunto & conjunto, const char nombre[]){
   
   cout << "\nCONJUNTO " << nombre;
   cout << "\n\n\t-> Introduzca el número de componentes del conjunto " << nombre << ": ";
   cin >> conjunto.num_elem;
    
   cout << "\n\t-> Introduzca los elementos del conjunto " << nombre << ": ";
    
   for (int i = 0; i < conjunto.num_elem; i++) {
    	
   	cin >> conjunto.elementos[i];
      
   }
    
}


void MostrarVector(TipoConjunto conjunto, const char nombre[]) {
    
   cout << "\n\t•Los elementos del conjunto " << nombre << " son: ";
    
   for (int i = 0; i < conjunto.num_elem; i++){
    	
      cout << conjunto.elementos[i] << " ";
        
   }
    
   cout << endl;
    
}


void OrdenarElementos(TipoConjunto & conjunto){
    
   bool elemento_ordenado = false;
    
   int swap_aux;
    
   for (int i = 1; i < conjunto.num_elem; i++){
    	
      elemento_ordenado = false;
        
      for (int j = i; j > 0 && !elemento_ordenado; j--){
        	
         if (conjunto.elementos[j] < conjunto.elementos[j-1]){
            	
            swap_aux = conjunto.elementos[j];
                
            conjunto.elementos[j] = conjunto.elementos[j-1];
                
            conjunto.elementos[j-1] = swap_aux;
                
         } 
			
			else {
            	
            elemento_ordenado = true;
            
         }
         
      }
        
   }
    
}


bool ElementoPertenece(int elemento, TipoConjunto conjunto){
    
   bool result = false;
   int extremo_inferior = 0, extremo_superior = conjunto.num_elem - 1;
   int i = extremo_inferior + (extremo_superior - extremo_inferior)/2;
    
   while (extremo_inferior <= extremo_superior && !result){
    	
      if (elemento == conjunto.elementos[i]){
        	
         result = true;
            
      } else if (elemento < conjunto.elementos[i]){
        	
         extremo_superior = i - 1;
            
      } else{
        	
         extremo_inferior = i + 1;
            
      }
        
      i = extremo_inferior + (extremo_superior - extremo_inferior)/2;
        
   }
    
   return result;
    
}


void IncorporarElemento(int elemento, TipoConjunto & conjunto){
	
   bool incorporado = false;
    
   for (int i = 0; i < conjunto.num_elem && !incorporado; i++){
    	
      if (elemento < conjunto.elementos[i]){
        	
         for (int j = conjunto.num_elem - 1; j >= i ; j--) {
            
            conjunto.elementos[j+1] = conjunto.elementos[j];
                
         }
            
         conjunto.elementos[i] = elemento;
         incorporado = true;
            
      }
       
   }
    
   if (!incorporado ) {
    	
      conjunto.elementos[conjunto.num_elem] = elemento;
        
   }
    
   conjunto.num_elem++;
    
}


TipoConjunto UnionConjuntos(TipoConjunto conjunto1, TipoConjunto conjunto2) {
    
   TipoConjunto resultado;
   resultado.num_elem = conjunto1.num_elem + conjunto2.num_elem;
    
   int i1 = 0, i2 = 0, i_result = 0;
    
   while (i1 < conjunto1.num_elem || i2 < conjunto2.num_elem) {
    	
      if (i1 < conjunto1.num_elem && i2 < conjunto2.num_elem) {
        	
         if (conjunto1.elementos[i1] < conjunto2.elementos[i2]) {
            	
         	resultado.elementos[i_result] = conjunto1.elementos[i1];
            i1++;
                
         } 
				
			else {
                
				resultado.elementos[i_result] = conjunto2.elementos[i2];
            i2++;
                
         }
            
       }
        
      else if (i1 < conjunto1.num_elem) {
        	
         resultado.elementos[i_result] = conjunto1.elementos[i1];
         i1++;
            
      } 
		 
		else {
            
			resultado.elementos[i_result] = conjunto2.elementos[i2];
         i2++;
            
      }
       
      i_result++;
        
	}
    
   return resultado;
    
}


TipoConjunto InterseccionConjuntos(TipoConjunto conjunto1, TipoConjunto conjunto2) {
    
   TipoConjunto resultado;
   bool tachados[MAX_COMP];
   bool pertenece_a_interseccion = false;
   int i_result = 0;
    
   for (int i = 0; i < conjunto2.num_elem; i++){
    	
      tachados[i] = false;
        
   }
    
   for (int i1 = 0; i1 < conjunto1.num_elem; i1++) {
    	
      pertenece_a_interseccion = false;
        
      for (int i2 = 0; i2 < conjunto2.num_elem && !pertenece_a_interseccion; i2++) {
        	
         if (!tachados[i2] && conjunto1.elementos[i1] == conjunto2.elementos[i2]) {
            	
            pertenece_a_interseccion = true;
            tachados[i2] = true;
         	resultado.elementos[i_result] = conjunto1.elementos[i1];
            i_result++;
               
         }
         
      }
   }
    
   resultado.num_elem = i_result;
    
   return resultado;
    
}
