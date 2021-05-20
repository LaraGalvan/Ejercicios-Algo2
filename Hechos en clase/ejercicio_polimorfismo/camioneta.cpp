#include "camioneta.h"

const int PRECIO_BASE_CAMIONETA = 1500;

Camioneta::Camioneta(float cilindrada, float combustible, float kilometraje) : Vehiculo(cilindrada, combustible, kilometraje){
	this->precio_base = PRECIO_BASE_CAMIONETA;
}

float Camioneta::valor_mercado(){

	return 3 * (this->coeficiente_impositivo() * this->precio_base) / ((this->kilometraje + this->cilindrada) * 0.003);
}


