#include <iostream>
#include <string>
#include "caja_ahorro.h"
#include "cliente_banco.h"

using namespace std;

int main(){

	CajaDeAhorro ahorros("Juan", "Perez", 41528744);
	ahorros.obtener_datos();


	/*
	CajaDeAhorro nuevo("Juan", "Perez", 41528744, 12000);
	nuevo.obtener_datos();
	nuevo.depositar(5000);
	nuevo.obtener_datos();
	*/
	/*
	CajaDeAhorro ahorros("Juan");
	string titular_cuenta = ahorros.obtener_titular();
	cout << "La titular de la cuenta es: " << titular_cuenta << endl;
	int saldo_actual = ahorros.consultar_saldo();
	cout << "El saldo actual es: " << saldo_actual << endl;
	ahorros.depositar(30000);
	int nuevo_saldo = ahorros.consultar_saldo();
	cout << "Te depositaron un total de: " << nuevo_saldo << endl;
	ahorros.extraer(500);
	nuevo_saldo = ahorros.consultar_saldo();
	cout << "Saldo actual tras la extraccion: " << nuevo_saldo << endl;
	*/
	return 0;
}


