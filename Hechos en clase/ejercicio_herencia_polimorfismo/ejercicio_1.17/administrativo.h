#ifndef ADMINISTRATIVO_H_
#define ADMINISTRATIVO_H_
#include "empleado.h"
#include <iostream>
using namespace std;

class Administrativo : public Empleado{
public:
	Administrativo(unsigned int legajo, string nombre, string apellido, unsigned int salario, unsigned int antiguedad);

	void incrementar_salario();
};




#endif /* ADMINISTRATIVO_H_ */
