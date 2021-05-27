#ifndef JEFE_DE_AREA_H_
#define JEFE_DE_AREA_H_
#include "empleado.h"
#include <iostream>
using namespace std;

class JefeArea : public Empleado{

public:
	JefeArea(unsigned int legajo, string nombre, string apellido, unsigned int salario, unsigned int antiguedad);

	void incrementar_salario();
};



#endif /* JEFE_DE_AREA_H_ */
