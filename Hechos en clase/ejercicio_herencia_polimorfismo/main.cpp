#include <iostream>

using namespace std;

#include "director.h"
#include "parser.h"

int main(int argc, char* argv[]){

	Parser parser = Parser(argv);
	Empleado* empleado = parser.procesar_entrada();

	empleado->visualizar_caracteristicas();
	empleado->incrementar_salario();
	cout << "Despues del incremento de salario" << endl;
	cout << "-----------------------------" << endl;
	empleado->visualizar_caracteristicas();
	/*
	Director* director = new Director(108611, "Juan", "Perez", 25000, 5);

	cout << "Caracteristicas del empleado" << endl;
	cout << "-----------------------------" << endl;
	director->visualizar_caracteristicas();
	director->incrementar_salario();
	cout << "Despues del incremento de salario" << endl;
	cout << "---------------------------------" << endl;
	director->visualizar_caracteristicas();
	*/
	return 0;
}

