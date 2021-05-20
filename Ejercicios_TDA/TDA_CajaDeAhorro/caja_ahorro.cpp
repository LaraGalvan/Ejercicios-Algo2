#include <iostream>
#include "caja_ahorro.h"
#include <string>

using namespace std;
const int CAJA_VACIA = 0;

CajaDeAhorro::CajaDeAhorro(string nombre, string apellido, long int dni) : titular(nombre, apellido, dni){

	this->saldo = 0;
}

void CajaDeAhorro::cambiar_nombre(string nombre_nuevo){
	titular.cambiar_nombre(nombre_nuevo);
}

void CajaDeAhorro::cambiar_apellido(string apellido_nuevo){
	titular.cambiar_apellido(apellido_nuevo);
}

void CajaDeAhorro::obtener_datos(){
	cout << "Datos del cliente: " << endl;
	cout << "Nombre: " << titular.obtener_nombre() << endl;
	cout << "Apellido: " << titular.obtener_apellido() << endl;
	cout << "DNI: " << titular.obtener_dni() << endl;
	cout << "El saldo es: " << saldo << endl;

}

string CajaDeAhorro::obtener_titular(){
	return titular.obtener_nombre();
}


double CajaDeAhorro::consultar_saldo(){
	return saldo;
}

void CajaDeAhorro::depositar(double monto){
	saldo += monto;
}

void CajaDeAhorro::extraer(double monto){
	if((monto > CAJA_VACIA) && (monto <= saldo)){
		saldo -= monto;
	}
}
