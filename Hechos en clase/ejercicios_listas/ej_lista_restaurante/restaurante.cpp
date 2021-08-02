#include "restaurante.h"

Restaurante::Restaurante(string nombre, int precio_promedio, Lista<string>* platos){

	this->nombre = nombre;
	this->precio_promedio = precio_promedio;
	this->platos = platos;

}

string Restaurante::obtener_nombre(){

	return (this->nombre);
}


int Restaurante::obtener_precio_promedio(){

	return (this->precio_promedio);
}


Lista<string>* Restaurante::obtener_platos(){

	return (this->platos);
}

