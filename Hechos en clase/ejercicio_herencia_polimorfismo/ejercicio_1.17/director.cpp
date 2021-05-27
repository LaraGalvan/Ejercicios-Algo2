#include "director.h"

Director::Director(unsigned int legajo, string nombre, string apellido, unsigned int salario, unsigned int antiguedad) : Empleado(legajo, nombre, apellido, salario, antiguedad)
{

}

void Director::incrementar_salario(){

	this->salario = (this->salario * 1.1);
}
