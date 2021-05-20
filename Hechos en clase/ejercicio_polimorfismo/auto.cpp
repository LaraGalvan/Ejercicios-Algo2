#include <iostream>
#include "auto.h"

const int PRECIO_BASE_AUTO = 1000;

Auto::Auto(float cilindrada, float combustible, float kilometraje):Vehiculo(cilindrada, combustible, kilometraje)
{
	this->precio_base = PRECIO_BASE_AUTO;
}

float Auto::valor_mercado(){

	return ((this->coeficiente_impositivo() * this->precio_base * this->combustible) / (1 + 0.001 * this->kilometraje));
}


