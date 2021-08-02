#ifndef HEADERS_PILA_DINAMICA_H_
#define HEADERS_PILA_DINAMICA_H_

#include "nodo.h"

class Pila_dinamica{

private:
	//Atributos
	Nodo* ultimo;

public: //Metodos

	//constructor
	//PRE: -
	//POST: crea una pila vacia
	Pila_dinamica();

	//PRE: recibe un dato d
	//POST: agrega el dato d en la pila
	void alta(Dato d);

	//PRE: la pila no tiene que estar vacia
	//POST: devuelve el dato que esta encima de la pila y lo saca
	Dato baja();

	//PRE:
	//POST: Devuelve true si la pila esta vacia, false en caso contrario
	bool vacia();

	//PRE: la pila no tiene que estar vacia
	//POST: devuelve el dato que esta encima de la pila
	Dato consulta();

	//destructor
	//PRE: -
	//POST: libera la memoria
	~Pila_dinamica();

};

#endif /* HEADERS_PILA_DINAMICA_H_ */
