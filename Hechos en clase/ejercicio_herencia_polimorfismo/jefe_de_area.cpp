#include "jefe_de_area.h"

JefeArea::JefeArea(unsigned int legajo, string nombre, string apellido, unsigned int salario, unsigned int antiguedad):Empleado(legajo, nombre, apellido, salario, antiguedad)
{

}

void JefeArea::incrementar_salario(){
	this->salario = (this->salario * 1.15);
}
