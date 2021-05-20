#include <iostream>
#include "nota.h"

using namespace std;

int main(){

	Nota nota_alumno(4);
	int nota = nota_alumno.obtener_valor();
	cout << "La nota es: " << nota << endl;

	bool desaprobo = nota_alumno.desaprobado();
	cout << "Desaprobo (1 = si, 0 = no): " << desaprobo << endl;

	nota_alumno.recuperar(10);
	int nota_nueva = nota_alumno.obtener_valor();

	cout << "La nueva nota es: " << nota_nueva << endl;

	return 0;
}
