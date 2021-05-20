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


	return 0;
}



