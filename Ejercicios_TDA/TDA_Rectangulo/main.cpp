#include <iostream>
#include "rectangulo.h"

using namespace std;

int main(){

	Rectangulo datos(2,3);
	int valor_base = datos.obtener_valor_base();
	cout << "El valor de la base es: " << valor_base << endl;
	int valor_altura = datos.obtener_valor_altura();
	cout << "El valor de la altura es: " << valor_altura << endl;
	int perimetro = datos.obtener_perimetro();
	int area = datos.obtener_area();
	cout << "El perimetro es: " << perimetro << endl;
	cout << "El area es: " << area << endl;
	/*
	datos.modificar_valores(4,5);
	int base_nueva = datos.obtener_valor_base();
	int altura_nueva = datos.obtener_valor_altura();
	cout << "Nueva base: " << base_nueva << endl;
	cout << "Nueva altura: " << altura_nueva << endl;
	*/


	return 0;
}



