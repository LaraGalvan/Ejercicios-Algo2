#include "sensor.h"
#include <iostream>

Sensor::Sensor(){
	prendido = false;
	activo = false;
}

void Sensor::encender(){
	prendido = true;
}

void Sensor::apagar(){
	prendido = false;
}

void Sensor::activar(){
	activo = true;
}

bool Sensor::activado(){
	return activo;
}
