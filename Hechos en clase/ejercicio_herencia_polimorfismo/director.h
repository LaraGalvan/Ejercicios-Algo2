#ifndef DIRECTOR_H_
#define DIRECTOR_H_
#include "empleado.h"
#include <iostream>
using namespace std;


class Director : public Empleado{

public:
	Director(unsigned int legajo, string nombre, string apellido, unsigned int salario, unsigned int antiguedad);

	void incrementar_salario();
};



#endif /* DIRECTOR_H_ */
