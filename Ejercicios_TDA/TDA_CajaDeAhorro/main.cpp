#include <iostream>
#include <string>
#include "caja_ahorro.h"
#include "cliente_banco.h"

using namespace std;

int main(){

	CajaDeAhorro ahorros("Lara", "Galvan", 41582474);
	ahorros.obtener_datos();


	/*
	CajaDeAhorro nuevo("Lara", "Galvan", 41582474, 12000);
	nuevo.obtener_datos();
	nuevo.depositar(5000);
	nuevo.obtener_datos();
	*/
	/*
	CajaDeAhorro ahorros("Lara");
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


