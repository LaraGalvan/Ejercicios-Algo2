#include "nodo.h"


Nodo::Nodo(Dato d){
	dato = d;
	siguiente = 0;
}

void Nodo::cambiar_siguiente(Nodo* ps){
	siguiente = ps;
}

Nodo* Nodo::obtener_siguiente(){
	return siguiente;
}

Dato Nodo::obtener_dato(){
	return dato;
}
