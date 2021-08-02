#include "pila_dinamica.h"


Pila_dinamica::Pila_dinamica(){

	ultimo = 0;
}

void Pila_dinamica::alta(Dato d){

	Nodo* nuevo = new Nodo(d);
	nuevo->cambiar_siguiente(ultimo);
	ultimo = nuevo;
}

Dato Pila_dinamica::baja(){
	Nodo* borrar = ultimo;
	ultimo = borrar->obtener_siguiente();
	Dato devolver = borrar->obtener_dato();
	delete borrar;
	return devolver;
}

bool Pila_dinamica::vacia(){
	return (ultimo == 0);
}

Dato Pila_dinamica::consulta(){

	return ultimo->obtener_dato();
}

Pila_dinamica::~Pila_dinamica(){

	while(!vacia()){
		baja();
	}
}
