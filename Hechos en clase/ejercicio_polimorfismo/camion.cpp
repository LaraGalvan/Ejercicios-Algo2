#include "camion.h"

const int PRECIO_BASE_CAMION = 2000;

Camion::Camion(float cilindrada, float combustible, float kilometraje) :Vehiculo(cilindrada, combustible, kilometraje)
{
	this->precio_base = PRECIO_BASE_CAMION;
}

float Camion::valor_mercado(){

	return ((this->coeficiente_impositivo() * this->precio_base) / ( this->kilometraje + this->cilindrada + this->combustible) * 0002);
}
