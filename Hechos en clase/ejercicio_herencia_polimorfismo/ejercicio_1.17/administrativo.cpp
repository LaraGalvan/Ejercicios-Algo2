#include "administrativo.h"


Administrativo::Administrativo(unsigned int legajo, string nombre, string apellido, unsigned int salario, unsigned int antiguedad):Empleado(legajo, nombre, apellido, salario, antiguedad)
{


}

void Administrativo::incrementar_salario(){

	this->salario = (this->salario * 1.2);
}
