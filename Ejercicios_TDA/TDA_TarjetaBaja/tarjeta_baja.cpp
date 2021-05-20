#include <iostream>
#include "tarjeta_baja.h"

using namespace std;
const int SECCION_1 = 1;
const int SECCION_2 = 2;
const int SECCION_3 = 3;
const int PASAJE_MIN = 12;
const int PASAJE_MEDIO = 13;
const float PASAJE_MAX = 13.75;
const float PASAJE_SUBTE = 12.50;

TarjetaBaja::TarjetaBaja(double saldo_inicial){
	saldo = saldo_inicial;
	cant_viajes_colectivo = 0;
	cant_viajes_subte = 0;
}

double TarjetaBaja::obtener_saldo(){
	return saldo;
}

void TarjetaBaja::cargar(double monto){
	saldo += monto;
}

void TarjetaBaja::pagar_viaje_colectivo(int seccion){
	if(seccion == SECCION_1){
		saldo -= PASAJE_MIN;
	}
	else if(seccion == SECCION_2){
		saldo -= PASAJE_MEDIO;
	}
	else if(seccion == SECCION_3){
		saldo -= PASAJE_MAX;
	}
	cant_viajes_colectivo++;
}

void TarjetaBaja::pagar_viaje_subte(){
	saldo -= PASAJE_SUBTE;
	cant_viajes_subte++;
}

int TarjetaBaja::contar_viajes_colectivo(){
	return cant_viajes_colectivo;
}

int TarjetaBaja::contar_viajes_subte(){
	return cant_viajes_subte;
}
