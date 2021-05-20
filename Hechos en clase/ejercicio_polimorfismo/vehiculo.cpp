#include "vehiculo.h"


Vehiculo::Vehiculo(float cilindrada, float combustible, float kilometraje){

	this->cilindrada = cilindrada;
	this->combustible = combustible;
	this->kilometraje = kilometraje;
}

float Vehiculo::coeficiente_impositivo(){

	return ((this->precio_base * this->cilindrada) / 1000000);
}
