#ifndef CAJA_AHORRO_H_
#define CAJA_AHORRO_H_

#include <iostream>
#include <string>
#include "cliente_banco.h"
using namespace std;

class CajaDeAhorro{
	//Atributos
private:
	ClienteBanco titular;
	double saldo;

public:
	//Metodos

	//PRE: la variable no es vacio
	//POST: la instancia queda asignada al titular indicado y con saldo en cero
	CajaDeAhorro(string nombre, string apellido, long int dni);

	//POST: devuelve el nombre del titular de la caja de ahorro
	//string obtener_titular();

	void obtener_datos();

	void cambiar_nombre(string nombre_nuevo);

	void cambiar_apellido(string apellido_nuevo);

	//POST: devuelve el nombre del titular de la caja de ahorro
	string obtener_titular();

	//POST: devuelve el saldo de la caja de ahorro
	double consultar_saldo();

	//PRE: monto es un valor mayor a 0
	//POST: aumenta el saldo de la caja de ahorro segun el monto depositado
	void depositar(double monto);

	//PRE: monto es un valor mayor a cero y menor o igual al saldo de la caja de ahorro
	//POST: Disminuye el saldo de la caja de ahorro segun el monto extraido
	void extraer(double monto);
};

#endif /* CAJA_AHORRO_H_ */
