#include "alarma.h"
#include "sensor.h"
#include <iostream>

Alarma::Alarma(int codigo_seguridad){
	codigo = codigo_seguridad;
	prendida = false;
}

void Alarma::encender(){
	prendida = true;
	sensor_movimiento.encender();
	sensor_contacto.encender();
	sensor_sonido.encender();
}

void Alarma::apagar(int codigo_seguridad){

	if(codigo == codigo_seguridad){
		prendida = false;
		sensor_movimiento.apagar();
		sensor_contacto.apagar();
		sensor_sonido.apagar();
	}
}

bool Alarma::activada(){
	bool fue_activada = false;
	if((sensor_movimiento.activado()) && (sensor_sonido.activado()) && (sensor_contacto.activado())){
		fue_activada = true;
	}
	return fue_activada;
}
