#ifndef PARSER_H_
#define PARSER_H_
#include <iostream>
#include "empleado.h"
using namespace std;

class Parser{

private:
	char** entrada;
	string tipo_empleado();
	unsigned int legajo();
	string nombre();
	string apellido();
	unsigned int salario();
	unsigned int antiguedad();

public:
	Parser(char** argv);

	Empleado* procesar_entrada();

};



#endif /* PARSER_H_ */
