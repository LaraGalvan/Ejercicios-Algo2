#include "cliente_banco.h"
#include <string>
#include <iostream>
using namespace std;

ClienteBanco::ClienteBanco(string nombre, string apellido, long int dni){
	this->nombre = nombre;
	this->apellido = apellido;
	this->dni = dni;
}

void ClienteBanco::cambiar_nombre(string nombre_nuevo){
	nombre = nombre_nuevo;
}

void ClienteBanco::cambiar_apellido(string apellido_nuevo){
	apellido = apellido_nuevo;
}

string ClienteBanco::obtener_nombre(){
	//cout << nombre << endl;
	return nombre;
}

string ClienteBanco::obtener_apellido(){
	//cout << apellido << endl;
	return apellido;
}

long int ClienteBanco::obtener_dni(){
	//cout << dni << endl;
	return dni;
}
