#ifndef EMPLEADO_H_
#define EMPLEADO_H_
#include <iostream>
using namespace std;

class Empleado{
protected:

	unsigned int legajo;
	string nombre;
	string apellido;
	unsigned int salario;
	unsigned int antiguedad;

public:

	//constructor con parametros
	//POST:
	Empleado(unsigned int legajo, string nombre, string apellido, unsigned int salario, unsigned int antiguedad);

	//destructor
	~Empleado();

	//POST: se muestra por pantalla las caracteristicas de los empleados
	void visualizar_caracteristicas();

	//POST: se incrementara el valor del salario
	virtual void incrementar_salario() = 0;

};



#endif /* EMPLEADO_H_ */
