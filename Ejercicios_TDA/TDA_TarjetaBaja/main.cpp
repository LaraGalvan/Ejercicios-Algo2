#include <iostream>
#include "tarjeta_baja.h"

using namespace std;

int main(){

	TarjetaBaja sube(12000);
	//int saldo_actual = sube.obtener_saldo();
	//cout << "El saldo actual es: " << saldo_actual << endl;
	sube.cargar(2000);
	int nuevo_saldo = sube.obtener_saldo();
	cout << "El nuevo saldo es: " << nuevo_saldo << endl;
	sube.pagar_viaje_colectivo(1);
	int descuento_viaje = sube.obtener_saldo();
	cout << "Nuevo saldo tras pagar viaje: " << descuento_viaje << endl;
	sube.pagar_viaje_subte();
	float viaje_subte = sube.obtener_saldo();
	cout << "Saldo tras pagar pasaje en subte: " << viaje_subte << endl;
	int viajes_bondi = sube.contar_viajes_colectivo();
	cout << "Cantidad de viajes en bondi: " << viajes_bondi << endl;
	int viajes_en_subte = sube.contar_viajes_subte();
	cout << "Cantidad de viajes en subte: " << viajes_en_subte << endl;

	return 0;
}

